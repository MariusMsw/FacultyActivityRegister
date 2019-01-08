#pragma once
/***************************************************************************************************
Object-oriented programming second homework
Mihai Liviu-Marius, Faculty of Mathematics and Computer science
Group 252
***************************************************************************************************/

#include "Repository.hpp"
#include "StudentRegister.hpp"

class StudentRepository : public Repository<StudentRegister> {
public:
	StudentRegister *findByGroupAndYear(int group, int year);
	Person* findByFullName(std::string lastName, std::string firstName);
	Person* findByCNP(std::string CNP);
	Person* findByEmail(std::string email);
};