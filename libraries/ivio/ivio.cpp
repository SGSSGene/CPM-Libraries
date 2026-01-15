// SPDX-FileCopyrightText: 2024 Simon Gene Gottlieb
// SPDX-License-Identifier: CC0-1.0

#include <iostream>
#include <ivio/ivio.h>

int main(int argc, char** argv) {
    auto inputFile = std::filesystem::path{argv[1]};
    auto reader = ivio::fasta::reader{{.input = inputFile}};
    for (auto record_view : reader) {
        std::cout << "id: " << record_view.id << "\n";
        std::cout << "seq: " << record_view.seq << "\n";
    }
}
