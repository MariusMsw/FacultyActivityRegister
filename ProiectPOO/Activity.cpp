#include "pch.h"
#include "Activity.hpp"
/***************************************************************************************************
Object-oriented programming second homework
Mihai Liviu-Marius, Faculty of Mathematics and Computer science
Group 252
***************************************************************************************************/

Activity::Activity(Room *location, Person *owner, std::string description)
{ 
	mLocation = location;
	mOwner = owner;
	mDescription = description;
}
 
void Activity::setLocation(Room * location)
{
	mLocation = location;
}

std::string Activity::getLocation()
{
	return this->mLocation->getName();
}


void Activity::setOwner(Person * owner)
{
	mOwner = owner;
}

std::string Activity::getOwner()
{
	return this->mOwner->getLastName();
}

void Activity::setDescription(std::string description)
{
	mDescription = description;
}

std::string Activity::getDescription()
{
	return this->mDescription;
}

