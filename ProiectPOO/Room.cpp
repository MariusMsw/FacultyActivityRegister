#include "Room.hpp"

Room::Room(std::string name, int capacity)
{
	mName = name;
	mCapacity = capacity; 
}

int Room::getCapacity()
{ 
	return mCapacity;
}

Room::RoomType Room::getType()
{
	return mType;
}