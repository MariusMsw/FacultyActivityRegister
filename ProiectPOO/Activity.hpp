#pragma once
/***************************************************************************************************
Object-oriented programming second homework
Mihai Liviu-Marius, Faculty of Mathematics and Computer science
Group 252
***************************************************************************************************/

#include <iostream>
#include <vector>
#include <string> 
#include "Room.hpp"
#include "Person.hpp"
 
class Activity
{
public:
	Activity(Room *location, Person *owner, std::string description);

	void setLocation(Room *location);
	std::string getLocation();

	void setOwner(Person *owner);
	std::string getOwner();

	void setDescription(std::string description);
	std::string getDescription();

private:
	Room *mLocation;
	Person *mOwner;
	std::string mDescription;
};

