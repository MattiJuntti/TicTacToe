#include "src/Cell.h"

TicTacToe::Cell::Cell(unsigned x, unsigned y) : selected { false }, index { x, y }
{
    // ...
}

bool TicTacToe::Cell::state() const
{
    return selected;
}

void TicTacToe::Cell::print() const
{
    std::cout << "x = " << std::get<0>(index) << ", "
              << "y = " << std::get<1>(index) << std::endl;
}
