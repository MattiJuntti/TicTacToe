#ifndef GAMETABLE_H
#define GAMETABLE_H
#include <vector>
#include <iostream>
#include "src/Configuration.h"
#include "src/Cell.h"

namespace TicTacToe
{
    class GameTable {
            std::vector < std::vector<TicTacToe::Cell> > cell_grid;
        public:
            GameTable(const TicTacToe::Configuration&);
            void translateToSelection(const unsigned&, const unsigned&);
            void printCells() const;
    };
}

#endif // GAMETABLE_H
