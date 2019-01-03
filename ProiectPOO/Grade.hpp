#pragma once
#include "Discipline.hpp"
 
class Grade {
public:
	Grade(double grade, Discipline *discipline);
	void setGrade(double grade);
	double getGrade();

	void setDiscipline(Discipline *discipline);
	Discipline *getDiscipline();

private:
	double mGrade;
	Discipline *mDiscipline;
};