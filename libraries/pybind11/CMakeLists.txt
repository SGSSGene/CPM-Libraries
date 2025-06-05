# SPDX-FileCopyrightText: 2025 Simon Gene Gottlieb
# SPDX-License-Identifier: CC0-1.0

cmake_minimum_required(VERSION 3.18 FATAL_ERROR)

# create project
project(CPM-Libraries LANGUAGES CXX C
        DESCRIPTION "CPM-Libraries - a list of some libraries that can be pulled in via CPM")

include(../../cmake/CPM.cmake)
CPMAddPackage("gh:SGSSGene/cpmpack@1.0.1")
loadCPMPack("${CMAKE_CURRENT_SOURCE_DIR}/cpmpack.json")

pybind11_add_module(pybind11-cpp pybind11.cpp)
target_link_libraries(pybind11-cpp PRIVATE pybind11::pybind11)
