#pragma once

#include "Person.hpp"
#include "Repository.hpp"
#include <string>
#include <vector>
 
class PersonRepository : public Repository<Person> {
public:
	PersonRepository();
	Person *findByFullName(std::string &firstName, std::string &lastName);
	Person *findByCNP(std::string cnp);
	Person *findByEmail(std::string email);
	std::vector<Person*> findByRole(Role *role);
};