// SPDX-FileCopyrightText: 2024 Simon Gene Gottlieb
// SPDX-License-Identifier: CC0-1.0

#include <catch2/catch_all.hpp>

TEST_CASE("test double negation") {
    bool b = true;
    REQUIRE(!!b == b);
}
