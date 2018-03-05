#include "MazeGame.h"

MazeGame::MazeGame()
{
}

MazeGame::~MazeGame()
{
}

std::shared_ptr<Maze> MazeGame::CreateMaze(std::shared_ptr<MazeFactory> factory)
{
    std::shared_ptr<Maze> aMaze = factory->MakeMaze();
    std::shared_ptr<Room> r1 = factory->MakeRoom(1);
    std::shared_ptr<Room> r2 = factory->MakeRoom(2);
    std::shared_ptr<Door> aDoor = factory->MakeDoor(r1, r2);

    aMaze->AddRoom(r1);
    aMaze->AddRoom(r2);

    r1->SetSide(North, factory->MakeWall());
    r1->SetSide(East, aDoor);
    r1->SetSide(South, factory->MakeWall());
    r1->SetSide(West, factory->MakeWall());
    r2->SetSide(North, factory->MakeWall());
    r2->SetSide(East, factory->MakeWall());
    r2->SetSide(South, factory->MakeWall());
    r2->SetSide(West, aDoor);

    return aMaze;
}