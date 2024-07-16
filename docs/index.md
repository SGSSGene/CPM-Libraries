<!-- SPDX-FileCopyrightText: 2024 Simon Gene Gottlieb
     SPDX-License-Identifier: CC0-1.0
-->
# Libraries

<div markdown class="compact_data_table">

| Name                                                                   | Version     | CPM                                                                                                 <br>CMakeTarget                                            <br>extra  |
|:-----------------------------------------------------------------------|-------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| [fmt](https://github.com/fmtlib/fmt)                                   |  11.0.1     | `#!cmake CPMAddPackage("gh:fmtlib/fmt#11.0.1@11.0.1")`                                              <br>CMakeTarget: `fmt::fmt`                                <br>       |
| [nlohmann/json](https://github.com/nlohmann/json)                      | v3.11.3     | `#!cmake CPMAddPackage("gh:nlohmann/json@3.11.3")`                                                  <br>CMakeTarget: `nlohmann_json::nlohmann_json`            <br>       |
| [Catch2](https://github.com/catchorg/Catch2)                           | v3.6.0      | `#!cmake CPMAddPackage("gh:catchorg/Catch2@3.6.0")`                                                 <br>CMakeTarget: `Catch2::Catch2 Catch2::Catch2WithMain`   <br>       |
| [rang](https://github.com/agauniyal/rang)                              | v3.2        | `#!cmake CPMAddPackage("gh:agauniyal/rang@3.2")`                                                    <br>CMakeTarget: `rang`                                    <br>       |
| [abseil](https://github.com/abseil/abseil-cpp)                         | 20240116.2  | `#!cmake CPMAddPackage("gh:abseil/abseil-cpp#20240116.2")`                                          <br>CMakeTarget: `absl::strings absl::*`                   <br>       |
| [CGraph](https://github.com/ChunelFeng/CGraph)                         | v2.6.0      | `#!cmake WrappedCPMAddPackage("gh:ChunelFeng/CGraph@2.6.0")`                                        <br>CMakeTarget: `cgraph::cgraph`                          <br>       |
| [bit7z](https://github.com/rikyoz/bit7z)                               | v4.0.7      | `#!cmake CPMAddPackage("gh:rikyoz/bit7z@4.0.7")`                                                    <br>CMakeTarget: `bit7z`                                   <br>       |
| [toml++](https://github.com/marzer/tomlplusplus)                       | v3.4.0      | `#!cmake CPMAddPackage("gh:marzer/tomlplusplus@3.4.0")`                                             <br>CMakeTarget: `tomlplusplus::tomlplusplus`              <br>       |
| [nanobench](https://github.com/martinus/nanobench)                     | v4.3.11     | `#!cmake CPMAddPackage("gh:martinus/nanobench@4.3.11")`                                             <br>CMakeTarget: `nanobench::nanobench`                    <br>       |
| [cereal](https://github.com/USCiLab/cereal)                            | v1.3.2      | `#!cmake CPMAddPackage("gh:USCiLab/cereal@1.3.2")`                                                  <br>CMakeTarget: `cereal::cereal`                          <br>       |
| [pybind11](https://github.com/pybind/pybind11)                         | v2.13.1     | `#!cmake CPMAddPackage("gh:pybind/pybind11@2.13.1")`                                                <br>CMakeTarget: `pybind11::pybind11`                      <br>       |
| [yamlcpp](https://github.com/jbeder/yaml-cpp)                          |  0.8.0      | `#!cmake CPMAddPackage("gh:jbeder/yaml-cpp#0.8.0@0.8.0")`                                           <br>CMakeTarget: `yaml-cpp::yaml-cpp`                      <br>       |
| [rapidyaml](https://github.com/biojppm/rapidyaml)                      | v0.7.0      | `#!cmake CPMAddPackage("gh:biojppm/rapidyaml@0.7.0")`                                               <br>CMakeTarget: `ryml::ryml`                              <br>       |
| [google/benchmark](https://github.com/google/benchmark)                | v1.8.4      | `#!cmake set(BENCHMARK_ENABLE_TESTING OFF)`<br>`#!cmake CPMAddPackage("gh:google/benchmark@1.8.4")` <br>CMakeTarget: `benchmark::benchmark`                    <br>       |
| [googletest](https://github.com/google/googletest)                     | v1.15.0     | `#!cmake set(BUILD_GMOCK OFF)`<br>`#!cmake CPMAddPackage("gh:google/googletest@1.15.0")`            <br>CMakeTarget: `GTest::gtest`                            <br>       |
| [reflect](https://github.com/boost-ext/reflect)                        | v1.2.1      | `#!cmake WrappedCPMAddPackage("gh:boost-ext/reflect@1.2.1")`                                        <br>CMakeTarget: `reflect::reflect`                         <br> requires [WrappedCPMAddPackage](https://github.com/SGSSGene/WrappedCPMAddPackage) |
| [simde](https://github.com/simd-everywhere/simde)                      | v0.8.2      | `#!cmake WrappedCPMAddPackage("gh:simd-everywhere/simde@0.8.2")`                                    <br>CMakeTarget: `simde::simde`                            <br> requires [WrappedCPMAddPackage](https://github.com/SGSSGene/WrappedCPMAddPackage) |
| [zlib](https://zlib.net/zlib-1.3.1.tar.gz)                             |  1.3.1      | `#!cmake WrappedCPMAddPackage("https://zlib.net/zlib-1.3.1.tar.gz@1.3.1")`                          <br>CMakeTarget: `zlib::zlib`                              <br> requires [WrappedCPMAddPackage](https://github.com/SGSSGene/WrappedCPMAddPackage) |
| [zstd](https://github.com/facebook/zstd)                               | v1.5.6      | `#!cmake WrappedCPMAddPackage("gh:facebook/zstd@1.5.5")`                                            <br>CMakeTarget: `zstd::zstd`                              <br> requires [WrappedCPMAddPackage](https://github.com/SGSSGene/WrappedCPMAddPackage) |
| [bzip2](https://sourceware.org/bzip2/)                                 | v1.0.8      | `#!cmake WrappedCPMAddPackage("https://sourceware.org/pub/bzip2/bzip2-1.0.8.tar.gz@1.0.8")`         <br>CMakeTarget: `bzip2::bzip2`                            <br> requires [WrappedCPMAddPackage](https://github.com/SGSSGene/WrappedCPMAddPackage) |
| [glad](https://github.com/Dav1dde/glad)                                | v0.1.36     | `#!cmake CPMAddPackage("gh:Dav1dde/glad@0.1.36")`                                                   <br>CMakeTarget: `glad`                                    <br>       |
| [glm](https://github.com/g-truc/glm)                                   |  1.0.1      | `#!cmake CPMAddPackage("gh:g-truc/glm#1.0.1@1.0.1")`                                                <br>CMakeTarget: `glm`                                     <br>       |
| [glfw](https://github.com/glfw/glfw)                                   |  3.3.2      | `#!cmake WrappedCPMAddPackage("gh:glfw/glfw#3.4@3.4")`                                              <br>CMakeTarget: `glfw`                                    <br> requires [WrappedCPMAddPackage](https://github.com/SGSSGene/WrappedCPMAddPackage) |
| [Cinder](https://github.com/cinder/Cinder)                             | #a70e977b   | `#!cmake CPMAddPackage("gh:cinder/Cinder#a70e977b735ca493910984a56723280b66385059")`                <br>CMakeTarget: `cinder`                                  <br>       |
| [flatbuffers](https://github.com/google/flatbuffers)                   | v24.3.25    | `#!cmake WrappedCPMAddPackage("gh:google/flatbuffers@24.3.7")`                                      <br>CMakeTarget: `flatbuffers`                             <br> requires [WrappedCPMAddPackage](https://github.com/SGSSGene/WrappedCPMAddPackage) |
| [xsimd](https://github.com/xtensor-stack/xsimd)                        | v13.0.0     | `#!cmake CPMAddPackage("gh:xtensor-stack/xsimd#13.0.0@13.0.0")`                                     <br>CMakeTarget: `xsimd`                                   <br>       |
| [xtl](https://github.com/xtensor-stack/xtl)                            |  0.7.7      | `#!cmake CPMAddPackage("gh:xtensor-stack/xtl#0.7.7@0.7.7")`                                         <br>CMakeTarget: `xtl`                                     <br>       |
| [mimalloc](https://github.com/microsoft/mimalloc)                      | v2.1.7      | `#!cmake WrappedCPMAddPackage("gh:microsoft/mimalloc@2.1.7")`                                       <br>CMakeTarget: `mimalloc`                                <br> requires [WrappedCPMAddPackage](https://github.com/SGSSGene/WrappedCPMAddPackage) |
| [libsamplerate](https://github.com/libsndfile/libsamplerate)           |  0.2.2      | `#!cmake WrappedCPMAddPackage("gh:libsndfile/libsamplerate#0.2.2@0.2.2")`                           <br>CMakeTarget: `SampleRate::samplerate`                  <br> requires [WrappedCPMAddPackage](https://github.com/SGSSGene/WrappedCPMAddPackage) |
| [libsndfile](https://github.com/libsndfile/libsndfile)                 |  1.2.2      | `#!cmake WrappedCPMAddPackage("gh:libsndfile/libsndfile#1.2.2@1.2.2")`                              <br>CMakeTarget: `SndFile::sndfile`                        <br> requires [WrappedCPMAddPackage](https://github.com/SGSSGene/WrappedCPMAddPackage) |
| [unordered_dense](https://github.com/martinus/unordered_dense)         | v4.4.0      | `#!cmake CPMAddPackage("gh:martinus/unordered_dense@4.4.0")`                                        <br>CMakeTarget: `unordered_dense::unordered_dense`        <br>       |
| [robin-hood-hashing](https://github.com/martinus/robin-hood-hashing)   |  3.11.5     | `#!cmake CPMAddPackage("gh:martinus/robin-hood-hashing#3.11.5@3.11.5")`                             <br>CMakeTarget: `robin_hood::robin_hood`                  <br>       |
| [matplotplusplus](https://github.com/alandefreitas/matplotplusplus)    | v1.2.1      | `#!cmake CPMAddPackage("gh:alandefreitas/matplotplusplus@1.2.1")`                                   <br>CMakeTarget: `matplot`                                 <br>       |
| [sfml](https://github.com/SFML/SFML)                                   |  2.6.1      | `#!cmake CPMAddPackage("gh:SFML/SFML#2.6.1@2.6.1")`                                                 <br>CMakeTarget: `sfml-graphics sfml-network sfml-audio sfml-system sfml-window sfml-main sfml-activity` <br> Excluded from unittests |
| [CTRE](https://github.com/hanickadot/compile-time-regular-expressions) | v3.8.1      | `#!cmake CPMAddPackage("gh:hanickadot/compile-time-regular-expressions@3.8.1")`                     <br>CMakeTarget: `ctre::ctre`                              <br>       |
| [Oniguruma](https://github.com/kkos/oniguruma)                         | v6.9.9      | `#!cmake CPMAddPackage("gh:kkos/oniguruma@6.9.9")`                                                  <br>CMakeTarget: `onig`                                    <br>       |
| [PCRE2](https://github.com/PCRE2Project/pcre2)                         | pcre2-10.43 | `#!cmake CPMAddPackage("gh:PCRE2Project/pcre2#pcre2-10.43")`                                        <br>CMakeTarget: `pcre2-8-static`                          <br>       |
| [hyperscan](https://github.com/intel/hyperscan)                        | v5.4.2      | `#!cmake WrappedCPMAddPackage("gh:intel/hyperscan@5.4.2")`                                          <br>CMakeTarget: `hs::hs`                                  <br> requires [WrappedCPMAddPackage](https://github.com/SGSSGene/WrappedCPMAddPackage)<br>requires installed boost |
| [srell](https://www.akenotsuki.com/misc/srell/en/)                     |  4.040      | `#!cmake WrappedCPMAddPackage("https://www.akenotsuki.com/misc/srell/releases/srell4_040.zip@4.040")` <br>CMakeTarget: `srell::srell`                          <br> requires [WrappedCPMAddPackage](https://github.com/SGSSGene/WrappedCPMAddPackage) |
| [linenoise](https://github.com/antirez/linenoise)                      |  1.0        | `#!cmake WrappedCPMAddPackage("gh:antirez/linenoise#1.0@1.0")`                                      <br>CMakeTarget: `linenoise`                               <br> requires [WrappedCPMAddPackage](https://github.com/SGSSGene/WrappedCPMAddPackage) |
| [cxxopts](https://github.com/jarro2783/cxxopts)                        | v3.2.1      | `#!cmake WrappedCPMAddPackage("gh:jarro2783/cxxopts@2.2.0")`                                        <br>CMakeTarget: `cxxopts`                                 <br> requires [WrappedCPMAddPackage](https://github.com/SGSSGene/WrappedCPMAddPackage) |
| [progress-cpp](https://github.com/prakhar1989/progress-cpp)            | #7bfba0d2   | `#!cmake CPMAddPackage("gh:prakhar1989/progress-cpp#7bfba0d22d19c41323aa35541618b6ebec9d737c")`     <br>CMakeTarget: `progresscpp`                             <br>       |
| [tabulate](https://github.com/p-ranav/tabulate)                        | v1.5        | `#!cmake CPMAddPackage("gh:p-ranav/tabulate@1.0")`                                                  <br>CMakeTarget: `tabulate`                                <br>       |
| [variant-lite](https://github.com/martinmoene/variant-lite)            | v2.0.0      | `#!cmake CPMAddPackage("gh:martinmoene/variant-lite@1.2.2")`                                        <br>CMakeTarget: `variant-lite`                            <br>       |
| [pugixml](https://github.com/zeux/pugixml)                             | v1.14       | `#!cmake CPMAddPackage("gh:zeux/pugixml@1.14")`                                                     <br>CMakeTarget: `pugixml::static`                         <br>       |
| [fmindex-collection](https://github.com/SGSSGene/fmindex-collection)   | v0.3.3      | `#!cmake CPMAddPackage("gh:SGSSGene/fmindex-collection@0.3.3")`                                     <br>CMakeTarget: `fmindex-collection::fmindex-collection`  <br>       |
| [ivio](https://github.com/iv-project/IVio)                             | v0.3.1      | `#!cmake CPMAddPackage("gh:iv-project/ivio@0.3.1")`                                                 <br>CMakeTarget: `ivio::ivio`                              <br>       |
| [xxhash](https://github.com/Cyan4973/xxHash)                           | v0.8.2      | `#!cmake WrappedCPMAddPackage("gh:Cyan4973/xxHash@0.8.2")`                                          <br>CMakeTarget: `xxhash`                                  <br> requires [WrappedCPMAddPackage](https://github.com/SGSSGene/WrappedCPMAddPackage) |
| [libsais](https://github.com/IlyaGrebnov/libsais)                      | v2.8.4      | `#!cmake CPMAddPackage("gh:IlyaGrebnov/libsais@2.8.4")`                                             <br>CMakeTarget: `libsais`                                 <br>       |
| [doctest](https://github.com/doctest/doctest)                          | v2.4.11     | `#!cmake CPMAddPackage("gh:doctest/doctest@2.4.11")`                                                <br>CMakeTarget: `doctest::doctest`, `doctest::doctest_with_main` <br> use `#include <doctest/doctest.h>` |
| [re2](https://github.com/google/re2)                                   | 2024-06-01  | `#!cmake CPMAddPackage("gh:google/re2#2024-06-01")`                                                 <br>CMakeTarget: `re2::re2`                                <br> requires abseil with option `set(ABSL_ENABLE_INSTALL ON)` |
| [7-zip](https://github.com/rikyoz/7-zip)                               | v24.07      | `#!cmake WrappedCPMAddPackage("gh:rikyoz/7-Zip@24.07")`                                             <br>CMakeTarget: `7-zip::7-zip`                            <br> requires [WrappedCPMAddPackage](https://github.com/SGSSGene/WrappedCPMAddPackage) |
| [sdsl-lite](https://github.com/xxsds/sdsl-lite)                        | v3.0.3      | `#!cmake WrappedCPMAddPackage("gh:xxsds/sdsl-lite@3.0.3")`                                          <br>CMakeTarget: `sdsl-lite::sdsl-lite`                    <br> requires [WrappedCPMAddPackage](https://github.com/SGSSGene/WrappedCPMAddPackage) |



</div>

# Utilities

<div markdown class="compact_data_table">

| Name                                                                                     | Version    | CPM                                                                                                                                                                       |
|:-----------------------------------------------------------------------------------------|------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| [CMakeUseCCache](https://github.com/SGSSGene/CMakeUseCCache)                             |    v1.0.0  | `#!cmake CPMAddPackage("gh:SGSSGene/CMakeUseCCache@1.0.0")`                                      <br>`#!cmake require_ccache() # activates ccache usage`    <br>          |
| [WrappedCPMAddPackage](https://github.com/SGSSGene/WrappedCPMAddPackage)                 |    v0.2.0  | `#!cmake CPMAddPackage("gh:SGSSGene/WrappedCPMAddPackage@0.2.0")`                                <br>`#!cmake WrappedCPMAddPackage("gh:boost-ext/reflect@1.1.0")` # example usage <br>   |
| [GroupsourcesByFolder.cmake](https://github.com/TheLartians/GroupSourcesByFolder.cmake)  |    v1.0    | `#!cmake CPMAddPackage("gh:TheLartians/GroupSourcesByFolder.cmake@1.0")`                         <br>`#!cmake GroupSourcesByFolder(myTarget)`                             |
| [Format.cmake](https://github.com/TheLartians/Format.cmake)                              |    v1.0    | `#!cmake CPMAddPackage("gh:TheLartians/Format.cmake@1.0")`                                       <br>                                                                     |
| [cpm_version_check](https://github.com/SGSSGene/cpm_check_version)                       |    v0.1.1  | `#!cmake CPMAddPackage("gh:SGSSGene/cpm_check_version@0.1.1")`                                   <br>`#!cmake cpm_check_version([ignore_package1] [igonre_package2] ...)` |
| [PackageProject.cmake](https://github.com/TheLartians/PackageProject.cmake)              |    v1.11.2 | `#!cmake CPMAddPackage("gh:TheLartians/PackageProject.cmake@1.11.2")`                            <br>`#!cmake packageProject(....)` # example usage <br>                  |

</div>

# Not properly working

<div markdown class="compact_data_table">

| Name                                                                   | Remark |
|:-----------------------------------------------------------------------|        |
| [boost](https://github.com/ClausKlein/boost-cmake)                     | Only works for certain versions e.g.: `#!cmake CPMAddPackage("gh:ClausKlein/boost-cmake@1.80.0")` |

</div>


<!--
| [backward-cpp](https://github.com/bombela/backward-cpp) | v1.6       | `backward`                              | `CPMAddPackage("gh:bombela/backward-cpp@1.6")`                               |       |
| [brotli](https://github.com/google/brotli.git)          | v1.1.0     | `brotli`                                | `CPMAddPackage("gh:google/brotli@1.1.0")`                                    |       |
 -->
