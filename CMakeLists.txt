# SPDX-FileCopyrightText: 2024 Simon Gene Gottlieb
# SPDX-License-Identifier: CC0-1.0

cmake_minimum_required(VERSION 3.14 FATAL_ERROR)

# create project
project(CPM-Libraries LANGUAGES CXX C
        DESCRIPTION "CPM-Libraries - a list of some libraries that can be pulled in via CPM")

include(cmake/CPM.cmake)

CPMAddPackage("gh:SGSSGene/CMakeUseCCache@1.0.0")
require_ccache()

CPMAddPackage("gh:SGSSGene/WrappedCPMAddPackage@0.2.5")

CPMAddPackage("gh:fmtlib/fmt#10.2.1@10.2.1")
add_executable(fmt-cpp src/fmt.cpp)
target_link_libraries(fmt-cpp PRIVATE fmt::fmt)

CPMAddPackage("gh:nlohmann/json@3.11.3")
add_executable(nlohmann_json-cpp src/nlohmann_json.cpp)
target_link_libraries(nlohmann_json-cpp PRIVATE nlohmann_json::nlohmann_json)

CPMAddPackage("gh:catchorg/Catch2@3.5.3")
add_executable(catch2-cpp src/catch2.cpp)
target_link_libraries(catch2-cpp PRIVATE Catch2::Catch2WithMain)

CPMAddPackage("gh:agauniyal/rang@3.2")
add_executable(rang-cpp src/rang.cpp)
target_link_libraries(rang-cpp PRIVATE rang)

CPMAddPackage("gh:abseil/abseil-cpp#20240116.1")
add_executable(abseil-cpp src/abseil.cpp)
target_link_libraries(abseil-cpp PRIVATE absl::strings)

WrappedCPMAddPackage("gh:ChunelFeng/CGraph@2.5.4")
add_executable(cgraph-cpp src/cgraph.cpp)
target_link_libraries(cgraph-cpp PRIVATE cgraph::cgraph)

CPMAddPackage("gh:rikyoz/bit7z@4.0.5")
add_executable(bit7z-cpp src/bit7z.cpp)
target_link_libraries(bit7z-cpp PRIVATE bit7z)

CPMAddPackage("gh:marzer/tomlplusplus@3.4.0")
add_executable(tomlplusplus-cpp src/tomlplusplus.cpp)
target_link_libraries(tomlplusplus-cpp PRIVATE tomlplusplus::tomlplusplus)

CPMAddPackage("gh:martinus/nanobench@4.3.11")
add_executable(nanobench-cpp src/nanobench.cpp)
target_link_libraries(nanobench-cpp PRIVATE nanobench)

WrappedCPMAddPackage("gh:USCiLab/cereal@1.3.2")
add_executable(cereal-cpp src/cereal.cpp)
target_link_libraries(cereal-cpp PRIVATE cereal::cereal)

CPMAddPackage("gh:pybind/pybind11@2.11.1")
pybind11_add_module(pybind11-cpp src/pybind11.cpp)
target_link_libraries(pybind11-cpp PRIVATE pybind11::pybind11)

CPMAddPackage("gh:jbeder/yaml-cpp#0.8.0@0.8.0")
add_executable(yaml-cpp-cpp src/yaml-cpp.cpp)
target_link_libraries(yaml-cpp-cpp PRIVATE yaml-cpp)

CPMAddPackage("gh:biojppm/rapidyaml@0.5.0")
add_executable(rapidyaml-cpp src/rapidyaml.cpp)
target_link_libraries(rapidyaml-cpp PRIVATE ryml::ryml)

WrappedCPMAddPackage("gh:google/benchmark@1.8.3")
add_executable(benchmark-cpp src/benchmark.cpp)
target_link_libraries(benchmark-cpp PRIVATE benchmark::benchmark)

WrappedCPMAddPackage("gh:google/googletest@1.14.0")
add_executable(googletest-cpp src/googletest.cpp)
target_link_libraries(googletest-cpp PRIVATE GTest::gtest)

WrappedCPMAddPackage("gh:boost-ext/reflect@1.1.0")
add_executable(reflect-cpp src/reflect.cpp)
target_link_libraries(reflect-cpp PRIVATE reflect::reflect)

WrappedCPMAddPackage("gh:simd-everywhere/simde@0.7.6")
add_executable(simde-cpp src/simde.cpp)
target_link_libraries(simde-cpp PRIVATE simde::simde)

WrappedCPMAddPackage("https://zlib.net/zlib-1.3.1.tar.gz@1.3.1")
add_executable(zlib-cpp src/zlib.cpp)
target_link_libraries(zlib-cpp PRIVATE zlib::zlib)

WrappedCPMAddPackage("gh:facebook/zstd@1.5.5")
add_executable(zstd-cpp src/zstd.cpp)
target_link_libraries(zstd-cpp PRIVATE zstd::zstd)

WrappedCPMAddPackage("https://sourceware.org/pub/bzip2/bzip2-1.0.8.tar.gz@1.0.8")
add_executable(bzip2-cpp src/bzip2.cpp)
target_link_libraries(bzip2-cpp PRIVATE bzip2::bzip2)

CPMAddPackage("gh:Dav1dde/glad@0.1.36")
CPMAddPackage("gh:g-truc/glm#1.0.1@1.0.1")

set(GLFW_BUILD_WAYLAND OFF)
set(GLFW_BUILD_X11 OFF)
WrappedCPMAddPackage("gh:glfw/glfw#3.4@3.4")
add_executable(glad-cpp src/glad.cpp)
target_link_libraries(glad-cpp PRIVATE glad glfw)


#CPMAddPackage("gh:cinder/Cinder#a70e977b735ca493910984a56723280b66385059") #!TODO status 01. Feb 2024
#add_dependencies(cinder glad glfw glm)
#add_executable(cinder-cpp src/cinder.cpp)
#target_link_libraries(cinder-cpp PRIVATE cinder)

WrappedCPMAddPackage("gh:google/flatbuffers@24.3.7")
add_executable(flatbuffers-cpp src/flatbuffers.cpp)
target_link_libraries(flatbuffers-cpp PRIVATE flatbuffers)

CPMAddPackage("gh:xtensor-stack/xsimd#12.1.1@12.1.1")
add_executable(xsimd-cpp src/xsimd.cpp)
target_link_libraries(xsimd-cpp PRIVATE xsimd)
target_compile_options(xsimd-cpp PUBLIC -mavx -mavx2)

CPMAddPackage("gh:xtensor-stack/xtl#0.7.7@0.7.7")
add_executable(xtl-cpp src/xtl.cpp)
target_link_libraries(xtl-cpp PRIVATE xtl)

WrappedCPMAddPackage("gh:microsoft/mimalloc@2.1.2")
add_executable(mimalloc-cpp src/mimalloc.cpp)
target_link_libraries(mimalloc-cpp PRIVATE mimalloc)

WrappedCPMAddPackage("gh:libsndfile/libsamplerate#0.2.2@0.2.2")
add_executable(libsamplerate-cpp src/libsamplerate.cpp)
target_link_libraries(libsamplerate-cpp PRIVATE SampleRate::samplerate)

WrappedCPMAddPackage("gh:libsndfile/libsndfile#1.2.2@1.2.2")
add_executable(libsndfile-cpp src/libsndfile.cpp)
target_link_libraries(libsndfile-cpp PRIVATE SndFile::sndfile)

CPMAddPackage("gh:martinus/unordered_dense@4.4.0")
add_executable(unordered_dense-cpp src/unordered_dense.cpp)
target_link_libraries(unordered_dense-cpp PRIVATE unordered_dense::unordered_dense)

CPMAddPackage("gh:martinus/robin-hood-hashing#3.11.5@3.11.5")
add_executable(robin-hood-hashing-cpp src/robin-hood-hashing.cpp)
target_link_libraries(robin-hood-hashing-cpp PRIVATE robin_hood::robin_hood)

CPMAddPackage("gh:alandefreitas/matplotplusplus@1.2.1")
add_executable(matplotplusplus-cpp src/matplotplusplus.cpp)
target_link_libraries(matplotplusplus-cpp PRIVATE matplot)

#CPMAddPackage("gh:SFML/SFML#2.6.1@2.6.1")
#add_executable(sfml-cpp src/sfml.cpp)
#target_link_libraries(sfml-cpp PRIVATE sfml-graphics)

CPMAddPackage("gh:hanickadot/compile-time-regular-expressions@3.8.1")
add_executable(ctre-cpp src/ctre.cpp)
target_link_libraries(ctre-cpp PRIVATE ctre::ctre)

CPMAddPackage("gh:kkos/oniguruma@6.9.9")
add_executable(oniguruma-cpp src/oniguruma.cpp)
target_link_libraries(oniguruma-cpp PRIVATE onig)

set(PCRE2_BUILD_TESTS OFF)
CPMAddPackage("gh:PCRE2Project/pcre2#pcre2-10.43")
add_executable(pcre2-cpp src/pcre2.cpp)
target_link_libraries(pcre2-cpp PRIVATE pcre2-8-static)

CPMAddPackage("gh:ClausKlein/boost-cmake@1.80.0")
add_executable(boost-cpp src/boost.cpp)
target_link_libraries(boost-cpp PRIVATE boost)

#WrappedCPMAddPackage("gh:intel/hyperscan@5.4.2")
#add_executable(hyperscan-cpp src/hyperscan.cpp)
#target_link_libraries(hyperscan-cpp PRIVATE hs::hs)

WrappedCPMAddPackage("https://www.akenotsuki.com/misc/srell/releases/srell4_040.zip@4.040")
add_executable(srell-cpp src/srell.cpp)
target_link_libraries(srell-cpp PRIVATE srell::srell)

WrappedCPMAddPackage("gh:antirez/linenoise#1.0@1.0")
add_executable(linenoise-cpp src/linenoise.cpp)
target_link_libraries(linenoise-cpp PRIVATE linenoise)

WrappedCPMAddPackage("gh:jarro2783/cxxopts@2.2.0")
add_executable(cxxopts-cpp src/cxxopts.cpp)
target_link_libraries(cxxopts-cpp PRIVATE cxxopts)

CPMAddPackage("gh:prakhar1989/progress-cpp#7bfba0d22d19c41323aa35541618b6ebec9d737c")
add_executable(progress-cpp-cpp src/progress-cpp.cpp)
target_link_libraries(progress-cpp-cpp PRIVATE progresscpp)

CPMAddPackage("gh:p-ranav/tabulate@1.0")
add_executable(tabulate-cpp src/tabulate.cpp)
target_link_libraries(tabulate-cpp PRIVATE tabulate)

CPMAddPackage("gh:martinmoene/variant-lite@1.2.2")
add_executable(variant-lite-cpp src/variant-lite.cpp)
target_link_libraries(variant-lite-cpp PRIVATE variant-lite)

CPMAddPackage("gh:zeux/pugixml@1.14")
add_executable(pugixml-cpp src/pugixml.cpp)
target_link_libraries(pugixml-cpp PRIVATE pugixml::static)

CPMAddPackage("gh:SGSSGene/fmindex-collection@0.3.0")
add_executable(fmindex-collection-cpp src/fmindex-collection.cpp)
target_link_libraries(fmindex-collection-cpp PRIVATE fmindex-collection::fmindex-collection)
target_compile_options(fmindex-collection-cpp PRIVATE "-std=c++20")

CPMAddPackage("gh:iv-project/IVio@0.3.1")
add_executable(ivio-cpp src/ivio.cpp)
target_link_libraries(ivio-cpp PRIVATE ivio::ivio)

WrappedCPMAddPackage("gh:Cyan4973/xxHash@0.8.2")
add_executable(xxhash-cpp src/xxhash.cpp)
target_link_libraries(xxhash-cpp PRIVATE xxhash)


CPMAddPackage("gh:TheLartians/GroupSourcesByFolder.cmake@1.0")
#CPMAddPackage("gh:TheLartians/Format.cmake@1.0")

#CPMAddPackage("gh:google/re2#2024-03-01")

#CPMAddPackage("gh:SparkyStudios/AmplitudeAudioSDK#0232292ebb0f206b3990a98cf5adc8590065c4dd")
#add_executable(amplitudeaudiosdk-cpp src/amplitudeaudiosdk.cpp)
#target_linkk_libraries(amplitudeaudiosdk-cpp PRIVATE SparkyStudios::Audio::Amplitude::SDK::Static)


#CPMAddPackage("gh:bombela/backward-cpp@1.6")
#add_executable(backward-cpp-cpp src/backward-cpp.cpp)
#target_link_libraries(backward-cpp-cpp PRIVATE backward unwind)

#CPMAddPackage("gh:google/brotli@1.1.0")
#add_executable(brotli-cpp src/brotli.cpp)
#target_link_libraries(brotli-cpp PRIVATE brotli)

CPMAddPackage("gh:SGSSGene/cpm_check_version@0.1.1")
enable_testing()
cpm_check_version(glad)
