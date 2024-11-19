# SPDX-FileCopyrightText: 2024 Simon Gene Gottlieb
# SPDX-License-Identifier: CC0-1.0
| [GroupSourcesByFolder.cmake](https://github.com/TheLartians/GroupSourcesByFolder.cmake) | 1.0 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/TheLartians/GroupSourcesByFolder.cmake",<br/>&nbsp;&nbsp;"name":&nbsp;"GroupSourcesByFolder.cmake",<br/>&nbsp;&nbsp;"version":&nbsp;"1.0",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"TheLartians/GroupSourcesByFolder.cmake"<br/>}<br/></code></pre> |
| [PackageProject.cmake](https://github.com/TheLartians/PackageProject.cmake) | 1.12.0 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/TheLartians/PackageProject.cmake",<br/>&nbsp;&nbsp;"name":&nbsp;"PackageProject.cmake",<br/>&nbsp;&nbsp;"version":&nbsp;"1.12.0",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"TheLartians/PackageProject.cmake"<br/>}<br/></code></pre> |
| [CMakeUseCCache](https://github.com/SGSSGene/CMakeUseCCache) | 1.0.0 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/SGSSGene/CMakeUseCCache",<br/>&nbsp;&nbsp;"name":&nbsp;"CMakeUseCCache",<br/>&nbsp;&nbsp;"version":&nbsp;"1.0.0",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"SGSSGene/CMakeUseCCache",<br/>&nbsp;&nbsp;"cmake_commands":&nbsp;"require_ccache()"<br/>}<br/></code></pre> |
| [fmt](https://github.com/fmtlib/fmt) | 11.0.2 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/fmtlib/fmt",<br/>&nbsp;&nbsp;"name":&nbsp;"fmt",<br/>&nbsp;&nbsp;"version":&nbsp;"11.0.2",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"fmtlib/fmt",<br/>&nbsp;&nbsp;"git_tag":&nbsp;"{VERSION}"<br/>}<br/></code></pre> |
| [nlohman_json](https://github.com/nlohmann/json) | 3.11.3 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/nlohmann/json",<br/>&nbsp;&nbsp;"name":&nbsp;"nlohman_json",<br/>&nbsp;&nbsp;"version":&nbsp;"3.11.3",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"nlohmann/json"<br/>}<br/></code></pre> |
| [Catch2](https://github.com/catchorg/Catch2) | 3.7.1 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/catchorg/Catch2",<br/>&nbsp;&nbsp;"name":&nbsp;"Catch2",<br/>&nbsp;&nbsp;"version":&nbsp;"3.7.1",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"catchorg/Catch2"<br/>}<br/></code></pre> |
| [CGraph](https://github.com/ChunelFeng/CGraph) | 2.6.1 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/ChunelFeng/CGraph",<br/>&nbsp;&nbsp;"name":&nbsp;"CGraph",<br/>&nbsp;&nbsp;"version":&nbsp;"2.6.1",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"ChunelFeng/CGraph",<br/>&nbsp;&nbsp;"cmake_commands":&nbsp;[<br/>&nbsp;&nbsp;&nbsp;&nbsp;"add_library(cgraph&nbsp;STATIC&nbsp;$<TARGET_OBJECTS:CGraph>)",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"target_link_libraries(cgraph&nbsp;INTERFACE&nbsp;CGraph)",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"target_include_directories(cgraph&nbsp;SYSTEM&nbsp;INTERFACE&nbsp;${CPM_CURRENT_SOURCE_DIR}/src)",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"add_library(cgraph::cgraph&nbsp;ALIAS&nbsp;cgraph)"<br/>&nbsp;&nbsp;]<br/>}<br/></code></pre> |
| [7-Zip](https://github.com/rikyoz/7-zip) | 24.08 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/rikyoz/7-zip",<br/>&nbsp;&nbsp;"name":&nbsp;"7-Zip",<br/>&nbsp;&nbsp;"version":&nbsp;"24.08",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"rikyoz/7-Zip",<br/>&nbsp;&nbsp;"cmake_commands":&nbsp;[<br/>&nbsp;&nbsp;&nbsp;&nbsp;"file(GLOB&nbsp;SOURCE_FILES&nbsp;${CPM_CURRENT_SOURCE_DIR}/C/*.c)",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"add_library(7-Zip_impl&nbsp;${SOURCE_FILES})",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"target_include_directories(7-Zip_impl&nbsp;PUBLIC&nbsp;SYSTEM&nbsp;${CPM_CURRENT_SOURCE_DIR}/CPP/&nbsp;${CPM_CURRENT_SOURCE_DIR}/C/)",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"add_library(7-zip::7-zip&nbsp;ALIAS&nbsp;7-Zip_impl)",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"set(BIT7Z_CUSTOM_7ZIP_PATH&nbsp;${CPM_CURRENT_SOURCE_DIR})"<br/>&nbsp;&nbsp;]<br/>}<br/></code></pre> |
| [rang](https://github.com/agauniyal/rang) | 3.2 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/agauniyal/rang",<br/>&nbsp;&nbsp;"name":&nbsp;"rang",<br/>&nbsp;&nbsp;"version":&nbsp;"3.2",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"agauniyal/rang"<br/>}<br/></code></pre> |
| [absl](https://github.com/abseil/abseil-cpp) | 20240722.0 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/abseil/abseil-cpp",<br/>&nbsp;&nbsp;"name":&nbsp;"absl",<br/>&nbsp;&nbsp;"version":&nbsp;"20240722.0",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"abseil/abseil-cpp",<br/>&nbsp;&nbsp;"git_tag":&nbsp;"{VERSION}",<br/>&nbsp;&nbsp;"options":&nbsp;[<br/>&nbsp;&nbsp;&nbsp;&nbsp;"ABSL_ENABLE_INSTALL&nbsp;ON",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"ABSL_PROPAGATE_CXX_STD&nbsp;ON"<br/>&nbsp;&nbsp;]<br/>}<br/></code></pre> |
| [bit7z](https://github.com/rikyoz/bit7z) | 4.0.7-dirty | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/rikyoz/bit7z",<br/>&nbsp;&nbsp;"name":&nbsp;"bit7z",<br/>&nbsp;&nbsp;"version":&nbsp;"4.0.7-dirty",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"rikyoz/bit7z",<br/>&nbsp;&nbsp;"git_tag":&nbsp;"f04d819e8eb82474532e3da4925e5dd247ea35bb"<br/>}<br/></code></pre> |
| [tomlplusplus](https://github.com/marzer/tomlplusplus) | 3.4.0 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/marzer/tomlplusplus",<br/>&nbsp;&nbsp;"name":&nbsp;"tomlplusplus",<br/>&nbsp;&nbsp;"version":&nbsp;"3.4.0",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"marzer/tomlplusplus"<br/>}<br/></code></pre> |
| [nanobench](https://github.com/martinus/nanobench) | 4.3.11 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/martinus/nanobench",<br/>&nbsp;&nbsp;"name":&nbsp;"nanobench",<br/>&nbsp;&nbsp;"version":&nbsp;"4.3.11",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"martinus/nanobench"<br/>}<br/></code></pre> |
| [pybind11](https://github.com/pybind/pybind11) | 2.13.6 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/pybind/pybind11",<br/>&nbsp;&nbsp;"name":&nbsp;"pybind11",<br/>&nbsp;&nbsp;"version":&nbsp;"2.13.6",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"pybind/pybind11"<br/>}<br/></code></pre> |
| [yaml-cpp](https://github.com/jbeder/yaml-cpp) | 0.8.0 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/jbeder/yaml-cpp",<br/>&nbsp;&nbsp;"name":&nbsp;"yaml-cpp",<br/>&nbsp;&nbsp;"version":&nbsp;"0.8.0",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"jbeder/yaml-cpp",<br/>&nbsp;&nbsp;"git_tag":&nbsp;"{VERSION}"<br/>}<br/></code></pre> |
| [rapidyaml](https://github.com/biojppm/rapidyaml) | 0.7.2 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/biojppm/rapidyaml",<br/>&nbsp;&nbsp;"name":&nbsp;"rapidyaml",<br/>&nbsp;&nbsp;"version":&nbsp;"0.7.2",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"biojppm/rapidyaml"<br/>}<br/></code></pre> |
| [glad](https://github.com/Dav1dde/glad) | 0.1.36 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/Dav1dde/glad",<br/>&nbsp;&nbsp;"name":&nbsp;"glad",<br/>&nbsp;&nbsp;"version":&nbsp;"0.1.36",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"Dav1dde/glad",<br/>&nbsp;&nbsp;"git_tag_ignore":&nbsp;[<br/>&nbsp;&nbsp;&nbsp;&nbsp;"v2.*"<br/>&nbsp;&nbsp;]<br/>}<br/></code></pre> |
| [xsimd](https://github.com/xtensor-stack/xsimd) | 13.0.0 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/xtensor-stack/xsimd",<br/>&nbsp;&nbsp;"name":&nbsp;"xsimd",<br/>&nbsp;&nbsp;"version":&nbsp;"13.0.0",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"xtensor-stack/xsimd",<br/>&nbsp;&nbsp;"git_tag":&nbsp;"{VERSION}"<br/>}<br/></code></pre> |
| [xtl](https://github.com/xtensor-stack/xtl) | 0.7.7 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/xtensor-stack/xtl",<br/>&nbsp;&nbsp;"name":&nbsp;"xtl",<br/>&nbsp;&nbsp;"version":&nbsp;"0.7.7",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"xtensor-stack/xtl",<br/>&nbsp;&nbsp;"git_tag":&nbsp;"{VERSION}"<br/>}<br/></code></pre> |
| [unordered_dense](https://github.com/martinus/unordered_dense) | 4.4.0 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/martinus/unordered_dense",<br/>&nbsp;&nbsp;"name":&nbsp;"unordered_dense",<br/>&nbsp;&nbsp;"version":&nbsp;"4.4.0",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"martinus/unordered_dense"<br/>}<br/></code></pre> |
| [robin-hood-hashing](https://github.com/martinus/robin-hood-hashing) | 3.11.5 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/martinus/robin-hood-hashing",<br/>&nbsp;&nbsp;"name":&nbsp;"robin-hood-hashing",<br/>&nbsp;&nbsp;"version":&nbsp;"3.11.5",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"martinus/robin-hood-hashing",<br/>&nbsp;&nbsp;"git_tag":&nbsp;"{VERSION}"<br/>}<br/></code></pre> |
| [matplotplusplus](https://github.com/alandefreitas/matplotplusplus) | 1.2.1 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/alandefreitas/matplotplusplus",<br/>&nbsp;&nbsp;"name":&nbsp;"matplotplusplus",<br/>&nbsp;&nbsp;"version":&nbsp;"1.2.1",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"alandefreitas/matplotplusplus"<br/>}<br/></code></pre> |
| [compile-time-regular-expressions](https://github.com/hanickadot/compile-time-regular-expressions) | 3.9.0 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/hanickadot/compile-time-regular-expressions",<br/>&nbsp;&nbsp;"name":&nbsp;"compile-time-regular-expressions",<br/>&nbsp;&nbsp;"version":&nbsp;"3.9.0",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"hanickadot/compile-time-regular-expressions",<br/>&nbsp;&nbsp;"git_tag_ignore":&nbsp;[<br/>&nbsp;&nbsp;&nbsp;&nbsp;"cppcon2018",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"2017"<br/>&nbsp;&nbsp;]<br/>}<br/></code></pre> |
| [oniguruma](https://github.com/kkos/oniguruma) | 6.9.9 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/kkos/oniguruma",<br/>&nbsp;&nbsp;"name":&nbsp;"oniguruma",<br/>&nbsp;&nbsp;"version":&nbsp;"6.9.9",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"kkos/oniguruma"<br/>}<br/></code></pre> |
| [pcre2](https://github.com/PCRE2Project/pcre2) | 10.44 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/PCRE2Project/pcre2",<br/>&nbsp;&nbsp;"name":&nbsp;"pcre2",<br/>&nbsp;&nbsp;"version":&nbsp;"10.44",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"PCRE2Project/pcre2",<br/>&nbsp;&nbsp;"git_tag":&nbsp;"pcre2-{VERSION}",<br/>&nbsp;&nbsp;"options":&nbsp;[<br/>&nbsp;&nbsp;&nbsp;&nbsp;"PCRE2_BUILD_TESTS&nbsp;OFF"<br/>&nbsp;&nbsp;]<br/>}<br/></code></pre> |
| [progress-cpp](https://github.com/prakhar1989/progress-cpp) | null | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/prakhar1989/progress-cpp",<br/>&nbsp;&nbsp;"name":&nbsp;"progress-cpp",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"prakhar1989/progress-cpp",<br/>&nbsp;&nbsp;"git_tag":&nbsp;"7bfba0d22d19c41323aa35541618b6ebec9d737c"<br/>}<br/></code></pre> |
| [tabulate](https://github.com/p-ranav/tabulate) | 1.5 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/p-ranav/tabulate",<br/>&nbsp;&nbsp;"name":&nbsp;"tabulate",<br/>&nbsp;&nbsp;"version":&nbsp;"1.5",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"p-ranav/tabulate"<br/>}<br/></code></pre> |
| [variant-lite](https://github.com/martinmoene/variant-lite) | 2.0.0 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/martinmoene/variant-lite",<br/>&nbsp;&nbsp;"name":&nbsp;"variant-lite",<br/>&nbsp;&nbsp;"version":&nbsp;"2.0.0",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"martinmoene/variant-lite"<br/>}<br/></code></pre> |
| [pugixml](https://github.com/zeux/pugixml) | 1.14 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/zeux/pugixml",<br/>&nbsp;&nbsp;"name":&nbsp;"pugixml",<br/>&nbsp;&nbsp;"version":&nbsp;"1.14",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"zeux/pugixml",<br/>&nbsp;&nbsp;"options":&nbsp;[<br/>&nbsp;&nbsp;&nbsp;&nbsp;"BUILD_SHARED_LIBS&nbsp;OFF"<br/>&nbsp;&nbsp;]<br/>}<br/></code></pre> |
| [libsais](https://github.com/IlyaGrebnov/libsais) | 2.8.5 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/IlyaGrebnov/libsais",<br/>&nbsp;&nbsp;"name":&nbsp;"libsais",<br/>&nbsp;&nbsp;"version":&nbsp;"2.8.5",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"IlyaGrebnov/libsais"<br/>}<br/></code></pre> |
| [fmindex-collection](https://github.com/SGSSGene/fmindex-collection) | 0.4.3 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/SGSSGene/fmindex-collection",<br/>&nbsp;&nbsp;"name":&nbsp;"fmindex-collection",<br/>&nbsp;&nbsp;"version":&nbsp;"0.4.3",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"SGSSGene/fmindex-collection"<br/>}<br/></code></pre> |
| [IVio](https://github.com/iv-project/IVio) | 0.4.3 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/iv-project/IVio",<br/>&nbsp;&nbsp;"name":&nbsp;"IVio",<br/>&nbsp;&nbsp;"version":&nbsp;"0.4.3",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"iv-project/IVio"<br/>}<br/></code></pre> |
| [xxHash](https://github.com/Cyan4973/xxHash) | 0.8.2 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/Cyan4973/xxHash",<br/>&nbsp;&nbsp;"name":&nbsp;"xxHash",<br/>&nbsp;&nbsp;"version":&nbsp;"0.8.2",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"Cyan4973/xxHash",<br/>&nbsp;&nbsp;"download_only":&nbsp;true,<br/>&nbsp;&nbsp;"cmake_commands":&nbsp;[<br/>&nbsp;&nbsp;&nbsp;&nbsp;"add_library(xxhash&nbsp;${CPM_CURRENT_SOURCE_DIR}/xxhash.c&nbsp;${CPM_CURRENT_SOURCE_DIR}/xxh_x86dispatch.c)",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"target_include_directories(xxhash&nbsp;SYSTEM&nbsp;INTERFACE&nbsp;$<BUILD_INTERFACE:${CPM_CURRENT_SOURCE_DIR}>)"<br/>&nbsp;&nbsp;],<br/>&nbsp;&nbsp;"git_tag_ignore":&nbsp;[<br/>&nbsp;&nbsp;&nbsp;&nbsp;"r[0-9]*"<br/>&nbsp;&nbsp;]<br/>}<br/></code></pre> |
| [doctest](https://github.com/doctest/doctest) | 2.4.11 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/doctest/doctest",<br/>&nbsp;&nbsp;"name":&nbsp;"doctest",<br/>&nbsp;&nbsp;"version":&nbsp;"2.4.11",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"doctest/doctest"<br/>}<br/></code></pre> |
| [re2](https://github.com/google/re2) | 2024-07-02 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/google/re2",<br/>&nbsp;&nbsp;"name":&nbsp;"re2",<br/>&nbsp;&nbsp;"version":&nbsp;"2024-07-02",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"google/re2",<br/>&nbsp;&nbsp;"git_tag":&nbsp;"{VERSION}",<br/>&nbsp;&nbsp;"options":&nbsp;[<br/>&nbsp;&nbsp;&nbsp;&nbsp;"BUILD_SHARED_LIBS&nbsp;OFF"<br/>&nbsp;&nbsp;]<br/>}<br/></code></pre> |
| [sdsl-lite](https://github.com/xxsds/sdsl-lite) | 3.0.3 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/xxsds/sdsl-lite",<br/>&nbsp;&nbsp;"name":&nbsp;"sdsl-lite",<br/>&nbsp;&nbsp;"version":&nbsp;"3.0.3",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"xxsds/sdsl-lite",<br/>&nbsp;&nbsp;"download_only":&nbsp;true,<br/>&nbsp;&nbsp;"cmake_commands":&nbsp;[<br/>&nbsp;&nbsp;&nbsp;&nbsp;"add_library(sdsl-lite&nbsp;INTERFACE)",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"target_include_directories(sdsl-lite&nbsp;INTERFACE&nbsp;SYSTEM&nbsp;${CPM_CURRENT_SOURCE_DIR}/include)",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"add_library(sdsl-lite::sdsl-lite&nbsp;ALIAS&nbsp;sdsl-lite)"<br/>&nbsp;&nbsp;],<br/>&nbsp;&nbsp;"git_tag_ignore":&nbsp;[<br/>&nbsp;&nbsp;&nbsp;&nbsp;"[Cc]++.*"<br/>&nbsp;&nbsp;]<br/>}<br/></code></pre> |
| [cereal](https://github.com/USCiLab/cereal) | 1.3.2 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/USCiLab/cereal",<br/>&nbsp;&nbsp;"name":&nbsp;"cereal",<br/>&nbsp;&nbsp;"version":&nbsp;"1.3.2",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"USCiLab/cereal",<br/>&nbsp;&nbsp;"options":&nbsp;[<br/>&nbsp;&nbsp;&nbsp;&nbsp;"BUILD_DOC&nbsp;OFF",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"BUILD_SANDBOX&nbsp;OFF",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"SKIP_PERFORMANCE_COMPARISON&nbsp;ON"<br/>&nbsp;&nbsp;]<br/>}<br/></code></pre> |
| [benchmark](https://github.com/google/benchmark) | 1.9.0 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/google/benchmark",<br/>&nbsp;&nbsp;"name":&nbsp;"benchmark",<br/>&nbsp;&nbsp;"version":&nbsp;"1.9.0",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"google/benchmark",<br/>&nbsp;&nbsp;"options":&nbsp;[<br/>&nbsp;&nbsp;&nbsp;&nbsp;"BENCHMARK_ENABLE_TESTING&nbsp;OFF",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"BENCHMARK_ENABLE_INSTALL&nbsp;OFF",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"BENCHMARK_ENABLE_GTEST_TESTS&nbsp;OFF"<br/>&nbsp;&nbsp;]<br/>}<br/></code></pre> |
| [googletest](https://github.com/google/googletest) | 1.15.2 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/google/googletest",<br/>&nbsp;&nbsp;"name":&nbsp;"googletest",<br/>&nbsp;&nbsp;"version":&nbsp;"1.15.2",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"google/googletest",<br/>&nbsp;&nbsp;"options":&nbsp;[<br/>&nbsp;&nbsp;&nbsp;&nbsp;"BUILD_GMOCK&nbsp;ON"<br/>&nbsp;&nbsp;]<br/>}<br/></code></pre> |
| [reflect](https://github.com/boost-ext/reflect) | 1.2.4 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/boost-ext/reflect",<br/>&nbsp;&nbsp;"name":&nbsp;"reflect",<br/>&nbsp;&nbsp;"version":&nbsp;"1.2.4",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"boost-ext/reflect",<br/>&nbsp;&nbsp;"cmake_commands":&nbsp;[<br/>&nbsp;&nbsp;&nbsp;&nbsp;"add_library(reflect&nbsp;INTERFACE)",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"target_include_directories(reflect&nbsp;SYSTEM&nbsp;INTERFACE&nbsp;${CPM_CURRENT_SOURCE_DIR})",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"target_compile_options(reflect&nbsp;INTERFACE&nbsp;-std=c++20)",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"add_library(reflect::reflect&nbsp;ALIAS&nbsp;reflect)"<br/>&nbsp;&nbsp;]<br/>}<br/></code></pre> |
| [simde](https://github.com/simd-everywhere/simde) | 0.8.2 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/simd-everywhere/simde",<br/>&nbsp;&nbsp;"name":&nbsp;"simde",<br/>&nbsp;&nbsp;"version":&nbsp;"0.8.2",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"simd-everywhere/simde",<br/>&nbsp;&nbsp;"download_only":&nbsp;true,<br/>&nbsp;&nbsp;"cmake_commands":&nbsp;[<br/>&nbsp;&nbsp;&nbsp;&nbsp;"add_library&nbsp;(simde&nbsp;INTERFACE)",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"add_library&nbsp;(simde::simde&nbsp;ALIAS&nbsp;simde)",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"target_include_directories&nbsp;(simde&nbsp;INTERFACE&nbsp;$<BUILD_INTERFACE:${CPM_CURRENT_SOURCE_DIR}>)",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"set_target_properties&nbsp;(simde&nbsp;PROPERTIES&nbsp;INTERFACE_SYSTEM_INCLUDE_DIRECTORIES&nbsp;$<TARGET_PROPERTY:simde,INTERFACE_INCLUDE_DIRECTORIES>)"<br/>&nbsp;&nbsp;]<br/>}<br/></code></pre> |
| [zlib](https://zlib.net/zlib-1.3.1.tar.gz) | 1.3.1 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://zlib.net/zlib-1.3.1.tar.gz",<br/>&nbsp;&nbsp;"name":&nbsp;"zlib",<br/>&nbsp;&nbsp;"version":&nbsp;"1.3.1",<br/>&nbsp;&nbsp;"url":&nbsp;"https://zlib.net/zlib-1.3.1.tar.gz",<br/>&nbsp;&nbsp;"options":&nbsp;[<br/>&nbsp;&nbsp;&nbsp;&nbsp;"ZLIB_BUILD_EXAMPLES&nbsp;OFF"<br/>&nbsp;&nbsp;],<br/>&nbsp;&nbsp;"cmake_commands":&nbsp;[<br/>&nbsp;&nbsp;&nbsp;&nbsp;"add_library(zlib::zlib&nbsp;ALIAS&nbsp;zlib)"<br/>&nbsp;&nbsp;]<br/>}<br/></code></pre> |
| [zstd](https://github.com/facebook/zstd) | 1.5.6 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/facebook/zstd",<br/>&nbsp;&nbsp;"name":&nbsp;"zstd",<br/>&nbsp;&nbsp;"version":&nbsp;"1.5.6",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"facebook/zstd",<br/>&nbsp;&nbsp;"options":&nbsp;[<br/>&nbsp;&nbsp;&nbsp;&nbsp;"ZSTD_BUILD_PROGRAMS&nbsp;FALSE",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"ZSTD_BUILD_TESTS&nbsp;FALSE"<br/>&nbsp;&nbsp;],<br/>&nbsp;&nbsp;"cmake_commands":&nbsp;[<br/>&nbsp;&nbsp;&nbsp;&nbsp;"add_subdirectory(${CPM_CURRENT_SOURCE_DIR}/build/cmake&nbsp;zstd)",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"add_library(zstd::zstd&nbsp;ALIAS&nbsp;libzstd_static)"<br/>&nbsp;&nbsp;],<br/>&nbsp;&nbsp;"git_tag_ignore":&nbsp;[<br/>&nbsp;&nbsp;&nbsp;&nbsp;"fuzz-corpora2"<br/>&nbsp;&nbsp;]<br/>}<br/></code></pre> |
| [bzip2](https://sourceware.org/bzip2/) | 1.0.8 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://sourceware.org/bzip2/",<br/>&nbsp;&nbsp;"name":&nbsp;"bzip2",<br/>&nbsp;&nbsp;"version":&nbsp;"1.0.8",<br/>&nbsp;&nbsp;"url":&nbsp;"https://sourceware.org/pub/bzip2/bzip2-1.0.8.tar.gz",<br/>&nbsp;&nbsp;"download_only":&nbsp;true,<br/>&nbsp;&nbsp;"cmake_commands":&nbsp;[<br/>&nbsp;&nbsp;&nbsp;&nbsp;"add_library(bzip2&nbsp;${CPM_CURRENT_SOURCE_DIR}/blocksort.c&nbsp;${CPM_CURRENT_SOURCE_DIR}/bzip2.c&nbsp;${CPM_CURRENT_SOURCE_DIR}/bzlib.c&nbsp;${CPM_CURRENT_SOURCE_DIR}/compress.c&nbsp;${CPM_CURRENT_SOURCE_DIR}/crctable.c&nbsp;${CPM_CURRENT_SOURCE_DIR}/decompress.c&nbsp;${CPM_CURRENT_SOURCE_DIR}/huffman.c&nbsp;${CPM_CURRENT_SOURCE_DIR}/makefile.msc&nbsp;${CPM_CURRENT_SOURCE_DIR}/randtable.c)",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"target_include_directories(bzip2&nbsp;SYSTEM&nbsp;INTERFACE&nbsp;${bzip2_SOURCE_DIR})",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"add_library(bzip2::bzip2&nbsp;ALIAS&nbsp;bzip2)"<br/>&nbsp;&nbsp;]<br/>}<br/></code></pre> |
| [glfw](https://github.com/glfw/glfw) | 3.4 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/glfw/glfw",<br/>&nbsp;&nbsp;"name":&nbsp;"glfw",<br/>&nbsp;&nbsp;"version":&nbsp;"3.4",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"glfw/glfw",<br/>&nbsp;&nbsp;"git_tag":&nbsp;"{VERSION}",<br/>&nbsp;&nbsp;"options":&nbsp;[<br/>&nbsp;&nbsp;&nbsp;&nbsp;"GLFW_BUILD_TESTS&nbsp;OFF",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"GLFW_BUILD_EXAMPLES&nbsp;OFF",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"GLFW_BUILD_DOCS&nbsp;OFF",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"GLFW_INSTALL&nbsp;OFF",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"GLFW_USE_HYBRID_HPG&nbsp;ON",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"GLFW_BUILD_WAYLAND&nbsp;OFF",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"GLFW_BUILD_X11&nbsp;OFF"<br/>&nbsp;&nbsp;]<br/>}<br/></code></pre> |
| [flatbuffers](https://github.com/google/flatbuffers) | 24.3.25 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/google/flatbuffers",<br/>&nbsp;&nbsp;"name":&nbsp;"flatbuffers",<br/>&nbsp;&nbsp;"version":&nbsp;"24.3.25",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"google/flatbuffers",<br/>&nbsp;&nbsp;"options":&nbsp;[<br/>&nbsp;&nbsp;&nbsp;&nbsp;"FLATBUFFERS_BUILD_TESTS&nbsp;OFF",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"FLATBUFFERS_INSTALL&nbsp;OFF"<br/>&nbsp;&nbsp;]<br/>}<br/></code></pre> |
| [mimalloc](https://github.com/microsoft/mimalloc) | 2.1.7 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/microsoft/mimalloc",<br/>&nbsp;&nbsp;"name":&nbsp;"mimalloc",<br/>&nbsp;&nbsp;"version":&nbsp;"2.1.7",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"microsoft/mimalloc",<br/>&nbsp;&nbsp;"options":&nbsp;[<br/>&nbsp;&nbsp;&nbsp;&nbsp;"MI_BUILD_TESTS&nbsp;OFF"<br/>&nbsp;&nbsp;],<br/>&nbsp;&nbsp;"git_tag_ignore":&nbsp;[<br/>&nbsp;&nbsp;&nbsp;&nbsp;"win-m4",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"M3",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"show",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"list"<br/>&nbsp;&nbsp;]<br/>}<br/></code></pre> |
| [libsamplerate](https://github.com/libsndfile/libsamplerate) | 0.2.2 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/libsndfile/libsamplerate",<br/>&nbsp;&nbsp;"name":&nbsp;"libsamplerate",<br/>&nbsp;&nbsp;"version":&nbsp;"0.2.2",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"libsndfile/libsamplerate",<br/>&nbsp;&nbsp;"git_tag":&nbsp;"{VERSION}",<br/>&nbsp;&nbsp;"options":&nbsp;[<br/>&nbsp;&nbsp;&nbsp;&nbsp;"BUILD_TESTING&nbsp;OFF",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"LIBSAMPLERATE_EXAMPLES&nbsp;OFF",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"LIBSAMPLERATE_INSTALL&nbsp;OFF",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"LIBSAMPLERATE_INSTALL_PKGCONFIG&nbsp;OFF"<br/>&nbsp;&nbsp;]<br/>}<br/></code></pre> |
| [libsndfile](https://github.com/libsndfile/libsndfile) | 1.2.2 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/libsndfile/libsndfile",<br/>&nbsp;&nbsp;"name":&nbsp;"libsndfile",<br/>&nbsp;&nbsp;"version":&nbsp;"1.2.2",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"libsndfile/libsndfile",<br/>&nbsp;&nbsp;"git_tag":&nbsp;"{VERSION}",<br/>&nbsp;&nbsp;"options":&nbsp;[<br/>&nbsp;&nbsp;&nbsp;&nbsp;"BUILD_TESTING&nbsp;OFF",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"BUILD_PROGRAMS&nbsp;OFF",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"BUILD_EXAMPLES&nbsp;OFF",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"BUILD_REGTEST&nbsp;OFF",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"ENABLE_PACKAGE_CONFIG&nbsp;OFF",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"INSTALL_PKGCONFIG_MODULE&nbsp;OFF"<br/>&nbsp;&nbsp;]<br/>}<br/></code></pre> |
| [srell](https://www.akenotsuki.com/misc/srell/en/) | 4.040 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://www.akenotsuki.com/misc/srell/en/",<br/>&nbsp;&nbsp;"name":&nbsp;"srell",<br/>&nbsp;&nbsp;"version":&nbsp;"4.040",<br/>&nbsp;&nbsp;"url":&nbsp;"https://www.akenotsuki.com/misc/srell/releases/srell4_040.zip",<br/>&nbsp;&nbsp;"download_only":&nbsp;true,<br/>&nbsp;&nbsp;"cmake_commands":&nbsp;[<br/>&nbsp;&nbsp;&nbsp;&nbsp;"add_library(srell&nbsp;INTERFACE)",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"target_include_directories(srell&nbsp;SYSTEM&nbsp;INTERFACE&nbsp;${CPM_CURRENT_SOURCE_DIR})",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"add_library(srell::srell&nbsp;ALIAS&nbsp;srell)"<br/>&nbsp;&nbsp;]<br/>}<br/></code></pre> |
| [linenoise](https://github.com/antirez/linenoise) | 1.0 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/antirez/linenoise",<br/>&nbsp;&nbsp;"name":&nbsp;"linenoise",<br/>&nbsp;&nbsp;"version":&nbsp;"1.0",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"antirez/linenoise",<br/>&nbsp;&nbsp;"git_tag":&nbsp;"{VERSION}",<br/>&nbsp;&nbsp;"download_only":&nbsp;true,<br/>&nbsp;&nbsp;"cmake_commands":&nbsp;[<br/>&nbsp;&nbsp;&nbsp;&nbsp;"add_library(linenoise&nbsp;${CPM_CURRENT_SOURCE_DIR}/linenoise.c)",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"target_include_directories(linenoise&nbsp;PUBLIC&nbsp;${CPM_CURRENT_SOURCE_DIR})"<br/>&nbsp;&nbsp;]<br/>}<br/></code></pre> |
| [cxxopts](https://github.com/jarro2783/cxxopts) | 3.2.1 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/jarro2783/cxxopts",<br/>&nbsp;&nbsp;"name":&nbsp;"cxxopts",<br/>&nbsp;&nbsp;"version":&nbsp;"3.2.1",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"jarro2783/cxxopts",<br/>&nbsp;&nbsp;"options":&nbsp;[<br/>&nbsp;&nbsp;&nbsp;&nbsp;"CXXOPTS_BUILD_EXAMPLES&nbsp;OFF",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"CXXOPTS_BUILD_TESTS&nbsp;OFF"<br/>&nbsp;&nbsp;]<br/>}<br/></code></pre> |
| [cpm_check_version](https://github.com/SGSSGene/cpm_check_version) | 0.1.1 | <pre><code>{<br/>&nbsp;&nbsp;"homepage":&nbsp;"https://github.com/SGSSGene/cpm_check_version",<br/>&nbsp;&nbsp;"name":&nbsp;"cpm_check_version",<br/>&nbsp;&nbsp;"version":&nbsp;"0.1.1",<br/>&nbsp;&nbsp;"github_repository":&nbsp;"SGSSGene/cpm_check_version",<br/>&nbsp;&nbsp;"cmake_commands":&nbsp;[<br/>&nbsp;&nbsp;&nbsp;&nbsp;"enable_testing()",<br/>&nbsp;&nbsp;&nbsp;&nbsp;"cpm_check_version(glad&nbsp;compile-time-regular-expressions&nbsp;PackageProject.cmake&nbsp;bit7z&nbsp;absl&nbsp;reflect&nbsp;benchmark&nbsp;CGraph&nbsp;re2)"<br/>&nbsp;&nbsp;]<br/>}<br/></code></pre> |