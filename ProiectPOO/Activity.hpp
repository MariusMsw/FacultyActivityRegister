#pragma once

#include <iostream>
#include <vector>
#include <string> 
#include "Room.hpp"
#include "Person.hpp"
 
class Activity
{
public:
	Activity(Room *location, Person *owner, std::string description);

private:
	Room *mLocation;
	Person *mOwner;
	std::string mDescription;
};

