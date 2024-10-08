# SPDX-FileCopyrightText: 2024 Simon Gene Gottlieb
# SPDX-License-Identifier: CC0-1.0

cmake_minimum_required(VERSION 3.18 FATAL_ERROR)

# create project
project(CPM-Libraries LANGUAGES CXX C
        DESCRIPTION "CPM-Libraries - a list of some libraries that can be pulled in via CPM")

include(cmake/CPM.cmake)

set(BUILD_SHARED_LIBS OFF)
CPMAddPackage("gh:SGSSGene/cpm.dependencies@0.0.7")
CPMLoadDependenciesFile("${CMAKE_SOURCE_DIR}/cpm.dependencies")

#CPMAddPackage("gh:TheLartians/Format.cmake@1.0") # collides with yaml-cpp

add_executable(fmt-cpp src/fmt.cpp)
target_link_libraries(fmt-cpp PRIVATE fmt::fmt)

add_executable(nlohmann_json-cpp src/nlohmann_json.cpp)
target_link_libraries(nlohmann_json-cpp PRIVATE nlohmann_json::nlohmann_json)

add_executable(catch2-cpp src/catch2.cpp)
target_link_libraries(catch2-cpp PRIVATE Catch2::Catch2WithMain)

add_executable(rang-cpp src/rang.cpp)
target_link_libraries(rang-cpp PRIVATE rang)

add_executable(abseil-cpp src/abseil.cpp)
target_link_libraries(abseil-cpp PRIVATE absl::strings)
target_compile_options(abseil-cpp PUBLIC -fpic)

add_executable(cgraph-cpp src/cgraph.cpp)
target_link_libraries(cgraph-cpp PRIVATE cgraph::cgraph)

add_executable(7-zip-cpp src/7-zip.cpp)
target_link_libraries(7-zip-cpp PRIVATE 7-zip::7-zip)

add_executable(bit7z-cpp src/bit7z.cpp)
target_link_libraries(bit7z-cpp PRIVATE bit7z)

add_executable(tomlplusplus-cpp src/tomlplusplus.cpp)
target_link_libraries(tomlplusplus-cpp PRIVATE tomlplusplus::tomlplusplus)

add_executable(nanobench-cpp src/nanobench.cpp)
target_link_libraries(nanobench-cpp PRIVATE nanobench)

add_executable(cereal-cpp src/cereal.cpp)
target_link_libraries(cereal-cpp PRIVATE cereal::cereal)

pybind11_add_module(pybind11-cpp src/pybind11.cpp)
target_link_libraries(pybind11-cpp PRIVATE pybind11::pybind11)

add_executable(yaml-cpp-cpp src/yaml-cpp.cpp)
target_link_libraries(yaml-cpp-cpp PRIVATE yaml-cpp)

add_executable(rapidyaml-cpp src/rapidyaml.cpp)
target_link_libraries(rapidyaml-cpp PRIVATE ryml::ryml)

add_executable(benchmark-cpp src/benchmark.cpp)
target_link_libraries(benchmark-cpp PRIVATE benchmark::benchmark)

add_executable(googletest-cpp src/googletest.cpp)
target_link_libraries(googletest-cpp PRIVATE GTest::gtest)

add_executable(reflect-cpp src/reflect.cpp)
target_link_libraries(reflect-cpp PRIVATE reflect::reflect)

add_executable(simde-cpp src/simde.cpp)
target_link_libraries(simde-cpp PRIVATE simde::simde)

add_executable(zlib-cpp src/zlib.cpp)
target_link_libraries(zlib-cpp PRIVATE zlib::zlib)

add_executable(zstd-cpp src/zstd.cpp)
target_link_libraries(zstd-cpp PRIVATE zstd::zstd)

add_executable(bzip2-cpp src/bzip2.cpp)
target_link_libraries(bzip2-cpp PRIVATE bzip2::bzip2)

add_executable(glad-cpp src/glad.cpp)
target_link_libraries(glad-cpp PRIVATE glad glfw)


#        {
#            "name": "glm",
#            "github_repository": "g-truc/glm",
#            "git_tag": "1.0.1",
#            "version": "1.0.1"
#        },


#CPMAddPackage("gh:cinder/Cinder#a70e977b735ca493910984a56723280b66385059") #!TODO status 01. Feb 2024
#add_dependencies(cinder glad glfw glm)
#add_executable(cinder-cpp src/cinder.cpp)
#target_link_libraries(cinder-cpp PRIVATE cinder)

add_executable(flatbuffers-cpp src/flatbuffers.cpp)
target_link_libraries(flatbuffers-cpp PRIVATE flatbuffers)

add_executable(xsimd-cpp src/xsimd.cpp)
target_link_libraries(xsimd-cpp PRIVATE xsimd)
target_compile_options(xsimd-cpp PUBLIC -mavx -mavx2)

add_executable(xtl-cpp src/xtl.cpp)
target_link_libraries(xtl-cpp PRIVATE xtl)

add_executable(mimalloc-cpp src/mimalloc.cpp)
target_link_libraries(mimalloc-cpp PRIVATE mimalloc)

add_executable(libsamplerate-cpp src/libsamplerate.cpp)
target_link_libraries(libsamplerate-cpp PRIVATE SampleRate::samplerate)

add_executable(libsndfile-cpp src/libsndfile.cpp)
target_link_libraries(libsndfile-cpp PRIVATE SndFile::sndfile)

add_executable(unordered_dense-cpp src/unordered_dense.cpp)
target_link_libraries(unordered_dense-cpp PRIVATE unordered_dense::unordered_dense)

add_executable(robin-hood-hashing-cpp src/robin-hood-hashing.cpp)
target_link_libraries(robin-hood-hashing-cpp PRIVATE robin_hood::robin_hood)

add_executable(matplotplusplus-cpp src/matplotplusplus.cpp)
target_link_libraries(matplotplusplus-cpp PRIVATE matplot)

#CPMAddPackage("gh:SFML/SFML#2.6.1@2.6.1")
#add_executable(sfml-cpp src/sfml.cpp)
#target_link_libraries(sfml-cpp PRIVATE sfml-graphics)

add_executable(ctre-cpp src/ctre.cpp)
target_link_libraries(ctre-cpp PRIVATE ctre::ctre)

add_executable(oniguruma-cpp src/oniguruma.cpp)
target_link_libraries(oniguruma-cpp PRIVATE onig)

add_executable(pcre2-cpp src/pcre2.cpp)
target_link_libraries(pcre2-cpp PRIVATE pcre2-8-static)

#CPMAddPackage("gh:ClausKlein/boost-cmake@1.80.0")
#add_executable(boost-cpp src/boost.cpp)
#target_link_libraries(boost-cpp PRIVATE boost)

#WrappedCPMAddPackage("gh:intel/hyperscan@5.4.2")
#add_executable(hyperscan-cpp src/hyperscan.cpp)
#target_link_libraries(hyperscan-cpp PRIVATE hs::hs)

add_executable(srell-cpp src/srell.cpp)
target_link_libraries(srell-cpp PRIVATE srell::srell)

add_executable(linenoise-cpp src/linenoise.cpp)
target_link_libraries(linenoise-cpp PRIVATE linenoise)

add_executable(cxxopts-cpp src/cxxopts.cpp)
target_link_libraries(cxxopts-cpp PRIVATE cxxopts)

add_executable(progress-cpp-cpp src/progress-cpp.cpp)
target_link_libraries(progress-cpp-cpp PRIVATE progresscpp)

add_executable(tabulate-cpp src/tabulate.cpp)
target_link_libraries(tabulate-cpp PRIVATE tabulate)

add_executable(variant-lite-cpp src/variant-lite.cpp)
target_link_libraries(variant-lite-cpp PRIVATE variant-lite)

add_executable(pugixml-cpp src/pugixml.cpp)
target_link_libraries(pugixml-cpp PRIVATE pugixml::static)

add_executable(libsais-cpp src/libsais.cpp)
target_link_libraries(libsais-cpp libsais)

add_executable(fmindex-collection-cpp src/fmindex-collection.cpp)
target_link_libraries(fmindex-collection-cpp PRIVATE fmindex-collection::fmindex-collection)
target_compile_options(fmindex-collection-cpp PRIVATE "-std=c++20")

add_executable(ivio-cpp src/ivio.cpp)
target_link_libraries(ivio-cpp PRIVATE ivio::ivio)

add_executable(xxhash-cpp src/xxhash.cpp)
target_link_libraries(xxhash-cpp PRIVATE xxhash)

add_executable(doctest-cpp src/doctest.cpp)
target_link_libraries(doctest-cpp doctest::doctest_with_main)


add_executable(re2-cpp src/re2.cpp)
target_link_libraries(re2-cpp re2::re2)

add_executable(sdsl-lite-cpp src/sdsl-lite.cpp)
target_link_libraries(sdsl-lite-cpp PRIVATE sdsl-lite::sdsl-lite)

#CPMAddPackage("gh:SparkyStudios/AmplitudeAudioSDK#0232292ebb0f206b3990a98cf5adc8590065c4dd")
#add_executable(amplitudeaudiosdk-cpp src/amplitudeaudiosdk.cpp)
#target_linkk_libraries(amplitudeaudiosdk-cpp PRIVATE SparkyStudios::Audio::Amplitude::SDK::Static)


#CPMAddPackage("gh:bombela/backward-cpp@1.6")
#add_executable(backward-cpp-cpp src/backward-cpp.cpp)
#target_link_libraries(backward-cpp-cpp PRIVATE backward unwind)

#CPMAddPackage("gh:google/brotli@1.1.0")
#add_executable(brotli-cpp src/brotli.cpp)
#target_link_libraries(brotli-cpp PRIVATE brotli)
