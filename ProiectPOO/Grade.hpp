#pragma once
#include "Discipline.hpp"
 
class Grade {
public:
	void setGrade(float grade);
	float getGrade();
private:
	float mGrade;
	Discipline *mDiscipline;
};