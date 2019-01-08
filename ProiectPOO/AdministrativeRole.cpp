#include "AdministrativeRole.hpp"
/***************************************************************************************************
Object-oriented programming second homework
Mihai Liviu-Marius, Faculty of Mathematics and Computer science
Group 252
***************************************************************************************************/


AdministrativeRole::AdministrativeRole()
	:Role(Role::ADMINISTRATIVE_ROLE)
{}

AdministrativeRole::AdministrativeRole(int room) : Role(Role::ADMINISTRATIVE_ROLE)
{
	mRoom = room;
}

AdministrativeRole::AdministrativeRole(std::vector<Room*> rooms)
	: Role(Role::ADMINISTRATIVE_ROLE)
{
	mRooms = rooms;
}

AdministrativeRole::AdministrativeRole(Room* roomName)
	: Role(Role::ADMINISTRATIVE_ROLE)
{
	mRooms.push_back(roomName);
}

Room* AdministrativeRole::getRoom(std::string roomName) {
	std::vector<Room*>::iterator it;
	for (it = mRooms.begin(); it != mRooms.end(); it++) {
		if ((*it)->getName() == roomName)
			return *it;
	}
	throw std::runtime_error("Room not found!");
}

std::vector<Room*> AdministrativeRole::getAllRooms() {
	return mRooms;
}

void AdministrativeRole::addRoom(Room* roomName) {
	mRooms.push_back(roomName);
}

void AdministrativeRole::removeRoom(std::string roomName)
{
	std::vector<Room*>::iterator i;
	for (i = mRooms.begin(); i != mRooms.end(); i++) {
		if ((*i)->getName() == roomName) {
			mRooms.erase(i);
			break;
		}
	}
}