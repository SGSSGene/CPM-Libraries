<!-- SPDX-FileCopyrightText: 2024 Simon Gene Gottlieb
     SPDX-License-Identifier: CC0-1.0
-->
# Libraries

<div markdown class="compact_data_table">

| Name                                                                   | Version     | CPM                                                                                                 <br>CMakeTarget                                            <br>extra  |
|:-----------------------------------------------------------------------|-------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
{%
    include-markdown "packages.md"
    start="|"
%}
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
