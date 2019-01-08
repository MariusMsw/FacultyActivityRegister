#pragma once

#include "PersonRepository.hpp"
#include "RoomRepository.hpp"
#include "ActivityRepository.hpp"
#include "StudentRepository.hpp"
#include "DisciplineRepository.hpp"

class Menu {
public:
	enum Type {
		PERSON = 1,
		ACTIVITY,
		DISCIPLINE,
		STUDENTREGISTER,
		REPOSITORY,
		EXIT
	};

	bool checkInput(std::string input);

	void startMenu();
	void personMenu();
	void activityMenu();
	void disciplineMenu();
	void studentRegisterMenu();
	void repositoryMenu();

	void addPerson();
	void addRole(Person *person);
	void deletePerson();
	void removeRole();

	void addActivity();
	void deleteActivity();

	void addDiscipline();
	void deleteDiscipline();
	void addStudentToDiscipline();
	void removeStudentFromDiscipline();

	void createStudentRegister();
	void deleteStudentRegister();
	void addStudent();
	void removeStudent();
	void addGrade();
	void updateGrade();

	void searchInRepository();

private:
	PersonRepository persons;
	RoomRepository rooms;
	ActivityRepository activities;
	StudentRepository students;
	DisciplineRepository disciplines;
};
