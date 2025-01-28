// SPDX-FileCopyrightText: 2024 Simon Gene Gottlieb
// SPDX-License-Identifier: CC0-1.0

#include <ctre.hpp>
#include <iostream>

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cout << "no argument provided\n";
        return 0;
    }
    std::string s = argv[1];
    if (auto m = ctre::match<"([0-9]+)">(s)) {
        std::cout << "matched a number\n";
    } else {
        std::cout << "not a number\n";
        return 1;
    }
    return 0;
}
