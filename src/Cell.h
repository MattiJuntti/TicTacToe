#ifndef CELL_H
#define CELL_H
#include <iostream>
#include <vector>

namespace TicTacToe
{
    class Cell {
        bool isSelected;
        const std::vector <unsigned> indices;
    public:
        Cell(unsigned x, unsigned y);
        bool state() const;
        void print() const;
        void select();
        std::vector <unsigned> index() const;
    };
}

std::ostream& operator<<(std::ostream&, const TicTacToe::Cell&);

#endif // CELL_H
