#include "TeacherRole.hpp"

TeacherRole::TeacherRole(std::vector<std::string> courses) : Role(TEACHER_ROLE),
mCourses(courses)
{
}
std::vector<std::string> TeacherRole::getCourses()
{ 
	return mCourses;
}
  