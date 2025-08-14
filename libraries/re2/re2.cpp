// SPDX-FileCopyrightText: 2024 Simon Gene Gottlieb
// SPDX-License-Identifier: CC0-1.0

#include <re2/re2.h>
#include <cassert>

int main() {
    assert(RE2::PartialMatch("hello", "h.*o"));
}
