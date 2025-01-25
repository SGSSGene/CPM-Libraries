// SPDX-FileCopyrightText: 2024 Simon Gene Gottlieb
// SPDX-License-Identifier: CC0-1.0

#include <cstdlib>
#include <mimalloc.h>

int main() {
    void* ptr = mi_malloc(100);
    mi_free(ptr);
    return 0;
}
