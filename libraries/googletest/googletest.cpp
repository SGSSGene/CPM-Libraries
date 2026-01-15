// SPDX-FileCopyrightText: 2024 Simon Gene Gottlieb
// SPDX-License-Identifier: CC0-1.0

#include <gtest/gtest.h>

TEST(MULTIPLiCATION, TwoNegatives) {
    auto v = -10;
    auto r = v*v;

    EXPECT_GT(r, 0);
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
