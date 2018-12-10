#include "Activity.hpp"

Activity::Activity(Room *location, Person *owner, std::string description)
{ 
	mLocation = location;
	mOwner = owner;
	mDescription = description;
}

