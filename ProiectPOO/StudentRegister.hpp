#pragma once
#include "StudentRole.hpp"
#include <iostream>
 
class StudentRegister {
public:
	void addStudentToRegister(Person *student);
private:
	std::vector<Person*> mStudents;
};
