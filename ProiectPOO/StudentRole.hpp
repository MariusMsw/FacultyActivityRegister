#pragma once

#include "Role.hpp"
#include "Grade.hpp"
#include "Discipline.hpp"
#include <iostream>
#include <vector>
#include <string>
 
class StudentRole : public Role
{
public: 
	StudentRole(int group = 0, std::string specialisation = "", int nrCourses = 0);
	void setGroup(int group);
	int getGroup();
	  
	void setSpecialisation(std::string specialisation);
	std::string getSpecialisation();

	void setNrCourses(int nrCourses);
	int getNrCourses();

	std::vector<Discipline*> getDisciplines();
	void addDiscipline(Discipline* discipline);

private:
	int mGroup;
	std::string mSpecialisation;
	std::vector <Grade*> mGrades;
	std::vector <Discipline*> mDisciplines;
	int mNrCourses;
};

