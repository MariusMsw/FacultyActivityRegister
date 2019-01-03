#include "ActivityRepository.hpp"

Activity * ActivityRepository::findByLocation(std::string location)
{
	for (unsigned int i = 0; i < mEntities.size(); i++)
	{
		if (mEntities[i]->getLocation() == location)
			return mEntities[i];
	}

	return NULL;
}

Activity * ActivityRepository::findByDescription(std::string description)
{
	for (unsigned int i = 0; i < mEntities.size(); i++) {
		if (mEntities[i]->getDescription() == description)
			return mEntities[i];
	}

	return NULL;
}

std::vector<Activity*> ActivityRepository::findByOwner(std::string owner)
{
	std::vector<Activity*> activities = { 0 };
	for (unsigned int i = 0; i < mEntities.size(); i++) {
		if (mEntities[i]->getOwner() == owner)
			activities.push_back(mEntities[i]);
	}
	
	return activities;
}
