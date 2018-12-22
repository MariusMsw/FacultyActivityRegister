#pragma once

#include <iostream>
#include <vector>
#include <string>
#include "Role.hpp"
  
class TeacherRole : public Role
{
public:
	TeacherRole(std::vector<std::string> courses = {});
	std::vector<std::string> getCourses();
private: 
	std::vector<std::string> mCourses;
};
