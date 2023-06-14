#include <pybind11/pybind11.h>

#include <py/Game/Board.hpp>

PYBIND11_MODULE(pyTheGame, m)
{
    m.doc() = R"pbdoc(814-2 game simulator)pbdoc";

    buildGameBoard(m);
}
