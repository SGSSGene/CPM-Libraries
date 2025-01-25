// SPDX-FileCopyrightText: 2024 Simon Gene Gottlieb
// SPDX-License-Identifier: CC0-1.0

#include <bit7z/bitfileextractor.hpp>

int main() {

try { // bit7z classes can throw BitException objects
    using namespace bit7z;

    Bit7zLibrary lib{ "7za.dll" };
    BitFileExtractor extractor{ lib, BitFormat::SevenZip };

} catch ( const bit7z::BitException& ex ) { /* Do something with ex.what()...*/ }

}
