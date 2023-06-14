#include <py/Game/Board.hpp>

#include <core/Game/Board.hpp>

#include <pybind11/stl.h>

namespace py = pybind11;
using namespace BOJ;

void buildGameBoard(py::module& m)
{
    py::class_<Board>(m, "Board")
        .def(py::init<>())
        .def(py::init<Board::Matrix>())
        .def("at", py::overload_cast<int, int>(&Board::At, py::const_))
        .def("at_by_idx", py::overload_cast<int>(&Board::At, py::const_))
        .def("set_value", py::overload_cast<int, int, int>(&Board::SetValue))
        .def("set_value", py::overload_cast<int, int>(&Board::SetValue))
        .def("get_score", &Board::GetScore)
        .def("update", &Board::Update)
        .def("get_board", &Board::GetBoard, py::return_value_policy::reference);
}
