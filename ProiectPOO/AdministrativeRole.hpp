#pragma once
 
#include "Role.hpp"
#include "Room.hpp"
#include <iostream>
#include <vector>
#include <string>

class AdministrativeRole : public Role 
{
public:
	AdministrativeRole();
	AdministrativeRole(std::vector<Room*> rooms);
	AdministrativeRole(Room* roomName);
	Room* getRoom(std::string roomName);
	std::vector<Room*> getAllRooms();
	void addRoom(Room* roomName);
	void removeRoom(std::string roomName);
private:
	std::vector<Room*> mRooms;
};

