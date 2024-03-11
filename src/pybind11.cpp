// SPDX-FileCopyrightText: 2024 Simon Gene Gottlieb
// SPDX-License-Identifier: CC0-1.0

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <filesystem>

namespace py = pybind11;

PYBIND11_MODULE(somerandompymod, mod) {
    //provides conversion from std::string to std::filesystem::path
    py::class_<std::filesystem::path>(mod, "Path")
        .def(py::init<std::string>());
    py::implicitly_convertible<std::string, std::filesystem::path>();
}
