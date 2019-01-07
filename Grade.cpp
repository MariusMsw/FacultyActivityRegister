#include "Grade.hpp"

Grade::Grade(double grade, Discipline *discipline)
{
	mGrade = grade;
	mDiscipline = discipline;
}

void Grade::setGrade(double grade)
{
	mGrade = grade;
}

double Grade::getGrade()
{
	return mGrade;
}

void Grade::setDiscipline(Discipline * discipline)
{
	mDiscipline = discipline;
}

Discipline * Grade::getDiscipline()
{
	return mDiscipline;
}
