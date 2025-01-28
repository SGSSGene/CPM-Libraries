// SPDX-FileCopyrightText: 2024 Simon Gene Gottlieb
// SPDX-License-Identifier: CC0-1.0
#include <xtl/xhalf_float.hpp>

int main() {
    static_assert(xtl::is_scalar<xtl::half_float>::value);
    return 0;
}
