#include "DisciplineRepository.hpp"

Discipline *DisciplineRepository::findByName(std::string name)
{
		std::vector<Discipline*>::iterator i;
		for (i = mEntities.begin(); i != mEntities.end(); i++)
		{
			if ((*i)->getName() == name)
				return *i;
		}
		return nullptr;
}
