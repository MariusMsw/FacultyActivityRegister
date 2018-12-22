#include "RoomRepository.hpp"

RoomRepository::RoomRepository()
{
}

Room * RoomRepository::findByName(const std::string & name)
{
	for (unsigned int i = 0; i < mEntities.size(); i++)
		if (mEntities[i]->getName() == name)
			return mEntities[i];
	return NULL;
}
 
std::vector<Room*> RoomRepository::findRoomsOfType(Room::RoomType type)
{
	std::vector<Room*> roomsFound;
	for (unsigned int i = 0; i < mEntities.size(); i++)
		if (mEntities[i]->getType() == type)
			roomsFound.push_back(mEntities[i]);
	return roomsFound;
}

std::vector<Room*> RoomRepository::findRoomsOfCapacity(int capacity)
{
	std::vector<Room*> roomsFound;
	for (unsigned int i = 0; i < mEntities.size(); i++)
		if (mEntities[i]->getCapacity() == capacity)
			roomsFound.push_back(mEntities[i]);
	return roomsFound;
}
