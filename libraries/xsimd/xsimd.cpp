// SPDX-FileCopyrightText: 2016, Johan Mabille, Sylvain Corlay, Wolf Vollprecht and Martin Renou
// SPDX-FileCopyrightText: 2016, QuantStack
// SPDX-FileCopyrightText: 2018, Serge Guelton
// SPDX-License-Identifier: BSD-3-Clause

#include <iostream>
#include <xsimd/xsimd.hpp>

namespace xs = xsimd;

int main(int argc, char* argv[]) {
    xs::batch<double, xs::avx2> a = {1.5, 2.5, 3.5, 4.5};
    xs::batch<double, xs::avx2> b = {2.5, 3.5, 4.5, 5.5};
    auto mean = (a + b) / 2;
    std::cout << mean << std::endl;
    return 0;
}
