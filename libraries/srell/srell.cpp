// SPDX-FileCopyrightText: 2012-2024, Nozomu Katoo
// SPDX-License-Identifier: BSD-2-Clause

//  Example 01:
#include <cstdio>
#include <string>
#include <iostream>
#include <srell.hpp>

int main() {
    srell::regex e;     //  Regular expression object holder.
    srell::cmatch m;    //  Object which receives results.

    e = "\\d+[^-\\d]+"; //  Compile a regular expression string.
    if (srell::regex_search("1234-5678-90ab-cdef", m, e))
    {
        //  If use printf.
        const std::string s(m[0].first, m[0].second);
            //  The code above can be replaced with one of the following lines.
            //  const std::string s(m[0].str());
            //  const std::string s(m.str(0));
        std::printf("result: %s\n", s.c_str());

        //  If use iostream.
        std::cout << "result: " << m[0] << std::endl;
    }
    return 0;
}
