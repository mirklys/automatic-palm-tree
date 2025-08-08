#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "palm_library.hpp"

namespace py = pybind11;

PYBIND11_MODULE(neuro, m) {
    m.doc() = "A C++ library for palm tree information";

    m.def("get_palm_trees", &get_palm_trees, py::arg("count") = 3, "A function that returns a list of palm trees.");
}