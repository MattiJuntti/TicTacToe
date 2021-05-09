#include "src/Cell.h"

TicTacToe::Cell::Cell(unsigned x, unsigned y) : selected { false }, index { x, y }
{
    // ...
}

bool TicTacToe::Cell::state() const
{
    return selected;
}
