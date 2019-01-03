#include "StudentRole.hpp"

StudentRole::StudentRole(int group, int year, std::string specialisation, int nrCourses) : Role(STUDENT_ROLE),
mGroup(group),
mYear(year),
mSpecialisation(specialisation),
mNrCourses(nrCourses)
{

}
 
void StudentRole::setGroup(int group)
{
	mGroup = group;
}
  
int StudentRole::getGroup()
{
	return mGroup;
}

void StudentRole::setYear(int year)
{
	mYear = year;
}

int StudentRole::getYear()
{
	return mYear;
}

void StudentRole::setSpecialisation(std::string specialisation)
{
	mSpecialisation = specialisation;
}

std::string StudentRole::getSpecialisation()
{
	return mSpecialisation;
}

void StudentRole::setNrCourses(int nrCourses)
{
	mNrCourses = nrCourses;
}

int StudentRole::getNrCourses()
{
	return mNrCourses;
}

double StudentRole::getGradeByDiscipline(Discipline *discipline)
{
	std::vector<Grade*>::iterator i;
	for (i = mGrades.begin(); i != mGrades.end(); i++)
	{
		if ((*i)->getDiscipline() == discipline)
			return (*i)->getGrade();
	}

	return 0;
}

void StudentRole::addGrade(Grade *grade)
{
	mGrades.push_back(grade);
}

void StudentRole::addGrade(double grade, Discipline * discipline)
{
	mGrades.push_back(new Grade(grade, discipline));
}

void StudentRole::removeGrade(Discipline * discipline)
{
	std::vector<Grade*>::iterator i;
	for (i = mGrades.begin(); i != mGrades.end(); i++)
	{
		if ((*i)->getDiscipline() == discipline)
		{
			mGrades.erase(i);
			break;
		}
	}
}

void StudentRole::updateGrade(double grade, Discipline *discipline)
{
	std::vector<Grade*>::iterator i;
	for (i = mGrades.begin(); i != mGrades.end(); i++)
	{
		if ((*i)->getDiscipline() == discipline)
		{
			(*i)->setGrade(grade);
			break;
		}
	}
}

std::vector<Discipline*> StudentRole::getDisciplines()
{
	return mDisciplines;
}

void StudentRole::addDiscipline(Discipline *discipline)
{
	mDisciplines.push_back(discipline);
}
