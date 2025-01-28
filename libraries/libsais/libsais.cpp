// SPDX-FileCopyrightText: 2024 Simon Gene Gottlieb
// SPDX-License-Identifier: CC0-1.0

#include <iostream>
#include <string>
#include <vector>

#include <libsais.h>
#include <libsais64.h>


int main(int argc, char** argv) {
    auto input = std::string{"Hallo Welt"};
    if (argc > 1) {
        input = argv[1];
    }
    auto sa = std::vector<int64_t>{};
    sa.resize(input.size());
    auto r = libsais64(reinterpret_cast<uint8_t*>(input.data()), sa.data(), input.size(), 0, nullptr);
    if (r != 0) {
        std::cout << "failed constructing the SA\n";
        return 1;
    }
    for (auto e : sa) {
        std::cout << e << " " << input[(e+input.size()-1) % input.size()] << '\n';
    }
    return 0;
}
