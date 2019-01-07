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

std::string Room::getName()
{
	return mName;
}
 
Room::RoomType Room::getType()
{
	return mType;
}