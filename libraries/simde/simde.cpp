// SPDX-FileCopyrightText: 2024 Simon Gene Gottlieb
// SPDX-License-Identifier: CC0-1.0

#include <simde/x86/sse2.h>

simde__m128i foo(simde__m128i a, simde__m128i b) {
  return simde_mm_add_epi32(a, b);
}

__m128i bar(__m128i a, __m128i b) {
    return _mm_add_epi32(a, b);
}

int main() {
    simde__m128i a{};
    simde__m128i b{};
    auto c = a + b;
}

