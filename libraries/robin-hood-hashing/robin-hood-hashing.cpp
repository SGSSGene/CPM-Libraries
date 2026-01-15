// SPDX-FileCopyrightText: 2024 Simon Gene Gottlieb
// SPDX-License-Identifier: CC0-1.0

#include <robin_hood.h>

int main() {
    auto ids = robin_hood::unordered_set<size_t>{};
    ids.insert(5);
    return 0;
}
