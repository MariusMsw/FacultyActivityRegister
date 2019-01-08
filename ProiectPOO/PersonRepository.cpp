/***************************************************************************************************
Object-oriented programming second homework
Mihai Liviu-Marius, Faculty of Mathematics and Computer science
Group 252
***************************************************************************************************/

#include "PersonRepository.hpp"

PersonRepository::PersonRepository()
{
}

Person * PersonRepository::findByFullName(std::string &firstName, std::string &lastName)
{
	std::vector<Person*>::iterator i;
	for (i = mEntities.begin(); i < mEntities.end(); i++)
	{
		if ((*i)->getLastName() == lastName && (*i)->getFirstName() == firstName)
			return *i;
	}
	return NULL;
}
  
Person * PersonRepository::findByCNP(std::string cnp)
{
	for (unsigned int i = 0; i < mEntities.size(); i++)
		if (mEntities[i]->getCNP() == cnp)
			return mEntities[i];
	return NULL;
}

Person * PersonRepository::findByEmail(std::string email)
{
	for (unsigned int i = 0; i < mEntities.size(); i++)
		if (mEntities[i]->getEmail() == email)
			return mEntities[i];
	return NULL;
}

std::vector<Person*> PersonRepository::findByRole(Role *role)
{
	std::vector<Person*> persons = { 0 };
	for (unsigned int i = 0; i < mEntities.size(); i++)
	{
			if (mEntities[i]->getStudentRole() == role || mEntities[i]->getTeacherRole() == role)
				persons.push_back(mEntities[i]);
	}
		return persons;
}
