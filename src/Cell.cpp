#include "src/Cell.h"

TicTacToe::Cell::Cell(unsigned x, unsigned y) : isSelected { false }, indices { x, y }
{
}

bool TicTacToe::Cell::state() const
{
    return isSelected;
}

void TicTacToe::Cell::print() const
{
    std::cout << "x = " << indices.at(0) << ", " << "y = " << indices.at(1) << std::endl;
}

void TicTacToe::Cell::select()
{
    isSelected = true;
}

std::vector <unsigned> TicTacToe::Cell::index() const
{
    return indices;
}

std::ostream& operator<<(std::ostream& out, const TicTacToe::Cell& cell)
{
    return out << "(" << cell.index().at(0) << "," << cell.index().at(1) << ") : " << cell.state();
}
