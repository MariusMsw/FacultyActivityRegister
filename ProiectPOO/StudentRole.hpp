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
	StudentRole(int group = 0, int year = 0, std::string specialisation = "", int nrCourses = 0);
	void setGroup(int group);
	int getGroup();

	void setYear(int year);
	int getYear();

	void setSpecialisation(std::string specialisation);
	std::string getSpecialisation();

	void setNrCourses(int nrCourses);
	int getNrCourses();

	double getGradeByDiscipline(Discipline *discipline);
	void addGrade(Grade *grade);
	void addGrade(double grade, Discipline *discipline);
	void removeGrade(Discipline *discipline);
	void updateGrade(double grade, Discipline *discipline);

	std::vector<Discipline*> getDisciplines();
	void addDiscipline(Discipline* discipline);

private:
	int mGroup;
	int mYear;
	std::string mSpecialisation;
	std::vector <Grade*> mGrades;
	std::vector <Discipline*> mDisciplines;
	int mNrCourses;
};

