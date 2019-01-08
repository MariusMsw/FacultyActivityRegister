#pragma once
#include "Repository.hpp"
#include "StudentRegister.hpp"

class StudentRepository : public Repository<StudentRegister> {
public:
	StudentRegister *findByGroupAndYear(int group, int year);
	Person* findByFullName(std::string lastName, std::string firstName);
	Person* findByCNP(std::string CNP);
	Person* findByEmail(std::string email);
};