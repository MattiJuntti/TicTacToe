#ifndef CONFIGURATION_H
#define CONFIGURATION_H

namespace TicTacToe
{
    class Configuration {
        const unsigned GRID_WIDTH;
        const unsigned GRID_HEIGHT;
    public:
        Configuration();
        const unsigned GameTable_Width() const;
        const unsigned GameTable_Height() const;
    };
}

#endif // CONFIGURATION_H
