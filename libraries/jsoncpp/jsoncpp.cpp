// SPDX-FileCopyrightText: 2024 Simon Gene Gottlieb
// SPDX-License-Identifier: CC0-1.0

#include <json/json.h>
#include <iostream>
#include <fstream>
#include <sstream>

int main() {
    auto ss = std::stringstream{"{\"pi\": 3.14159, \"n\": 10}"};
    Json::Value root;
    Json::CharReaderBuilder builder;
    JSONCPP_STRING errs;
    parseFromStream(builder, ss, &root, &errs);
    std::cout << root << "\n";
}
