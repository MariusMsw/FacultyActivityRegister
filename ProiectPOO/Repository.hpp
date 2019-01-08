#pragma once

#include <iostream>
#include <string>
#include <vector>
 
template <class Entity>
class Repository {
public:
	Repository();
	~Repository();
	void add(Entity *entity);
	void remove(Entity *entity);
protected:
	std::vector <Entity*> mEntities;
};

template<class Entity>
inline Repository<Entity>::Repository()
{
}

template<class Entity>
inline Repository<Entity>::~Repository()
{
	for (unsigned int i = 0; i < mEntities.size(); i++)
		delete mEntities[i];
}

template<class Entity>
inline void Repository<Entity>::add(Entity *entity)
{
	mEntities.push_back(entity);
}

template<class Entity>
inline void Repository<Entity>::remove(Entity *entity)
{
	typename std::vector<Entity*>::iterator i;
	for (i = mEntities.begin(); i != mEntities.end(); i++)
	{
		if (*i == entity)
		{
			mEntities.erase(i);
			break;
		}
	}
}
