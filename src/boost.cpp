// SPDX-FileCopyrightText: 2024 Simon Gene Gottlieb
// SPDX-License-Identifier: CC0-1.0

#include <boost/graph/adjacency_list.hpp>

using Graph = boost::adjacency_list<>;

int main() {
    auto g = Graph{};
    boost::add_edge({}, {}, g);
    return 0;
}
