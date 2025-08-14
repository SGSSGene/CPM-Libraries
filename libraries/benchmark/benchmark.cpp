// SPDX-FileCopyrightText: 2024 Simon Gene Gottlieb
// SPDX-License-Identifier: CC0-1.0

#include <benchmark/benchmark.h>

void foo(benchmark::State& state) {
  for (auto _ : state) {
    uint64_t a{};
    for (size_t i{0}; i<1000; ++i) {
        a += rand();
    }
    benchmark::DoNotOptimize(a);
  }
}

BENCHMARK(foo);

BENCHMARK_MAIN();
