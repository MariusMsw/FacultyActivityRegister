#include "StudentRole.hpp"

StudentRole::StudentRole(int group, std::string specialisation, int nrCourses) : Role(STUDENT_ROLE),
mGroup(group),
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
