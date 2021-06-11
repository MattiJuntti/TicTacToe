#include "src/GameTable.h"

TicTacToe::GameTable::GameTable(const TicTacToe::Configuration& config)
{
    for (unsigned i = 0; i < config.GameTable_Height(); i++)
    {
        std::vector<TicTacToe::Cell> row;
        for (unsigned j = 0; j < config.GameTable_Width(); j++)
        {
            row.push_back(TicTacToe::Cell{i,j});
        }
        cells.push_back(row);
    }
}
