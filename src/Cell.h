#ifndef CELL_H
#define CELL_H
#include <utility>

namespace TicTacToe
{
    class Cell {
        bool selected;
        const std::pair<unsigned, unsigned> index;
    public:
        Cell(unsigned x, unsigned y);
        bool state() const;
    };
}

#endif // CELL_H
