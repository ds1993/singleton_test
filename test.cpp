#include "MazeFactory.h"
#include "MazeGame.h"

int main()
{
    std::shared_ptr<MazeFactory> factory = MazeFactory::Instance();;
    MazeGame maze;
    maze.CreateMaze(factory);
}
