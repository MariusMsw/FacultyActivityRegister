#pragma once
 
#include "Activity.hpp"

class Discipline {
public:
	void setName(std::string name);
	std::string getName();
private:
	std::string mName;
	std::vector <Activity*> mActivities;

};