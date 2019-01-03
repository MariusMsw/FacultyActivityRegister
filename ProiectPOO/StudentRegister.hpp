#pragma once
#include "Person.hpp"
#include "Discipline.hpp"
#include <iostream>
 
class StudentRegister {
public:
	StudentRegister(int group = 0, int year = 0);
	void addStudentToRegister(Person *student);
	Person *searchByFullName(std::string lastName, std::string firstName);
	Person *searchByCNP(std::string CNP);
	Person *searchByEmail(std::string email);
	void removeByCNP(std::string CNP);
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
