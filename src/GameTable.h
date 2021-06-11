#ifndef GAMETABLE_H
#define GAMETABLE_H
#include <vector>
#include "src/Configuration.h"
#include "src/Cell.h"

namespace TicTacToe
{
    class GameTable {
            std::vector < std::vector<TicTacToe::Cell> > cells;
        public:
            GameTable(const TicTacToe::Configuration&);
    };
}

#endif // GAMETABLE_H
