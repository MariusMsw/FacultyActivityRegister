#pragma once
/***************************************************************************************************
Object-oriented programming second homework
Mihai Liviu-Marius, Faculty of Mathematics and Computer science
Group 252
***************************************************************************************************/

#include "Person.hpp"
#include "Discipline.hpp"
#include <iostream>
 
class StudentRegister {
public:
	StudentRegister(int group = 0, int year = 0);
	void addStudentToRegister(Person *student);
	Person *findByFullName(std::string lastName, std::string firstName);
	Person *findByCNP(std::string CNP);
	Person *findByEmail(std::string email);
	void removeByCNP(std::string CNP);
	void removeByFullName(std::string firstName, std::string lastName);
	std::vector<Person*> getStudents();
	void addGrade(double grade, Discipline *discipline, std::string lastName, std::string firstName);
	void removeGrade(Discipline *discipline, std::string lastName, std::string firstName);
	void updateGrade(double grade, Discipline *discipline, std::string lastName, std::string firstName);
	long getSize();
	int getGroup();
	int getYear();

private:
	std::vector<Person*> mStudents;
	int mYear;
	int mGroup;
};
