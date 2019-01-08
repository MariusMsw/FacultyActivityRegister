/***************************************************************************************************
Object-oriented programming second homework
Mihai Liviu-Marius, Faculty of Mathematics and Computer science
Group 252
***************************************************************************************************/

#include "TeacherRole.hpp"

TeacherRole::TeacherRole(std::string discipline) : Role(Role::TEACHER_ROLE)
{
	mDiscipline = discipline;
}

TeacherRole::TeacherRole(std::vector<Discipline*> courses) : Role(Role::TEACHER_ROLE)
{
	mCourses = courses;
}

std::vector<Discipline*> TeacherRole::getCourses()
{
	return mCourses;
}

void TeacherRole::addDiscipline(Discipline * discipline)
{
	for (unsigned int i = 0; i < mCourses.size(); i++)
	{
		if (mCourses[i] == discipline)
			return;
	}

	mCourses.push_back(discipline);
}

void TeacherRole::removeDiscipline(Discipline * discipline)
{
	for (unsigned int i = 0; i < mCourses.size(); i++)
	{
		if (mCourses[i] == discipline)
		{
			mCourses.erase(mCourses.begin() + i);
			return;
		}
	}
}

bool TeacherRole::hasDiscipline(Discipline * discipline)
{
	for (unsigned int i = 0; i < mCourses.size(); i++)
	{
		if (mCourses[i] == discipline) {
			return true;
		}
	}

	return false;
}
