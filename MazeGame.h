#ifndef MAZEGAME_H
#define MAZEGAME_H

#include <memory>
#include "MazeFactory.h"

class MazeGame {
public:
    MazeGame();
    ~MazeGame();

    std::shared_ptr<Maze> CreateMaze(std::shared_ptr<MazeFactory> factory);
};

#endif
