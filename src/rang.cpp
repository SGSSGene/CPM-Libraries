// SPDX-FileCopyrightText: 2024 Simon Gene Gottlieb
// SPDX-License-Identifier: CC0-1.0

#include <rang.hpp>

int main() {
    std::cout << "Plain old text"
         << rang::style::bold << "Rang styled text!!"
         << rang::style::reset << "\n";
}
