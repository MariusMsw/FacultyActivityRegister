#pragma once
/***************************************************************************************************
Object-oriented programming second homework
Mihai Liviu-Marius, Faculty of Mathematics and Computer science
Group 252
***************************************************************************************************/

#include "Activity.hpp"
#include "Repository.hpp"

class ActivityRepository : public Repository<Activity> {
public:
	Activity* findByLocation(std::string location);
	Activity* findByDescription(std::string description);
	std::vector<Activity*> findByOwner(std::string owner);
};