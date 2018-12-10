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
 
int main()
{ 
	std::vector<Room*> rooms;
	rooms.push_back(new Room("Spiru Haret", 100));
	rooms.push_back(new Room("Dimitrie Pompeiu", 150));
	rooms.push_back(new Room("Laborator 321", 25));

	StudentRole *student1 = new StudentRole(252, "CTI", 7);
	TeacherRole *teacher1 = new TeacherRole({ "POO", "ASD" });
	StudentRole *student2 = new StudentRole(452, "CTI", 6);

	std::vector<Person*> persoane;
	persoane.push_back(new Person("Mihai", "Marius", "1981001340917", "mariusliviu70@yahoo.com"));
	persoane.push_back(new Person("Vlad", "George", "1981002340918","george.vlad@yahoo.com"));

	persoane[0]->addRole(student1);
	persoane[1]->addRole(student2);
	persoane[1]->addRole(teacher1);

	Activity *activitate = new Activity(rooms[1], persoane[1], "Laborator POO");
	system("pause");
	return 0;
}