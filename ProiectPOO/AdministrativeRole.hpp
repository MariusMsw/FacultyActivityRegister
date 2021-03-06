#pragma once
/***************************************************************************************************
Object-oriented programming second homework
Mihai Liviu-Marius, Faculty of Mathematics and Computer science
Group 252
***************************************************************************************************/

#include "Role.hpp"
#include "Room.hpp"
#include <iostream>
#include <vector>
#include <string>

class AdministrativeRole : public Role 
{
public:
	AdministrativeRole();
	AdministrativeRole(int room);
	AdministrativeRole(std::vector<Room*> rooms);
	AdministrativeRole(Room* roomName);
	Room* getRoom(std::string roomName);
	std::vector<Room*> getAllRooms();
	void addRoom(Room* roomName);
	void removeRoom(std::string roomName);
private:
	int mRoom;
	std::vector<Room*> mRooms;
};

