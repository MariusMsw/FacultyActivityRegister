#pragma once

#include "Repository.hpp"
#include "Discipline.hpp"

class DisciplineRepository : public Repository<Discipline> {
public:
	Discipline *findByName(std::string name);
};
