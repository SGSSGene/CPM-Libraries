// SPDX-FileCopyrightText: 2020 Lutz Freitag
// SPDX-License-Identifier: MIT

#include <iostream>
#include <cndl/Route.h>
#include <cndl/Server.h>
#include <simplyfile/socket/Host.h>

using namespace std::literals::string_view_literals;

cndl::GlobalRoute a_route {R"(/(.+)/?)", [](cndl::Request const&, std::string_view arg) -> cndl::OptResponse {
    // arg will have the value of the capture in the regex
    return "<html><head></head><body><h1>cndl rocks</h1></body></html>"sv;
}, {.methods={"GET", "POST"}}};

struct : cndl::WebsocketHandler {
    using Websocket = cndl::Websocket;
    using Request = cndl::Request;
    void onMessage([[maybe_unused]] Websocket& ws, [[maybe_unused]] AnyMessage msg) override {
        if (std::holds_alternative<TextMessage>(msg)) {
            std::cout << std::get<TextMessage>(msg) << std::endl;
        }
        ws.send(msg);
    }

    bool canOpen(Request const& request, [[maybe_unused]] int magic) {
        std::cout << "socket connection request " << std::endl;
        return true;
    }

    void onOpen([[maybe_unused]] Request const& request, [[maybe_unused]] Websocket& ws, [[maybe_unused]] int magic) {
        std::cout << "socket connected " << request.header.url << std::endl;
    }

    void onClose([[maybe_unused]] Websocket& ws) override {
        std::cout << "socket closed" << std::endl;
    }
} echo_handler{};

int main()
{
    cndl::Server& server = cndl::Server::getGlobalServer();
    for (auto host : simplyfile::getHosts("localhost", "8080")) {
        server.listen(host); // listen on localhost (ipv4 and ipv6 if available)
    }

    cndl::WSRoute wsroute{std::regex{R"(/(\d+)/)"}, echo_handler}; // route requests to /[number]/ to the echo_handler (onConnect will be called with the value of [number])
    server.getDispatcher().addRoute(wsroute); // hook the route to the server (you can have multiple routes from a single endpoint) 
    while(true) {
        server.getEpoll().work(); // run the server's ioloop (epoll). call this from as many threads as you like
    }
    return 0;
}
