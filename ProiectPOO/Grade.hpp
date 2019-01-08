#pragma once
#include "Discipline.hpp"
/***************************************************************************************************
Object-oriented programming second homework
Mihai Liviu-Marius, Faculty of Mathematics and Computer science
Group 252
***************************************************************************************************/

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