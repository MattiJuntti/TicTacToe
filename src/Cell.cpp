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
    std::cout << "x = " << index.at(0) << ", " << "y = " << index.at(1) << std::endl;
}

void TicTacToe::Cell::select()
{
    selected = true;
}
