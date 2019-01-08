#pragma once
/***************************************************************************************************
Object-oriented programming second homework
Mihai Liviu-Marius, Faculty of Mathematics and Computer science
Group 252
***************************************************************************************************/

#include "Activity.hpp"

class Discipline {
public:
	Discipline(std::string name);
	Discipline(std::string name, Activity *activity);
	Discipline(std::string name, std::vector<Activity*> activities);

	void setName(std::string name);
	std::string getName();
	int getSizeOfActivities();
	int getSizeOfParticipants();
	Activity *getActivity(std::string name);
	std::vector<Activity*> getActivities();

	void setActivities(std::vector<Activity*> activities);

	void addActivity(Activity *activity);
	void addActivities(std::vector<Activity*> activities);

	void removeActivity(std::string name);

	void addParticipant(Person *person);
	void removeParticipantByFullName(std::string lastName, std::string firstName);
	void removeParticipantByCNP(std::string CNP);

private:
	std::string mName;
	std::vector <Activity*> mActivities;
	std::vector<Person*> mParticipants;
};