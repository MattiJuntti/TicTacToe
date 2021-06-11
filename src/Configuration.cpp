#include "src/Configuration.h"

TicTacToe::Configuration::Configuration() : GRID_WIDTH {3}, GRID_HEIGHT {3}
{
}

const unsigned TicTacToe::Configuration::GameTable_Width() const
{
    return GRID_WIDTH;
}

const unsigned TicTacToe::Configuration::GameTable_Height() const
{
    return GRID_HEIGHT;
}
