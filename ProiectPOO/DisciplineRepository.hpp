#pragma once
/***************************************************************************************************
Object-oriented programming second homework
Mihai Liviu-Marius, Faculty of Mathematics and Computer science
Group 252
***************************************************************************************************/

#include "Repository.hpp"
#include "Discipline.hpp"

class DisciplineRepository : public Repository<Discipline> {
public:
	Discipline *findByName(std::string name);
};
