// SPDX-FileCopyrightText: 2024 Simon Gene Gottlieb
// SPDX-License-Identifier: CC0-1.0

#include <ankerl/unordered_dense.h>

int main() {
    auto ids = ankerl::unordered_dense::set<size_t>{};
    ids.insert(5);
    return 0;
}
