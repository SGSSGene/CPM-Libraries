// SPDX-FileCopyrightText: 2024 Simon Gene Gottlieb
// SPDX-License-Identifier: CC0-1.0

#include <yaml-cpp/yaml.h>
#include <iostream>
#include <fstream>

int main() {
    YAML::Node node = YAML::Load("{pi: 3.14159, [0, 1]: integers}");

    // this needs the conversion from Node to double
    double pi = node["pi"].as<double>();

    // this needs the conversion from double to Node
    node["e"] = 2.71828;

    // this needs the conversion from Node to std::vector<int> (*not* the other way around!)
    std::vector<int> v;
    v.push_back(0);
    v.push_back(1);
    std::string str = node[v].as<std::string>();
}
