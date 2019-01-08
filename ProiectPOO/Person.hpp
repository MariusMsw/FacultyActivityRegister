#pragma once

#include <iostream>
#include <vector>
#include <string>
#include "Role.hpp"
 
class Person
{
public:
	Person(std::string FirstName = "", std::string LastName = "", std::string CNP = "", std::string Email = "");
	Person(const Person &person);

	void setFirstName(std::string FirstName);
	void setLastName(std::string LastName);
	void setCNP(std::string CNP);
	void setEmail(std::string Email);

	std::string getFirstName();
	std::string getLastName();
	std::string getEmail();
	std::string getCNP();

	void addRole(Role *role);
	void removeRole(int role);
	Role* displayRole(int role);

	friend std::istream & operator>>(std::istream & stream, Person & person);
	friend std::ostream & operator<<(std::ostream & stream, Person & person);

	const bool isStudent() const;
	const bool isTeacher() const;

	Role *getStudentRole() const;
	Role *getTeacherRole() const;

private:
	
	std::vector < Role* > mRoles;
	std::string mFirstName;
	std::string mLastName;
	std::string mCNP;
	std::string mEmail;
};

