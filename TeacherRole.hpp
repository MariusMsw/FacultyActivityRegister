#pragma once

#include <iostream>
#include <vector>
#include <string>
#include "Role.hpp"
#include "Discipline.hpp"
  
class TeacherRole : public Role
{
public:
	TeacherRole(std::string discipline);
	TeacherRole(std::vector<Discipline*> courses);
	std::vector<Discipline *> getCourses();
	void addDiscipline(Discipline *discipline);
	void removeDiscipline(Discipline *discipline);
	bool hasDiscipline(Discipline *discipline);
private: 
	std::string mDiscipline;
	std::vector<Discipline *> mCourses;
};
