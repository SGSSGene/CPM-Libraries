// SPDX-FileCopyrightText: 2024 Simon Gene Gottlieb
// SPDX-License-Identifier: CC0-1.0

#include <fstream>
#include <nlohmann/json.hpp>
using json = nlohmann::json;


int main() {
    auto f = std::ifstream{"example.json"};
    json data = json::parse(f);
}
