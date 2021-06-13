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
        cell_grid.push_back(row);
    }
}

void TicTacToe::GameTable::translateToSelection (const unsigned& x, const unsigned& y)
{
    cell_grid.at(x - 1).at(y - 1).select();
}

void TicTacToe::GameTable::printCells() const
{
    for (const auto& row : cell_grid)
    {
        for (const auto& cell : row)
        {
            std::cout << cell << " ";
        }
        std::cout << "\n";
    }
}
