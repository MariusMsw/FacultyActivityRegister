/***************************************************************************************************
Object-oriented programming second homework
Author: Mihai Liviu-Marius
***************************************************************************************************/

#include <iostream>
#include <vector>
#include "Person.hpp"
#include "Room.hpp"
#include "Activity.hpp"
#include "Role.hpp"
#include "Person.hpp"
#include "PersonRepository.hpp"
#include "StudentRole.hpp"
#include "TeacherRole.hpp"

int main()
{
	std::vector<Room*> rooms;
	rooms.push_back(new Room("Spiru Haret", 100));
	rooms.push_back(new Room("Dimitrie Pompeiu", 150));
	rooms.push_back(new Room("Laborator 321", 25));

	StudentRole *student1 = new StudentRole(252, 2, "CTI", 7);
	StudentRole *student2 = new StudentRole(452, 4, "CTI", 6);

	std::vector<Person*> persoane;
	persoane.push_back(new Person("Mihai", "Marius", "565615", "mariusliviu70@yahoo.com"));
	persoane.push_back(new Person("Vlad", "George", "115615615","george.vlad@yahoo.com"));

	persoane[0]->addRole(student1);
	persoane[1]->addRole(student2);

	Activity *activitate = new Activity(rooms[1], persoane[1], "Laborator POO");

	PersonRepository personRepository;

	personRepository.add(new Person("Mihai", "Marius", "19856153951617", "mariusliviu70@yahoo.com"));
	
	system("pause");
	return 0;
}
