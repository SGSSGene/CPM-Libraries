// SPDX-FileCopyrightText: 2024 Simon Gene Gottlieb
// SPDX-License-Identifier: CC0-1.0

#include <bzlib.h>

int main() {
    int bzerror;
    auto f = fopen ( "myfile.bz2", "w" );
    auto b = BZ2_bzWriteOpen(&bzerror, f, /*.blockSize100k=*/0, /*.verbosity=*/0, 9);
    return 0;
}
