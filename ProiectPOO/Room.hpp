#pragma once

#include <iostream>
#include <vector>
#include <string>

class Room
{
public:
	enum RoomType {AMPHITHEATER_ROOM,
	LABORATORY_ROOM,
	SEMINARY_ROOM};
	 
	Room(std::string name, int capacity);
	int getCapacity();
	RoomType getType();

protected:
	std::string mName;
	int mCapacity;
	RoomType mType;
};

