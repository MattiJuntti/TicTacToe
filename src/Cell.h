#ifndef CELL_H
#define CELL_H
#include <iostream>
#include <vector>

namespace TicTacToe
{
    class Cell {
        bool selected;
        const std::vector <unsigned> index;
    public:
        Cell(unsigned x, unsigned y);
        bool state() const;
        void print() const;
        void select();
    };
}

#endif // CELL_H
