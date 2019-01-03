#pragma once
 
#include "Activity.hpp"
#include "Repository.hpp"

class ActivityRepository : public Repository<Activity> {
public:
	Activity* findByLocation(std::string location);
	Activity* findByDescription(std::string description);
	std::vector<Activity*> findByOwner(std::string owner);
};