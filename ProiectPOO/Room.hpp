#pragma once
/***************************************************************************************************
Object-oriented programming second homework
Mihai Liviu-Marius, Faculty of Mathematics and Computer science
Group 252
***************************************************************************************************/

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
	std::string getName();
	RoomType getType();

protected:
	std::string mName;
	int mCapacity;
	RoomType mType;
};

