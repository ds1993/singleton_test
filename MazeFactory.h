#ifndef MAZEFACTORY_H
#define MAZEFACTORY_H

#include <memory>
#include "Maze.h"
#include "Wall.h"
#include "Room.h"
#include "Door.h"

class MazeFactory {
public:
    virtual ~MazeFactory();

    virtual std::shared_ptr<Maze> MakeMaze();
    virtual std::shared_ptr<Wall> MakeWall();
    virtual std::shared_ptr<Room> MakeRoom(int);
    virtual std::shared_ptr<Door> MakeDoor(std::shared_ptr<Room> r1, std::shared_ptr<Room> r2);

    static std::shared_ptr<MazeFactory> Instance();
protected:
    MazeFactory();
private:
    static std::shared_ptr<MazeFactory> _instance;
};

#endif
