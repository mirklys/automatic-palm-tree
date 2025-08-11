#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "palm_library.hpp"
#include "signal_processor.hpp"

namespace py = pybind11;

PYBIND11_MODULE(neuro, m) {
    m.doc() = "A C++ library for palm tree information";

    m.def("get_palm_trees", &get_palm_trees, py::arg("count") = 3, "A function that returns a list of palm trees.");

    py::class_<SignalProcessor>(m, "SignalProcessor")
        .def(py::init<const std::string&>())
        .def("set_threshold", &SignalProcessor::set_threshold)
        .def("find_peaks", &SignalProcessor::find_peaks)
        .def_readwrite("name", &SignalProcessor::name);
}