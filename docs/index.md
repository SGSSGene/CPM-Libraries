<!-- SPDX-FileCopyrightText: 2024 Simon Gene Gottlieb
     SPDX-License-Identifier: CC0-1.0
-->
# Libraries

<div markdown class="compact_data_table">

| Name                                                                 | Version    | CPM                                                                                                 <br>CMakeTarget                                            <br>extra  |
|:---------------------------------------------------------------------|------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| [fmt](https://github.com/fmtlib/fmt)                                 |  10.2.1    | `#!cmake CPMAddPackage("gh:fmtlib/fmt#10.2.1@10.2.1")`                                              <br>CMakeTarget: `fmt::fmt`                                <br>       |
| [nlohmann/json](https://github.com/nlohmann/json)                    | v3.11.3    | `#!cmake CPMAddPackage("gh:nlohmann/json@3.11.3")`                                                  <br>CMakeTarget: `nlohmann_json::nlohmann_json`            <br>       |
| [Catch2](https://github.com/catchorg/Catch2)                         | v3.5.3     | `#!cmake CPMAddPackage("gh:catchorg/Catch2@3.5.3")`                                                 <br>CMakeTarget: `Catch2::Catch2 Catch2::Catch2WithMain`   <br>       |
| [rang](https://github.com/agauniyal/rang)                            | v3.2       | `#!cmake CPMAddPackage("gh:agauniyal/rang@3.2")`                                                    <br>CMakeTarget: `rang`                                    <br>       |
| [abseil](https://github.com/abseil/abseil-cpp)                       | 20240116.1 | `#!cmake CPMAddPackage("gh:abseil/abseil-cpp#20240116.1")`                                          <br>CMakeTarget: `absl::strings absl::*`                   <br>       |
| [CGraph](https://github.com/ChunelFeng/CGraph)                       | <broken>   | `#!cmake CPMAddPackage("gh:ChunelFeng/CGraph#867e304b168da22ff4c3298a3b1c364502c41920")`            <br>CMakeTarget: `CGraph`                                  <br>       |
| [bit7z](https://github.com/rikyoz/bit7z)                             | v4.0.5     | `#!cmake CPMAddPackage("gh:rikyoz/bit7z@4.0.5")`                                                    <br>CMakeTarget: `bit7z`                                   <br>       |
| [toml++](https://github.com/marzer/tomlplusplus)                     | v3.4.0     | `#!cmake CPMAddPackage("gh:marzer/tomlplusplus@3.4.0")`                                             <br>CMakeTarget: `tomlplusplus::tomlplusplus`              <br>       |
| [nanobench](https://github.com/martinus/nanobench)                   | v4.3.11    | `#!cmake CPMAddPackage("gh:martinus/nanobench@4.3.11")`                                             <br>CMakeTarget: `nanobench::nanobench`                    <br>       |
| [cereal](https://github.com/USCiLab/cereal)                          | v1.3.2     | `#!cmake CPMAddPackage("gh:USCiLab/cereal@1.3.2")`                                                  <br>CMakeTarget: `cereal::cereal`                          <br>       |
| [pybind11](https://github.com/pybind/pybind11)                       | v2.11.1    | `#!cmake CPMAddPackage("gh:pybind/pybind11@2.11.1")`                                                <br>CMakeTarget: `pybind11::pybind11`                      <br>       |
| [yamlcpp](https://github.com/jbeder/yaml-cpp)                        |  0.8.0     | `#!cmake CPMAddPackage("gh:jbeder/yaml-cpp#0.8.0@0.8.0")`                                           <br>CMakeTarget: `yaml-cpp::yaml-cpp`                      <br>       |
| [rapidyaml](https://github.com/biojppm/rapidyaml)                    | v0.5.0     | `#!cmake CPMAddPackage("gh:biojppm/rapidyaml@0.5.0")`                                               <br>CMakeTarget: `ryml::ryml`                              <br>       |
| [google/benchmark](https://github.com/google/benchmark)              | v1.8.3     | `#!cmake set(BENCHMARK_ENABLE_TESTING OFF)`<br>`#!cmake CPMAddPackage("gh:google/benchmark@1.8.3")` <br>CMakeTarget: `benchmark::benchmark`                    <br>       |
| [googletest](https://github.com/google/googletest)                   | v1.14.0    | `#!cmake set(BUILD_GMOCK OFF)`<br>`#!cmake CPMAddPackage("gh:google/googletest@1.14.0")`            <br>CMakeTarget: `GTest::gtest`                            <br>       |
| [reflect](https://github.com/boost-ext/reflect)                      | v1.1.0     | `#!cmake WrapperCPMAddPackage("gh:boost-ext/refelect@1.1.0")`                                       <br>CMakeTarget: `reflect::reflect`                        <br> requires [WrapperCPMAddPackage](https://github.com/SGSSGene/WrapperCPMAddPackage) |
| [simde](https://github.com/simd-everywhere/simde)                    | v0.7.6     | `#!cmake WrapperCPMAddPackage("gh:simd-everywhere/simde@0.7.6")`                                    <br>CMakeTarget: `simde::simde`                            <br> requires [WrapperCPMAddPackage](https://github.com/SGSSGene/WrapperCPMAddPackage) |
| [zlib](https://zlib.net/zlib-1.3.1.tar.gz)                           |  1.3.1     | `#!cmake WrapperCPMAddPackage("https://zlib.net/zlib-1.3.1.tar.gz@1.3.1")`                          <br>CMakeTarget: `zlib::zlib`                              <br> requires [WrapperCPMAddPackage](https://github.com/SGSSGene/WrapperCPMAddPackage) |
| [zstd](https://github.com/facebook/zstd)                             | v1.5.5     | `#!cmake WrappedCPMAddPackage("gh:facebook/zstd@1.5.5")`                                            <br>CMakeTarget: `zstd::zstd`                              <br> requires [WrapperCPMAddPackage](https://github.com/SGSSGene/WrapperCPMAddPackage) |
| [bzip2](https://sourceware.org/bzip2/)                               | v1.0.8     | `#!cmake WrappedCPMAddPackage("https://sourceware.org/pub/bzip2/bzip2-1.0.8.tar.gz@1.0.8")`         <br>CMakeTarget: `bzip2::bzip2`                            <br> requires [WrapperCPMAddPackage](https://github.com/SGSSGene/WrapperCPMAddPackage) |
| [glad](https://github.com/Dav1dde/glad)                              | v0.1.36    | `#!cmake CPMAddPackage("gh:Dav1dde/glad@0.1.36")`                                                   <br>CMakeTarget: `glad`                                    <br>       |
| [glm] (https://github.com/g-truc/glm)                                |  1.0.1     | `#!cmake CPMAddPackage("gh:g-truc/glm#1.0.1@1.0.1")`                                                <br>CMakeTarget: `glm`                                     <br>       |
| [glfw](https://github.com/glfw/glfw)                                 |  3.3.2     | `#!cmake WrappedCPMAddPackage("gh:glfw/glfw#3.4@3.4")`                                              <br>CMakeTarget: `glfw`                                    <br> requires [WrapperCPMAddPackage](https://github.com/SGSSGene/WrapperCPMAddPackage) |
| [Cinder](https://github.com/cinder/Cinder)                           | #a70e977b  | `#!cmake CPMAddPackage("gh:cinder/Cinder#a70e977b735ca493910984a56723280b66385059")`                <br>CMakeTarget: `cinder`                                  <br>       |
| [flatbuffers](https://github.com/google/flatbuffers)                 | v24.3.7    | `#!cmake WrappedCPMAddPackage("gh:google/flatbuffers@24.3.7")`                                      <br>CMakeTarget: `flatbuffers`                             <br> requires [WrapperCPMAddPackage](https://github.com/SGSSGene/WrapperCPMAddPackage) |
| [xsimd](https://github.com/xtensor-stack/xsimd)                      | v12.1.1    | `#!cmake CPMAddPackage("gh:xtensor-stack/xsimd#12.1.1@12.1.1")`                                     <br>CMakeTarget: `xsimd`                                   <br>       |
| [xtl](https://github.com/xtensor-stack/xtl)                          |  0.7.7     | `#!cmake CPMAddPackage("gh:xtensor-stack/xtl#0.7.7@0.7.7")`                                         <br>CMakeTarget: `xtl`                                     <br>       |
| [mimalloc](https://github.com/microsoft/mimalloc)                    | v2.1.2     | `#!cmake WrappedCPMAddPackage("gh:microsoft/mimalloc@2.1.2")`                                       <br>CMakeTarget: `mimalloc`                                <br> requires [WrapperCPMAddPackage](https://github.com/SGSSGene/WrapperCPMAddPackage) |
| [libsamplerate](https://github.com/libsndfile/libsamplerate)         |  0.2.2     | `#!cmake WrappedCPMAddPackage("gh:libsndfile/libsamplerate#0.2.2@0.2.2")`                           <br>CMakeTarget: `SampleRate::samplerate`                  <br> requires [WrapperCPMAddPackage](https://github.com/SGSSGene/WrapperCPMAddPackage) |
| [libsndfile](https://github.com/libsndfile/libsndfile)               |  1.2.2     | `#!cmake WrappedCPMAddPackage("gh:libsndfile/libsndfile#1.2.2@1.2.2")`                              <br>CMakeTarget: `SndFile::sndfile`                        <br> requires [WrapperCPMAddPackage](https://github.com/SGSSGene/WrapperCPMAddPackage) |
| [unordered_dense](https://github.com/martinus/unordered_dense)       | v4.4.0     | `#!cmake CPMAddPackage("gh:martinus/unordered_dense@4.4.0")`                                        <br>CMakeTarget: `unordered_dense::unordered_dense`        <br>       |
| [robin-hood-hashing](https://github.com/martinus/robin-hood-hashing) |  3.11.5    | `#!cmake CPMAddPackage("gh:martinus/robin-hood-hashing#3.11.5@3.11.5")`                             <br>CMakeTarget: `robin_hood::robin_hood`                  <br>       |
| [matplotplusplus](https://github.com/alandefreitas/matplotplusplus)  | v1.2.1     | `#!cmake CPMAddPackage("gh:alandefreitas/matplotplusplus@1.2.1")`                                   <br>CMakeTarget: `matplot`                                 <br>       |



</div>

# Utilities

<div markdown class="compact_data_table">

| Name                                                                       | Version    | CPM                                                                                                                                                                       |
|:---------------------------------------------------------------------------|------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| [CMakeUseCCache](https://github.com/SGSSGene/CMakeUseCCache)               |    v1.0.0  | `#!cmake CPMAddPackage("gh:SGSSGene/CMakeUseCCache@1.0.0")`                                      <br>`#!cmake require_ccache() # activates ccache usage`    <br>          |
| [iWrappedCPMAddPackage](https://github.com/SGSSGene/WrappedCPMAddPackage)  |    v0.2.0  | `#!cmake CPMAddPackage("gh:SGSSGene/WrappedCPMAddPackage@0.2.0")`                                <br>`#!cmake WrappedCPMAddPackage("gh:boost-ext/reflect@1.1.0")` # example usage <br>   |



</div>


<!--
| [backward-cpp](https://github.com/bombela/backward-cpp) | v1.6       | `backward`                              | `CPMAddPackage("gh:bombela/backward-cpp@1.6")`                               |       |
| [brotli](https://github.com/google/brotli.git)          | v1.1.0     | `brotli`                                | `CPMAddPackage("gh:google/brotli@1.1.0")`                                    |       |
 -->
