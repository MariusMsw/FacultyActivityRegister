#pragma once
/***************************************************************************************************
Object-oriented programming second homework
Mihai Liviu-Marius, Faculty of Mathematics and Computer science
Group 252
***************************************************************************************************/

#include "Room.hpp"
#include "Repository.hpp"
 
class RoomRepository : public Repository<Room> {
public:
	RoomRepository();
	Room *findByName(const std::string &name);
	std::vector<Room*> findRoomsOfType(Room::RoomType type);
	std::vector<Room*> findRoomsOfCapacity(int capacity);
};