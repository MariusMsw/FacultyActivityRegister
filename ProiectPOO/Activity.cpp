#include "pch.h"
#include "Activity.hpp"

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

Room * Activity::getLocation()
{
	return mLocation;
}

void Activity::setOwner(Person * owner)
{
	mOwner = owner;
}

Person * Activity::getOwner()
{
	return mOwner;
}

void Activity::setDescription(std::string description)
{
	mDescription = description;
}

std::string Activity::getDescription()
{
	return mDescription;
}

