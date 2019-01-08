#include "DisciplineRepository.hpp"
/***************************************************************************************************
Object-oriented programming second homework
Mihai Liviu-Marius, Faculty of Mathematics and Computer science
Group 252
***************************************************************************************************/

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
