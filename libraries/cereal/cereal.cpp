// SPDX-FileCopyrightText: 2024 Simon Gene Gottlieb
// SPDX-License-Identifier: CC0-1.0

#include <cereal/archives/binary.hpp>
#include <cereal/types/memory.hpp>
#include <cereal/types/unordered_map.hpp>
#include <fstream>

struct S {
    int value;
    template <typename Archive>
    void serialize(Archive& ar) {
        ar(value);
    }
};

int main() {
    auto fs = std::ofstream{"out.cereal", std::ios::binary};
    auto archive = cereal::BinaryOutputArchive{fs};

    S s;
    archive(s);

    return 0;
}
