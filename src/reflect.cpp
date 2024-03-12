// SPDX-FileCopyrightText: 2024 Kris Jusiak
// SPDX-License-Identifier: BSL-1.0

#include <reflect>
#include <tuple>
#include <iostream>
#include <format>

enum E { A, B };
struct foo { int a; E b; };

constexpr auto f = foo{.a = 42, .b = B};

using namespace std::literals;

// reflect::size
static_assert(2 == reflect::size(f));

// reflect::type_name
static_assert("foo"sv == reflect::type_name(f));
static_assert("int"sv == reflect::type_name(f.a));
static_assert("E"sv   == reflect::type_name(f.b));

// reflect::enum_name
static_assert("B"sv == reflect::enum_name(f.b));

// reflect::member_name
static_assert("a"sv == reflect::member_name<0>(f));
static_assert("b"sv == reflect::member_name<1>(f));

// reflect::get
static_assert(42 == reflect::get<0>(f)); // by index
static_assert(B  == reflect::get<1>(f));

static_assert(42 == reflect::get<"a">(f)); // by name
static_assert(B  == reflect::get<"b">(f));

// reflect::to
constexpr auto t = reflect::to<std::tuple>(f);
static_assert(42 == std::get<0>(t));
static_assert(B  == std::get<1>(t));

int main() {
  // reflect::for_each
  reflect::for_each([](const auto& member) {
    std::cout << std::format("{}.{}:{}={{}} ({}/{}/{})\n",
        reflect::type_name(f),
        member.name,
        member.type,            //
//        member.value,           // foo.a:int=42 (4/4/0) //!TODO doesn't work??
        member.size_of,         // foo.b:E=B (4/4/4)
        member.align_of,        //
        member.offset_of);
  }, f);
}

