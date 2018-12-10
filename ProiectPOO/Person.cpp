#include "Person.hpp"

Person::Person(std::string FirstName, std::string LastName, std::string CNP, std::string Email)
{
	mFirstName = FirstName;
	mLastName = LastName;
	mCNP = CNP;
	mEmail = Email; 
}
 
Person::Person(const Person & person)
{
	mCNP = person.mCNP;
	mFirstName = person.mFirstName;
	mLastName = person.mLastName;
	mEmail = person.mEmail;
}

void Person::setFirstName(std::string FirstName)
{
	mFirstName = FirstName;
}

void Person::setLastName(std::string LastName)
{
	mLastName = LastName;
}

void Person::setCNP(std::string CNP)
{
	mCNP = CNP;
}

void Person::setEmail(std::string Email)
{
	mEmail = Email;
}

std::string Person::getFirstName()
{
	return mFirstName;
}

std::string Person::getLastName()
{
	return mLastName;
}

std::string Person::getEmail()
{
	return mEmail;
}

std::string Person::getCNP()
{
	return mCNP;
}

void Person::addRole(Role *role)
{
	mRoles.push_back(role);
}

const bool Person::isStudent() const
{
	for (unsigned int i = 0; i < mRoles.size(); i++)
	{
		if (mRoles[i]->getType() == Role::STUDENT_ROLE)
			return true;
	}
	return false;
}

const bool Person::isTeacher() const
{
	for (unsigned int i = 0; i < mRoles.size(); i++)
	{
		if (mRoles[i]->getType() == Role::TEACHER_ROLE)
			return true;
	}
	return false;
}

Role * Person::getStudentRole() const
{
	for (unsigned int i = 0; i < mRoles.size(); i++)
	{
		if (mRoles[i]->getType() == Role::STUDENT_ROLE)
			return mRoles[i];
	}
	return NULL;
}

Role * Person::getTeacherRole() const
{
	for (unsigned int i = 0; i < mRoles.size(); i++)
	{
		if (mRoles[i]->getType() == Role::TEACHER_ROLE)
			return mRoles[i];
	}
	return NULL;
}

std::istream & operator>>(std::istream & stream, const Person & person) 
{
	stream >> person.mFirstName >> person.mLastName >> person.mEmail >> person.mCNP;
	return stream;
}

std::ostream & operator<<(std::ostream & stream, const Person & person)
{
	stream << person.mFirstName << "\n" << person.mLastName << "\n" << person.mEmail << "\n" << person.mCNP << "\n";
	return stream;
}