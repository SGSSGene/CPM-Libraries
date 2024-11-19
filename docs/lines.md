<!--
    SPDX-FileCopyrightText: 2024 Simon Gene Gottlieb
    SPDX-License-Identifier: CC0-1.0
-->
<tr markdown>
<td>
<a href="https://github.com/rikyoz/7-zip">7-Zip</a><br>[UNOFFICIAL MIRROR] A file archiver with a high compression ratio</td>
<td>24.08</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "7-Zip",
      "version": "24.08",
      "github_repository": "rikyoz/7-Zip",
      "cmake_commands": [
        "file(GLOB SOURCE_FILES ${CPM_CURRENT_SOURCE_DIR}/C/*.c)",
        "add_library(7-Zip_impl ${SOURCE_FILES})",
        "target_include_directories(7-Zip_impl PUBLIC SYSTEM ${CPM_CURRENT_SOURCE_DIR}/CPP/ ${CPM_CURRENT_SOURCE_DIR}/C/)",
        "add_library(7-zip::7-zip ALIAS 7-Zip_impl)",
        "set(BIT7Z_CUSTOM_7ZIP_PATH ${CPM_CURRENT_SOURCE_DIR})"
      ]
    }
    ```
</td>
<td markdown>
- compression
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/ChunelFeng/CGraph">CGraph</a><br>A common used C++ DAG framework</td>
<td>2.6.2</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "CGraph",
      "version": "2.6.2",
      "github_repository": "ChunelFeng/CGraph",
      "cmake_commands": [
        "add_library(cgraph STATIC $<TARGET_OBJECTS:CGraph>)",
        "target_link_libraries(cgraph INTERFACE CGraph)",
        "target_include_directories(cgraph SYSTEM INTERFACE ${CPM_CURRENT_SOURCE_DIR}/src)",
        "add_library(cgraph::cgraph ALIAS cgraph)"
      ]
    }
    ```
</td>
<td markdown>
- frameworks
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/SGSSGene/CMakeUseCCache">CMakeUseCCache</a><br>Enables auto usage of ccache with cmake and CPM</td>
<td>1.0.0</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "CMakeUseCCache",
      "version": "1.0.0",
      "github_repository": "SGSSGene/CMakeUseCCache",
      "cmake_commands": "require_ccache()"
    }
    ```
</td>
<td markdown>
- tools
- cpm
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/catchorg/Catch2">Catch2</a><br>A modern, C++-native, test framework for unit-tests, TDD and BDD - using C++14, C++17 and later</td>
<td>3.7.1</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "Catch2",
      "version": "3.7.1",
      "github_repository": "catchorg/Catch2"
    }
    ```
</td>
<td markdown>
- debug
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/TheLartians/GroupSourcesByFolder.cmake">GroupSourcesByFolder.cmake</a><br>Automatically group sources by folder structure for Visual Studio/Xcode generators</td>
<td>1.0</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "GroupSourcesByFolder.cmake",
      "version": "1.0",
      "github_repository": "TheLartians/GroupSourcesByFolder.cmake"
    }
    ```
</td>
<td markdown>
- tools
- cpm
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/iv-project/IVio">IVio</a><br>IO library for file formats used in bioinformatics</td>
<td>0.4.3</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "IVio",
      "version": "0.4.3",
      "github_repository": "iv-project/IVio"
    }
    ```
</td>
<td markdown>
- bioinformatic
- fileformat
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/TheLartians/PackageProject.cmake">PackageProject.cmake</a><br>🏛️ Help other developers use your project. A CMake script for packaging C/C++ projects for simple project installation while employing best-practices for maximum compatibility.</td>
<td>1.12.0</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "PackageProject.cmake",
      "version": "1.12.0",
      "github_repository": "TheLartians/PackageProject.cmake"
    }
    ```
</td>
<td markdown>
- tools
- cpm
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/abseil/abseil-cpp">absl</a><br>Abseil Common Libraries (C++)</td>
<td>20240722.0</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "absl",
      "version": "20240722.0",
      "github_repository": "abseil/abseil-cpp",
      "git_tag": "{VERSION}",
      "options": [
        "ABSL_ENABLE_INSTALL ON",
        "ABSL_PROPAGATE_CXX_STD ON"
      ]
    }
    ```
</td>
<td markdown>
- framework
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/google/benchmark">benchmark</a><br>A microbenchmark support library</td>
<td>1.9.0</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "benchmark",
      "version": "1.9.0",
      "github_repository": "google/benchmark",
      "options": [
        "BENCHMARK_ENABLE_TESTING OFF",
        "BENCHMARK_ENABLE_INSTALL OFF",
        "BENCHMARK_ENABLE_GTEST_TESTS OFF"
      ]
    }
    ```
</td>
<td markdown>
- debug
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/rikyoz/bit7z">bit7z</a><br>A C++ static library offering a clean and simple interface to the 7-zip shared libraries.</td>
<td>4.0.7-dirty</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "bit7z",
      "version": "4.0.7-dirty",
      "github_repository": "rikyoz/bit7z",
      "git_tag": "f04d819e8eb82474532e3da4925e5dd247ea35bb"
    }
    ```
</td>
<td markdown>
- compression
</td>
</tr>
<tr markdown>
<td>
<a href="https://sourceware.org/bzip2/">bzip2</a><br>bzip2 is a freely available, patent free (see below), high-quality data compressor.</td>
<td>1.0.8</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "bzip2",
      "version": "1.0.8",
      "url": "https://sourceware.org/pub/bzip2/bzip2-1.0.8.tar.gz",
      "download_only": true,
      "cmake_commands": [
        "add_library(bzip2 ${CPM_CURRENT_SOURCE_DIR}/blocksort.c ${CPM_CURRENT_SOURCE_DIR}/bzip2.c ${CPM_CURRENT_SOURCE_DIR}/bzlib.c ${CPM_CURRENT_SOURCE_DIR}/compress.c ${CPM_CURRENT_SOURCE_DIR}/crctable.c ${CPM_CURRENT_SOURCE_DIR}/decompress.c ${CPM_CURRENT_SOURCE_DIR}/huffman.c ${CPM_CURRENT_SOURCE_DIR}/makefile.msc ${CPM_CURRENT_SOURCE_DIR}/randtable.c)",
        "target_include_directories(bzip2 SYSTEM INTERFACE ${bzip2_SOURCE_DIR})",
        "add_library(bzip2::bzip2 ALIAS bzip2)"
      ]
    }
    ```
</td>
<td markdown>
- compression
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/USCiLab/cereal">cereal</a><br>A C++11 library for serialization</td>
<td>1.3.2</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "cereal",
      "version": "1.3.2",
      "github_repository": "USCiLab/cereal",
      "options": [
        "BUILD_DOC OFF",
        "BUILD_SANDBOX OFF",
        "SKIP_PERFORMANCE_COMPARISON ON"
      ]
    }
    ```
</td>
<td markdown>
- serialization
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/hanickadot/compile-time-regular-expressions">compile-time-regular-expressions</a><br> Compile Time Regular Expression in C++</td>
<td>3.9.0</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "compile-time-regular-expressions",
      "version": "3.9.0",
      "github_repository": "hanickadot/compile-time-regular-expressions",
      "git_tag_ignore": [
        "cppcon2018",
        "2017"
      ]
    }
    ```
</td>
<td markdown>
- regex
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/SGSSGene/cpm_check_version">cpm_check_version</a><br>CMake+CPM packages helping to check for newer package versions</td>
<td>0.1.1</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "cpm_check_version",
      "version": "0.1.1",
      "github_repository": "SGSSGene/cpm_check_version",
      "cmake_commands": [
        "enable_testing()",
        "cpm_check_version(glad compile-time-regular-expressions PackageProject.cmake bit7z absl reflect benchmark CGraph re2)"
      ]
    }
    ```
</td>
<td markdown>
- tools
- cpm
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/jarro2783/cxxopts">cxxopts</a><br>Lightweight C++ command line option parser</td>
<td>3.2.1</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "cxxopts",
      "version": "3.2.1",
      "github_repository": "jarro2783/cxxopts",
      "options": [
        "CXXOPTS_BUILD_EXAMPLES OFF",
        "CXXOPTS_BUILD_TESTS OFF"
      ]
    }
    ```
</td>
<td markdown>
- terminal
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/doctest/doctest">doctest</a><br>The fastest feature-rich C++11/14/17/20/23 single-header testing framework</td>
<td>2.4.11</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "doctest",
      "version": "2.4.11",
      "github_repository": "doctest/doctest"
    }
    ```
</td>
<td markdown>
- debug
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/google/flatbuffers">flatbuffers</a><br>FlatBuffers: Memory Efficient Serialization Library</td>
<td>24.3.25</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "flatbuffers",
      "version": "24.3.25",
      "github_repository": "google/flatbuffers",
      "options": [
        "FLATBUFFERS_BUILD_TESTS OFF",
        "FLATBUFFERS_INSTALL OFF"
      ]
    }
    ```
</td>
<td markdown>
- serialization
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/SGSSGene/fmindex-collection">fmindex-collection</a><br>missing</td>
<td>0.4.3</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "fmindex-collection",
      "version": "0.4.3",
      "github_repository": "SGSSGene/fmindex-collection"
    }
    ```
</td>
<td markdown>
- bioinformatic
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/fmtlib/fmt">fmt</a><br>A modern formatting library</td>
<td>11.0.2</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "fmt",
      "version": "11.0.2",
      "github_repository": "fmtlib/fmt",
      "git_tag": "{VERSION}"
    }
    ```
</td>
<td markdown>
- miscellaneous
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/Dav1dde/glad">glad</a><br>Multi-Language Vulkan/GL/GLES/EGL/GLX/WGL Loader-Generator based on the official specs.</td>
<td>0.1.36</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "glad",
      "version": "0.1.36",
      "github_repository": "Dav1dde/glad",
      "git_tag_ignore": [
        "v2.*"
      ]
    }
    ```
</td>
<td markdown>
- graphics
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/glfw/glfw">glfw</a><br>A multi-platform library for OpenGL, OpenGL ES, Vulkan, window and input</td>
<td>3.4</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "glfw",
      "version": "3.4",
      "github_repository": "glfw/glfw",
      "git_tag": "{VERSION}",
      "options": [
        "GLFW_BUILD_TESTS OFF",
        "GLFW_BUILD_EXAMPLES OFF",
        "GLFW_BUILD_DOCS OFF",
        "GLFW_INSTALL OFF",
        "GLFW_USE_HYBRID_HPG ON",
        "GLFW_BUILD_WAYLAND OFF",
        "GLFW_BUILD_X11 OFF"
      ]
    }
    ```
</td>
<td markdown>
- graphics
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/google/googletest">googletest</a><br>GoogleTest - Google Testing and Mocking Framework</td>
<td>1.15.2</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "googletest",
      "version": "1.15.2",
      "github_repository": "google/googletest",
      "options": [
        "BUILD_GMOCK ON"
      ]
    }
    ```
</td>
<td markdown>
- debug
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/IlyaGrebnov/libsais">libsais</a><br>libsais is a library for linear time suffix array, longest common prefix array and burrows wheeler transform construction based on induced sorting algorithm.</td>
<td>2.8.5</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "libsais",
      "version": "2.8.5",
      "github_repository": "IlyaGrebnov/libsais"
    }
    ```
</td>
<td markdown>
- bioinformatic
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/libsndfile/libsamplerate">libsamplerate</a><br>An audio Sample Rate Conversion library</td>
<td>0.2.2</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "libsamplerate",
      "version": "0.2.2",
      "github_repository": "libsndfile/libsamplerate",
      "git_tag": "{VERSION}",
      "options": [
        "BUILD_TESTING OFF",
        "LIBSAMPLERATE_EXAMPLES OFF",
        "LIBSAMPLERATE_INSTALL OFF",
        "LIBSAMPLERATE_INSTALL_PKGCONFIG OFF"
      ]
    }
    ```
</td>
<td markdown>
- audio
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/libsndfile/libsndfile">libsndfile</a><br>A C library for reading and writing sound files containing sampled audio data.</td>
<td>1.2.2</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "libsndfile",
      "version": "1.2.2",
      "github_repository": "libsndfile/libsndfile",
      "git_tag": "{VERSION}",
      "options": [
        "BUILD_TESTING OFF",
        "BUILD_PROGRAMS OFF",
        "BUILD_EXAMPLES OFF",
        "BUILD_REGTEST OFF",
        "ENABLE_PACKAGE_CONFIG OFF",
        "INSTALL_PKGCONFIG_MODULE OFF"
      ]
    }
    ```
</td>
<td markdown>
- audio
- fileformat
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/antirez/linenoise">linenoise</a><br>A small self-contained alternative to readline and libedit</td>
<td>1.0</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "linenoise",
      "version": "1.0",
      "github_repository": "antirez/linenoise",
      "git_tag": "{VERSION}",
      "download_only": true,
      "cmake_commands": [
        "add_library(linenoise ${CPM_CURRENT_SOURCE_DIR}/linenoise.c)",
        "target_include_directories(linenoise PUBLIC ${CPM_CURRENT_SOURCE_DIR})"
      ]
    }
    ```
</td>
<td markdown>
- terminal
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/alandefreitas/matplotplusplus">matplotplusplus</a><br>Matplot++: A C++ Graphics Library for Data Visualization 📊🗾</td>
<td>1.2.1</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "matplotplusplus",
      "version": "1.2.1",
      "github_repository": "alandefreitas/matplotplusplus"
    }
    ```
</td>
<td markdown>
- visualization
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/microsoft/mimalloc">mimalloc</a><br>mimalloc is a compact general purpose allocator with excellent performance.</td>
<td>2.1.7</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "mimalloc",
      "version": "2.1.7",
      "github_repository": "microsoft/mimalloc",
      "options": [
        "MI_BUILD_TESTS OFF"
      ],
      "git_tag_ignore": [
        "win-m4",
        "M3",
        "show",
        "list"
      ]
    }
    ```
</td>
<td markdown>
- memory allocation
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/martinus/nanobench">nanobench</a><br>Simple, fast, accurate single-header microbenchmarking functionality for C++11/14/17/20</td>
<td>4.3.11</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "nanobench",
      "version": "4.3.11",
      "github_repository": "martinus/nanobench"
    }
    ```
</td>
<td markdown>
- debug
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/nlohmann/json">nlohman_json</a><br>JSON for Modern C++</td>
<td>3.11.3</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "nlohman_json",
      "version": "3.11.3",
      "github_repository": "nlohmann/json"
    }
    ```
</td>
<td markdown>
- json
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/kkos/oniguruma">oniguruma</a><br>regular expression library</td>
<td>6.9.9</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "oniguruma",
      "version": "6.9.9",
      "github_repository": "kkos/oniguruma"
    }
    ```
</td>
<td markdown>
- regex
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/PCRE2Project/pcre2">pcre2</a><br>PCRE2 development is now based here.</td>
<td>10.44</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "pcre2",
      "version": "10.44",
      "github_repository": "PCRE2Project/pcre2",
      "git_tag": "pcre2-{VERSION}",
      "options": [
        "PCRE2_BUILD_TESTS OFF"
      ]
    }
    ```
</td>
<td markdown>
- regex
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/prakhar1989/progress-cpp">progress-cpp</a><br>A flexible ASCII progress-bar for C++</td>
<td>null</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "progress-cpp",
      "github_repository": "prakhar1989/progress-cpp",
      "git_tag": "7bfba0d22d19c41323aa35541618b6ebec9d737c"
    }
    ```
</td>
<td markdown>
- terminal
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/zeux/pugixml">pugixml</a><br>Light-weight, simple and fast XML parser for C++ with XPath support</td>
<td>1.14</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "pugixml",
      "version": "1.14",
      "github_repository": "zeux/pugixml",
      "options": [
        "BUILD_SHARED_LIBS OFF"
      ]
    }
    ```
</td>
<td markdown>
- xml
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/pybind/pybind11">pybind11</a><br>Seamless operability between C++11 and Python</td>
<td>2.13.6</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "pybind11",
      "version": "2.13.6",
      "github_repository": "pybind/pybind11"
    }
    ```
</td>
<td markdown>
- scripting
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/agauniyal/rang">rang</a><br>A Minimal, Header only Modern c++ library for terminal goodies 💄✨</td>
<td>3.2</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "rang",
      "version": "3.2",
      "github_repository": "agauniyal/rang"
    }
    ```
</td>
<td markdown>
- terminal
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/biojppm/rapidyaml">rapidyaml</a><br>Rapid YAML - a library to parse and emit YAML, and do it fast</td>
<td>0.7.2</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "rapidyaml",
      "version": "0.7.2",
      "github_repository": "biojppm/rapidyaml"
    }
    ```
</td>
<td markdown>
- yaml
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/google/re2">re2</a><br>RE2 is a fast, safe, thread-friendly alternative to backtracking regular expression engines like those used in PCRE, Perl, and Python. It is a C++ library.</td>
<td>2024-07-02</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "re2",
      "version": "2024-07-02",
      "github_repository": "google/re2",
      "git_tag": "{VERSION}",
      "options": [
        "BUILD_SHARED_LIBS OFF"
      ]
    }
    ```
</td>
<td markdown>
- regex
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/boost-ext/reflect">reflect</a><br>C++20 Static Reflection library</td>
<td>1.2.4</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "reflect",
      "version": "1.2.4",
      "github_repository": "boost-ext/reflect",
      "cmake_commands": [
        "add_library(reflect INTERFACE)",
        "target_include_directories(reflect SYSTEM INTERFACE ${CPM_CURRENT_SOURCE_DIR})",
        "target_compile_options(reflect INTERFACE -std=c++20)",
        "add_library(reflect::reflect ALIAS reflect)"
      ]
    }
    ```
</td>
<td markdown>
- reflection
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/martinus/robin-hood-hashing">robin-hood-hashing</a><br>Fast & memory efficient hashtable based on robin hood hashing for C++11/14/17/20</td>
<td>3.11.5</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "robin-hood-hashing",
      "version": "3.11.5",
      "github_repository": "martinus/robin-hood-hashing",
      "git_tag": "{VERSION}"
    }
    ```
</td>
<td markdown>
- containers
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/xxsds/sdsl-lite">sdsl-lite</a><br>Succinct Data Structure Library 3.0</td>
<td>3.0.3</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "sdsl-lite",
      "version": "3.0.3",
      "github_repository": "xxsds/sdsl-lite",
      "download_only": true,
      "cmake_commands": [
        "add_library(sdsl-lite INTERFACE)",
        "target_include_directories(sdsl-lite INTERFACE SYSTEM ${CPM_CURRENT_SOURCE_DIR}/include)",
        "add_library(sdsl-lite::sdsl-lite ALIAS sdsl-lite)"
      ],
      "git_tag_ignore": [
        "[Cc]++.*"
      ]
    }
    ```
</td>
<td markdown>
- bioinformatic
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/simd-everywhere/simde">simde</a><br>Implementations of SIMD instruction sets for systems which don't natively support them.</td>
<td>0.8.2</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "simde",
      "version": "0.8.2",
      "github_repository": "simd-everywhere/simde",
      "download_only": true,
      "cmake_commands": [
        "add_library (simde INTERFACE)",
        "add_library (simde::simde ALIAS simde)",
        "target_include_directories (simde INTERFACE $<BUILD_INTERFACE:${CPM_CURRENT_SOURCE_DIR}>)",
        "set_target_properties (simde PROPERTIES INTERFACE_SYSTEM_INCLUDE_DIRECTORIES $<TARGET_PROPERTY:simde,INTERFACE_INCLUDE_DIRECTORIES>)"
      ]
    }
    ```
</td>
<td markdown>
- simd
</td>
</tr>
<tr markdown>
<td>
<a href="https://www.akenotsuki.com/misc/srell/en/">srell</a><br>SRELL (std::regex-like library) is a Unicode-aware regular expression template library for C++.</td>
<td>4.040</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "srell",
      "version": "4.040",
      "url": "https://www.akenotsuki.com/misc/srell/releases/srell4_040.zip",
      "download_only": true,
      "cmake_commands": [
        "add_library(srell INTERFACE)",
        "target_include_directories(srell SYSTEM INTERFACE ${CPM_CURRENT_SOURCE_DIR})",
        "add_library(srell::srell ALIAS srell)"
      ]
    }
    ```
</td>
<td markdown>
- regex
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/p-ranav/tabulate">tabulate</a><br>Table Maker for Modern C++</td>
<td>1.5</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "tabulate",
      "version": "1.5",
      "github_repository": "p-ranav/tabulate"
    }
    ```
</td>
<td markdown>
- terminal
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/marzer/tomlplusplus">tomlplusplus</a><br>Header-only TOML config file parser and serializer for C++17.</td>
<td>3.4.0</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "tomlplusplus",
      "version": "3.4.0",
      "github_repository": "marzer/tomlplusplus"
    }
    ```
</td>
<td markdown>
- configuration
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/martinus/unordered_dense">unordered_dense</a><br>A fast & densely stored hashmap and hashset based on robin-hood backward shift deletion</td>
<td>4.4.0</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "unordered_dense",
      "version": "4.4.0",
      "github_repository": "martinus/unordered_dense"
    }
    ```
</td>
<td markdown>
- containers
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/martinmoene/variant-lite">variant-lite</a><br>variant lite - A C++17-like variant, a type-safe union for C++98, C++11 and later in a single-file header-only library</td>
<td>2.0.0</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "variant-lite",
      "version": "2.0.0",
      "github_repository": "martinmoene/variant-lite"
    }
    ```
</td>
<td markdown>
- container
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/xtensor-stack/xsimd">xsimd</a><br>C++ wrappers for SIMD intrinsics and parallelized, optimized mathematical functions (SSE, AVX, AVX512, NEON, SVE))</td>
<td>13.0.0</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "xsimd",
      "version": "13.0.0",
      "github_repository": "xtensor-stack/xsimd",
      "git_tag": "{VERSION}"
    }
    ```
</td>
<td markdown>
- simd
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/xtensor-stack/xtl">xtl</a><br>The x template library</td>
<td>0.7.7</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "xtl",
      "version": "0.7.7",
      "github_repository": "xtensor-stack/xtl",
      "git_tag": "{VERSION}"
    }
    ```
</td>
<td markdown>
- framework
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/Cyan4973/xxHash">xxHash</a><br>Extremely fast non-cryptographic hash algorithm</td>
<td>0.8.2</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "xxHash",
      "version": "0.8.2",
      "github_repository": "Cyan4973/xxHash",
      "download_only": true,
      "cmake_commands": [
        "add_library(xxhash ${CPM_CURRENT_SOURCE_DIR}/xxhash.c ${CPM_CURRENT_SOURCE_DIR}/xxh_x86dispatch.c)",
        "target_include_directories(xxhash SYSTEM INTERFACE $<BUILD_INTERFACE:${CPM_CURRENT_SOURCE_DIR}>)"
      ],
      "git_tag_ignore": [
        "r[0-9]*"
      ]
    }
    ```
</td>
<td markdown>
- hashing
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/jbeder/yaml-cpp">yaml-cpp</a><br>A YAML parser and emitter in C++</td>
<td>0.8.0</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "yaml-cpp",
      "version": "0.8.0",
      "github_repository": "jbeder/yaml-cpp",
      "git_tag": "{VERSION}"
    }
    ```
</td>
<td markdown>
- yaml
</td>
</tr>
<tr markdown>
<td>
<a href="https://zlib.net">zlib</a><br>A Massively Spiffy Yet Delicately Unobtrusive Compression Library</td>
<td>1.3.1</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "zlib",
      "version": "1.3.1",
      "url": "https://zlib.net/zlib-1.3.1.tar.gz",
      "options": [
        "ZLIB_BUILD_EXAMPLES OFF"
      ],
      "cmake_commands": [
        "add_library(zlib::zlib ALIAS zlib)"
      ]
    }
    ```
</td>
<td markdown>
- compression
</td>
</tr>
<tr markdown>
<td>
<a href="https://github.com/facebook/zstd">zstd</a><br>Zstandard - Fast real-time compression algorithm</td>
<td>1.5.6</td><td markdown>
??? quote "cpm.dependencies"
    ```json
    {
      "name": "zstd",
      "version": "1.5.6",
      "github_repository": "facebook/zstd",
      "options": [
        "ZSTD_BUILD_PROGRAMS FALSE",
        "ZSTD_BUILD_TESTS FALSE"
      ],
      "cmake_commands": [
        "add_subdirectory(${CPM_CURRENT_SOURCE_DIR}/build/cmake zstd)",
        "add_library(zstd::zstd ALIAS libzstd_static)"
      ],
      "git_tag_ignore": [
        "fuzz-corpora2"
      ]
    }
    ```
</td>
<td markdown>
- compression
</td>
</tr>
