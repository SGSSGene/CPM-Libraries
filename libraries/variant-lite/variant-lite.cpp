// SPDX-FileCopyrightText: 2016 by Martin Moene
// SPDX-License-Identifier: BSL-1.0

#include <nonstd/variant.hpp>

#include <cassert>
#include <string>

using namespace nonstd;

int main() {
    std::string hello = "hello, world";

    variant< char, int, long, std::string > var;

    var =  'v' ; assert( get<  0 >( var ) == 'v' );
                 assert( get<char>( var ) == 'v' );
    var =   7  ; assert( get<int >( var ) ==  7  );
    var =  42L ; assert( get<long>( var ) == 42L );
    var = hello; assert( get<std::string>( var ) == hello );
}
