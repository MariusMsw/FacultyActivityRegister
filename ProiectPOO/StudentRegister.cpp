#include "StudentRegister.hpp"
#include "StudentRole.hpp"

StudentRegister::StudentRegister(int group, int year)
{
	mGroup = group;
	mYear = year;
}

void StudentRegister::addStudentToRegister(Person * student)
{
	mStudents.push_back(student);
}

Person * StudentRegister::findByFullName(std::string lastName, std::string firstName)
{	
	std::vector<Person*>::iterator i;
	for (i = mStudents.begin(); i != mStudents.end(); i++)
	{
		if ((*i)->getLastName() == lastName && (*i)->getFirstName() == firstName)
			return *i;
	}
	return nullptr;
}

Person * StudentRegister::findByCNP(std::string CNP)
{
	std::vector<Person*>::iterator i;
	for (i = mStudents.begin(); i != mStudents.end(); i++)
	{
		if ((*i)->getCNP() == CNP)
			return *i;
	}
	return nullptr;
}

Person * StudentRegister::findByEmail(std::string email)
{
	std::vector<Person*>::iterator i;
	for (i = mStudents.begin(); i != mStudents.end(); i++)
	{
		if ((*i)->getEmail() == email)
			return *i;
	}
	return nullptr;
}

void StudentRegister::removeByCNP(std::string CNP)
{
	std::vector<Person*>::iterator i;
	for (i = mStudents.begin(); i != mStudents.end(); i++)
	{
		if ((*i)->getCNP() == CNP)
		{
			mStudents.erase(i);
			break;
		}
	}
}

void StudentRegister::removeByFullName(std::string firstName, std::string lastName)
{
	std::vector<Person*>::iterator i;
	for (i = mStudents.begin(); i != mStudents.end(); i++)
	{
		if ((*i)->getFirstName() == firstName && (*i)->getLastName() == lastName)
		{
			mStudents.erase(i);
			break;
		}
	}
}

std::vector<Person*> StudentRegister::getStudents()
{
	return mStudents;
}

void StudentRegister::addGrade(double grade, Discipline *discipline, std::string lastName, std::string firstName)
{
	std::vector<Person*>::iterator i;
	StudentRole *student = NULL;
	for (i = mStudents.begin(); i != mStudents.end(); i++)
	{
		if ((*i)->getLastName() == lastName && (*i)->getFirstName() == firstName)
		{
			student = dynamic_cast<StudentRole*>((*i)->displayRole(1));
			break;
		}
	}
	student->addGrade(grade, discipline);
}

void StudentRegister::removeGrade(Discipline *discipline, std::string lastName, std::string firstName)
{
	std::vector<Person*>::iterator i;
	StudentRole *student = NULL;
	for (i = mStudents.begin(); i != mStudents.end(); i++)
	{
		if ((*i)->getLastName() == lastName && (*i)->getFirstName() == firstName)
		{
			student = dynamic_cast<StudentRole*>((*i)->displayRole(1));
			break;
		}
	}

	student->removeGrade(discipline);
}

void StudentRegister::updateGrade(double grade, Discipline *discipline, std::string lastName, std::string firstName)
{	
	std::vector<Person*>::iterator i;
	StudentRole *student = NULL;
	for (i = mStudents.begin(); i != mStudents.end(); i++)
	{
		if ((*i)->getLastName() == lastName && (*i)->getFirstName() == firstName)
		{
			student = dynamic_cast<StudentRole*>((*i)->displayRole(1));
			break;
		}
	}
	student->updateGrade(grade, discipline);
}

long StudentRegister::getSize()
{
	return mStudents.size();
}

int StudentRegister::getGroup()
{
	return mGroup;
}

int StudentRegister::getYear()
{
	return mYear;
}
