#include "Discipline.hpp"

Discipline::Discipline(std::string name)
{
	mName = name;
}

Discipline::Discipline(std::string name, Activity * activity)
{
	mName = name;
	mActivities.push_back(activity);
}

Discipline::Discipline(std::string name, std::vector<Activity*> activities)
{
	mName = name;
	mActivities = activities;
}

void Discipline::setName(std::string name)
{
	mName = name;
}

std::string Discipline::getName()
{
	return mName;
}

Activity * Discipline::getActivity(std::string name)
{
	for (unsigned int i = 0; i < mActivities.size(); i++)
	{
		if (mActivities[i]->getDescription() == name)
			return mActivities[i];
	}

	return nullptr;
}

std::vector<Activity*> Discipline::getActivities()
{
	return mActivities;
}

void Discipline::setActivities(std::vector<Activity*> activities)
{
	mActivities = activities;
}

void Discipline::addActivity(Activity * activity)
{
	mActivities.push_back(activity);
}

void Discipline::addActivities(std::vector<Activity*> activities)
{
	mActivities = activities;
}

void Discipline::removeActivity(std::string name)
{
	std::vector<Activity*>::iterator i;
	for (i = mActivities.begin(); i != mActivities.end(); i++)
	{
		if ((*i)->getDescription() == name)
		{
			mActivities.erase(i);
			break;
		}
	}
}

void Discipline::addParticipant(Person * person)
{
	mParticipants.push_back(person);
}

void Discipline::removeParticipantByFullName(std::string lastName, std::string firstName)
{
	std::vector<Person*>::iterator i;
	for (i = mParticipants.begin(); i != mParticipants.end(); i++)
	{
		if ((*i)->getLastName() == lastName && (*i)->getFirstName() == firstName)
		{
			mParticipants.erase(i);
			break;
		}
	}
}

void Discipline::removeParticipantByCNP(std::string CNP)
{
	std::vector<Person*>::iterator i;
	for (i = mParticipants.begin(); i != mParticipants.end(); i++)
	{
		if ((*i)->getCNP() == CNP)
		{
			mParticipants.erase(i);
			break;
		}
	}
}
 