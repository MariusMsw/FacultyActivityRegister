#include "StudentRepository.hpp"

StudentRegister *StudentRepository::findByGroupAndYear(int group, int year)
{
	for (unsigned int i = 0; i < mEntities.size(); i++)
	{
		if (mEntities[i]->getGroup() == group && mEntities[i]->getYear() == year)
			return mEntities[i];
	}
	return nullptr;
}

Person *StudentRepository::findByFullName(std::string lastName, std::string firstName)
{
	Person* person = NULL;
	for (unsigned int i = 0; i < mEntities.size(); i++)
	{
		person = mEntities[i]->searchByFullName(lastName, firstName);
			return person;
	}
	return nullptr;
}

Person * StudentRepository::findByCNP(std::string CNP)
{
	Person *person = NULL;
	for (unsigned int i = 0; i < mEntities.size(); i++)
	{
			person = mEntities[i]->searchByCNP(CNP);
			return person;
	}
	return nullptr;
}

Person * StudentRepository::findByEmail(std::string email)
{
	Person *person = NULL;
	for (unsigned int i = 0; i < mEntities.size(); i++)
	{
		person = mEntities[i]->searchByEmail(email);
		return person;
	}
	return nullptr;
}
