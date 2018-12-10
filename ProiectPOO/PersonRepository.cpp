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
	for (int i = 0; i < mEntities.size(); i++)
		if (mEntities[i]->getCNP() == cnp)
			return mEntities[i];
	return NULL;
}
