// SPDX-FileCopyrightText: 2024 Simon Gene Gottlieb
// SPDX-License-Identifier: CC0-1.0

#include <xxhash.h>

int main() {
    auto state = XXH64_createState();
    XXH64_reset(state, 0);
    // Implement what ever you need...
    return 0;
}

