#pragma once
#include "Repository.hpp"
#include "StudentRegister.hpp"

class StudentRepository : public Repository<StudentRegister> {
public:
	StudentRegister *findByGroup(int group);
	Person* findByFullName(std::string lastName, std::string firstName);
	Person* findByCNP(std::string CNP);
	Person* findByEmail(std::string email);
};