// SPDX-FileCopyrightText: 2006-2023, Knut Reinert & Freie Universität Berlin
// SPDX-FileCopyrightText: 2016-2023, Knut Reinert & MPI für molekulare Genetik
// SPDX-License-Identifier: BSD-3-Clause
//
#include <fmindex-collection/fmindex-collection.h>
#include <fmindex-collection/occtable/all.h>
#include <fmindex-collection/search/all.h>
#include <search_schemes/generator/all.h>
#include <search_schemes/expand.h>

#include <filesystem>
#include <format>
#include <fstream>
#include <iostream>
#include <unordered_set>

using namespace fmindex_collection;

constexpr size_t Sigma = 5;

template <size_t Sigma>
using Table = occtable::Interleaved_16<Sigma>;

int main(int argc, char const* const* argv) {
    (void)argc;
    (void)argv;
    auto reference = std::vector<std::vector<uint8_t>>{{1, 3, 1, 4}, {2, 1, 4, 2, 3}};
    {
        std::cout << "\nBiFMIndex:\n";
        auto index = BiFMIndex<Table<Sigma>>{reference, /*samplingRate*/16, /*threadNbr*/1};
        auto queries = std::vector<std::vector<uint8_t>>{{1, 3}, {4, 2}};

        search_backtracking::search(index, queries, 0, [&](size_t queryId, auto cursor, size_t errors) {
            (void)errors;
            std::cout << std::format("found something {} {}\n", queryId, cursor.count());
            for (auto i : cursor) {
                auto [chr, pos] = index.locate(i);
                std::cout << std::format("chr/pos: {}/{}\n", chr, pos);
            }
        });
    }
    {
        std::cout << "\nFMIndex:\n";
        auto index = FMIndex<Table<Sigma>>{reference, /*samplingRate*/16, /*threadNbr*/1};
        auto queries = std::vector<std::vector<uint8_t>>{{1, 3}, {4, 2}};

        search_backtracking::search(index, queries, 0, [&](size_t queryId, auto cursor, size_t errors) {
            (void)errors;
            std::cout << std::format("found something {} {}\n", queryId, cursor.count());
            for (auto i : cursor) {
                auto [chr, pos] = index.locate(i);
                std::cout << std::format("chr/pos: {}/{}\n", chr, pos);
            }
        });
    }

    {
        std::cout << "\nReverseFMIndex:\n";
        auto index = ReverseFMIndex<Table<Sigma>>{reference, /*samplingRate*/16, /*threadNbr*/1};
        auto queries = std::vector<std::vector<uint8_t>>{{3, 1}, {2, 4}};
        search_backtracking::search(index, queries, 0, [&](size_t queryId, auto cursor, size_t errors) {
            (void)errors;
            std::cout << std::format("found something {} {}\n", queryId, cursor.count());
            for (auto i : cursor) {
                auto [chr, pos] = index.locate(i);
                pos = pos -  queries[queryId].size();
                std::cout << std::format("chr/pos: {}/{}\n", chr, pos);
            }
        });

    }

    return 0;
}
