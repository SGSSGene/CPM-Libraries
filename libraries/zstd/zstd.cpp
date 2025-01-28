// SPDX-FileCopyrightText: 2024 Simon Gene Gottlieb
// SPDX-License-Identifier: CC0-1.0
#include <array>
#include <cstdlib>
#include <vector>
#include <zstd.h>

int main(int argc, const char** argv) {
    auto uncompressedBuffer = std::array<char, 4096>{};
    for (auto& c: uncompressedBuffer) {
        c = rand()% 256;
    }

    auto compressedBuffer = std::vector<char>{};
    compressedBuffer.resize(ZSTD_compressBound(uncompressedBuffer.size()));

    auto actualCompressedSize = ZSTD_compress(compressedBuffer.data(), compressedBuffer.size(), uncompressedBuffer.data(), uncompressedBuffer.size(), 1);
    if (ZSTD_isError(actualCompressedSize)) {
        return 1; // Failed compressing
    }
    compressedBuffer.resize(actualCompressedSize);
    return 0;
}
