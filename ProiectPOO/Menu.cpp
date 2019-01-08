#include "Menu.hpp"
#include "StudentRole.hpp"
#include "TeacherRole.hpp"
#include "AdministrativeRole.hpp"
#include "GuestRole.hpp"
#include <string>
bool Menu::checkInput(std::string input)
{
	int inputAsNumber = 0;
	try 
	{
		inputAsNumber = std::stoi(input);
	}
	catch (std::invalid_argument)
	{
		return false;
	}
	return true;
}

void Menu::startMenu()
{
	std::cout << "Start Menu\n ";
	std::cout << "1.Persons\n 2.Activities\n 3.Disciplines\n 4.StudentRegister\n 5.Repositories\n 6.Exit\n";
	std::string input;

	do{
		std::cout << "Choice: ";
		std::cin >> input;
	} while (!checkInput(input));

	int inputAsInt = std::stoi(input);
	switch (inputAsInt)
	{
	case Type::PERSON:
		system("cls");
		personMenu();
		break;
	case Type::ACTIVITY:
		system("cls");
		activityMenu();
		break;
	case Type::DISCIPLINE:
		system("cls");
		disciplineMenu();
		break;
	case Type::STUDENTREGISTER:
		system("cls");
		studentRegisterMenu();
		break;
	case Type::REPOSITORY:
		system("cls");
		repositoryMenu();
		break;
	case Type::EXIT:
		system("cls");
		break;
	default:
		std::cout << "Wrong input!";
	}
}

void Menu::personMenu()
{
	enum Type
	{
		ADD_PERSON = 1,
		DELETE_PERSON,
		ADD_ROLE,
		REMOVE_ROLE
	};

	std::cout << " Person Menu\n";
	std::cout << "1.Add Person\n 2.Delete Person\n 3.Add role to a person\n 4.Remove role from a person\n";
	std::string input;

	do
	{
		std::cout << "Choice: ";
		std::cin >> input;
	} while (!checkInput(input));

	int inputAsInt = std::stoi(input);

	switch (inputAsInt)
	{
	case ADD_PERSON:
		system("cls");
		addPerson();
		break;
	case DELETE_PERSON:
		system("cls");
		deletePerson();
		break;
	case ADD_ROLE:
	{
		system("cls");
		std::string firstName, lastName;
		std::cout << "first name = ";
		std::cin >> firstName;
		std::cout << "last name = ";
		std::cin >> lastName;
		Person *person = NULL;
		try
		{
			person = persons.findByFullName(firstName, lastName);
		}
		catch (std::runtime_error const &e)
		{
			std::cout << e.what() << "\n";
		}

		addRole(person);
		system("cls");
		break; }
	case REMOVE_ROLE:
		system("cls");
		removeRole();
	default:
		std::cout << "Wrong input!";
	}
}

void Menu::activityMenu()
{
	enum Type
	{
		ADD_ACTIVITY = 1,
		DELETE_ACTIVITY,
		RETURN
	};

	std::cout << " Activity Menu\n";
	std::cout << "1.Add Activity\n 2.Delete Activity\n 3.Return\n";
	std::string input;

	do
	{
		std::cout << "Choice: ";
		std::cin >> input;
	} while (!checkInput(input));

	int inputAsInt = std::stoi(input);

	switch (inputAsInt)
	{
	case ADD_ACTIVITY:
		system("cls");
		addActivity();
		break;
	case DELETE_ACTIVITY:
		system("cls");
		deleteActivity();
		break;
	case RETURN:
		system("cls");
		break;
	default:
		std::cout << "Wrong input";
	}
}

void Menu::disciplineMenu()
{
	enum Type
	{
		ADD_DISCIPLINE = 1,
		DELETE_DISCIPLINE,
		ADD_STUDENT_TO_DISCIPLINE,
		REMOVE_STUDENT,
		RETURN
	};

	std::cout << " Discipline Menu\n";
	std::cout << "1.Add discipline\n 2.Delete discipline \n3.Add student to discipline \n 4. Remove student\n 5.Return\n";

	std::string input;
	do
	{
		std::cout << "Choice: ";
			std::cin >> input;
	} while (!checkInput(input));

	int inputAsInt = std::stoi(input);
	switch (inputAsInt)
	{
	case ADD_DISCIPLINE:
		system("cls");
		addDiscipline();
		break;
	case DELETE_DISCIPLINE:
		system("cls");
		deleteDiscipline();
		break;
	case ADD_STUDENT_TO_DISCIPLINE:
		system("cls");
		addStudentToDiscipline();
		break;
	case REMOVE_STUDENT:
		system("cls");
		removeStudentFromDiscipline();
		break;
	case RETURN:
		system("cls");
		break;
	default:
		std::cout << "Wrong input!\n";
	}
}

void Menu::studentRegisterMenu()
{
	enum Type
	{
		CREATE_STUDENT_REGISTER = 1,
		DELETE_STUDENT_REGISTER,
		ADD_STUDENT,
		REMOVE_STUDENT,
		ADD_GRADE,
		UPDATE_GRADE,
		RETURN
	};

	std::cout << "Student Register Menu\n";
	std::cout << "1.Create student register\n 2.Delete student register \n3. Add student to register \n";
	std::cout<<"4.Remove student\n 5.Add grade\n6. Update grade\n 7.Return\n";
	std::string input;

	do {
		std::cout << "Choice: ";
		std::cin >> input;
	} while (!checkInput(input));

	int inputAsInt = std::stoi(input);

	switch (inputAsInt)
	{
	case CREATE_STUDENT_REGISTER:
		system("cls");
		createStudentRegister();
		break;
	case DELETE_STUDENT_REGISTER:
		system("cls");
		deleteStudentRegister();
		break;
	case ADD_STUDENT:
		system("cls");
		addStudent();
		break;
	case REMOVE_STUDENT:
		system("cls");
		removeStudent();
		break;
	case ADD_GRADE:
		system("cls");
		addGrade();
		break;
	case UPDATE_GRADE:
		system("cls");
		updateGrade();
		break;
	case RETURN:
		system("cls");
		break;
	default:
		std::cout << "Wrong input!\n";
	}
}

void Menu::repositoryMenu()
{
	enum Type 
	{
		SEARCH_IN_REPOSITORY = 1,
		RETURN
	};

	std::cout << "Repository Menu\n";
	std::cout << "1.Search in repository\n 2.Return\n";
	std::string input;

	do
	{
		std::cout << "Choice:";
		std::cin >> input;
	} while (!checkInput(input));

	int inputAsInt = std::stoi(input);

	switch (inputAsInt)
	{
	case SEARCH_IN_REPOSITORY:
		system("cls");
		searchInRepository();
		break;
	case RETURN:
		system("cls");
		break;
	default:
		std::cout << "Wrong input!\n";
	}
}

void Menu::addPerson()
{
	Person *person = new Person();
	std::cin >> *person;
	persons.add(person);
}

void Menu::addRole(Person *person)
{
	enum Type
	{
		STUDENT_ROLE = 1,
		TEACHER_ROLE,
		ADMINISTRATIVE_ROLE,
		GUEST_ROLE,
		RETURN
	};

	std::cout << "1.Student role\n 2.Teacher role\n 3.Administrative role\n 4.Guest role\n 5.Return\n";

	std::string input;
	do
	{
		std::cout << "Choice: ";
		std::cin >> input;
	} while (!checkInput(input));

	int inputAsInt = std::stoi(input);

	switch (inputAsInt)
	{
	case STUDENT_ROLE:
	{
		int year;
		std::cout << " year = ";
		std::cin >> year;
		int group;
		std::cout << " group = ";
		std::cin >> group;
		std::string specialisation;
		std::cout << " specialisation = ";
		std::cin >> specialisation;
		int nrCourses;
		std::cout << " number of courses = ";
		std::cin >> nrCourses;

		person->addRole(new StudentRole(group, year,specialisation, nrCourses));
	}

	case TEACHER_ROLE:
	{	std::string disciplineAsString;
		std::cout << "discipline teached = ";
		std::cin >> disciplineAsString;
		person->addRole(new TeacherRole(disciplineAsString));
	}

	case ADMINISTRATIVE_ROLE:
	{
		int roomAdministrated;
		std::cout << "room administrated = ";
		std::cin >> roomAdministrated;
		person->addRole(new AdministrativeRole(roomAdministrated));
	}

	case GUEST_ROLE: {
		person->addRole(new GuestRole());
	}

	case RETURN:
		system("cls");
		break;

	default:
		std::cout << "Wrong input!\n";
	}
}

void Menu::deletePerson()
{
	enum Type
	{
		DELETE_BY_FULLNAME = 1,
		DELETE_BY_CNP,
		RETURN
	};

	std::cout << "1.Delete by full name\n 2.Delete by CNP\n 3.Return\n";

	std::string input;

	do
	{
		std::cout << "Choice: ";
		std::cin >> input;
	} while (!checkInput(input));

	int inputAsInt = std::stoi(input);

	switch (inputAsInt)
	{
	case DELETE_BY_FULLNAME:
	{
		std::string firstName, lastName;
		std::cout << "first name = ";
		std::cin >> firstName;
		std::cout << "last name = ";
		std::cin >> lastName;

		Person *person;
	
		person = persons.findByFullName(firstName, lastName);

		persons.remove(person);
		system("cls");

	}
	case DELETE_BY_CNP:
	{
		std::string CNP;
		std::cout << "CNP = ";
		std::cin >> CNP;
		Person *person;

		person = persons.findByCNP(CNP);

		persons.remove(person);
		system("cls");
	}
	case RETURN:
		system("cls");
		break;
	default:
		std::cout << "Wrong input!\n";
	}
}

void Menu::removeRole()
{
	std::string firstName, lastName;
	std::cout << "first name = ";
	std::cin >> firstName;
	std::cout << "last name = ";
	std::cin >> lastName;
	Person *person;

	person = persons.findByFullName(firstName, lastName);
	std::string roleAsString;
	int role = 0;
	std::cout << "\n 1 = student, 2 = teacher, 3 = guest, 4 = administrative \n";
	do
	{
		std::cout << "Role to be removed = ";
		std::cin >> roleAsString;

		if (roleAsString == "student")
		{
			role = 1;
		}
		else if (roleAsString == "teacher")
		{
			role = 2;
		}
		else if (roleAsString == "guest")
		{
			role = 3;
		}
		else if (roleAsString == "administrative")
		{
			role = 4;
		}
		else
		{
			std::cout << "Role invalid!";
			std::cout << "1 = student, 2 = teacher, 3 = guest, 4 = administrative";
		}
	} while (roleAsString != "student" ||
		roleAsString != "teacher" ||
		roleAsString != "guest" ||
		roleAsString != "administrative");
		
	person->removeRole(role);
}

void Menu::addActivity()
{
	std::string activityName;
	std::cout << "activity name = ";
	std::cin >> activityName;
	Person *person;

	std::string firstName, lastName, roomName;
	std::cout << "owner first name= ";
	std::cin >> firstName;
	std::cout << "owner last name= ";
	std::cin >> lastName;

		person = persons.findByFullName(firstName, lastName);

	std::cout << "room name = ";
	std::cin >> roomName;
	Room *room;
		room = rooms.findByName(roomName);

	Activity *activity = new Activity(room, person, activityName);
	activities.add(activity);
}

void Menu::deleteActivity()
{
	std::string activityName;
	Activity *activity;

	std::cout << "name of activity = ";
	std::cin >> activityName;

		activity = activities.findByDescription(activityName);

	activities.remove(activity);
}

void Menu::addDiscipline()
{
	std::string disciplineName, activityName;
	int numberOfActivities;
	std::cout << "discipline name = ";
	std::cin >> disciplineName;
	std::cout << "number of activities = ";
	std::cin >> numberOfActivities;

	std::vector<Activity*> activities;

	Activity *activity;
	for (int i = 0; i < numberOfActivities; i++)
	{
		std::cout << "activity name = ";
		std::cin >> activityName;

		activities.push_back(activity);
	}

	Discipline *discipline = new Discipline(disciplineName, activities);
	disciplines.add(discipline);
}

void Menu::deleteDiscipline()
{
	std::string disciplineName;

	std::cout << "discipline name = ";
	std::cin >> disciplineName;

	Discipline *discipline = NULL;

	disciplines.remove(discipline);
}

void Menu::addStudentToDiscipline()
{
	std::string firstName, lastName, disciplineName;
	Person *student;
	Discipline *discipline;

	std::cout << "student first name = ";
	std::cin >> firstName;
	std::cout << "student last name = ";
	std::cin >> lastName;
	try {
		student = persons.findByFullName(firstName, lastName);
	}
	catch (std::runtime_error const &e) {
		std::cout << e.what() << "\n";
		return;
	}

	if (!student->isStudent())
	{
		return;
	}

	std::cout << "discipline name = ";
	std::cin >> disciplineName;
	try {
		discipline = disciplines.findByName(disciplineName);
	}
	catch (std::runtime_error const &e) {
		std::cout << e.what() << "\n";
		return;
	}
	discipline->addParticipant(student);
}

void Menu::removeStudentFromDiscipline()
{
	std::string firstName, lastName, disciplineName;
	Discipline *discipline;

	std::cout << "discipline name = ";
	std::cin >> disciplineName;

		discipline = disciplines.findByName(disciplineName);

	std::cout << "student first name = ";
	std::cin >> firstName;
	std::cout << "student last name = ";
	std::cin >> lastName;

		discipline->removeParticipantByFullName(firstName, lastName);
}

void Menu::createStudentRegister()
{
	int year;
	int group;
	std::cout << "year = ";
	std::cin >> year;
	std::cout << "group = ";
	std::cin >> group;
	StudentRegister *studentRegister = new StudentRegister(group, year);
	students.add(studentRegister);
}

void Menu::deleteStudentRegister()
{
	int year;
	int group;
	StudentRegister *studentRegister;;

	std::cout << "year = ";
	std::cin >> year;
	std::cout << "group = ";
	std::cin >> group;

		studentRegister = students.findByGroupAndYear(group, year);

	students.remove(studentRegister);
}

void Menu::addStudent()
{
	std::string firstName, lastName;
	int year, group;
	Person *student;
	StudentRegister *studentRegister;

	std::cout << "student first name = ";
	std::cin >> firstName;
	std::cout << "student last name = ";
	std::cin >> lastName;

		student = persons.findByFullName(firstName, lastName);

	std::cout << "year = ";
	std::cin >> year;
	std::cout << "group = ";
	std::cin >> group;

		studentRegister = students.findByGroupAndYear(group, year);

		studentRegister->addStudentToRegister(student);

}

void Menu::removeStudent()
{
	std::string firstName, lastName;
	int group, year;
	StudentRegister *studentRegister;

	std::cout << "year = ";
	std::cin >> year;
	std::cout << "group = ";
	std::cin >> group;

		studentRegister = students.findByGroupAndYear(group, year);

	std::cout << "students first name = ";
	std::cin >> firstName;
	std::cout << "students last name = ";
	std::cin >> lastName;

	studentRegister->removeByFullName(firstName, lastName);
}

void Menu::addGrade()
{
	Discipline *discipline;
	StudentRegister *studentRegister;
	std::string firstName, lastName, disciplineName;
	int group, year;
	double grade;

	std::cout << "year = ";
	std::cin >> year;
	std::cout << "group = ";
	std::cin >> group;

		studentRegister = students.findByGroupAndYear(group, year);

	std::cout << "discipline name = ";
	std::cin >> disciplineName;

		discipline = disciplines.findByName(disciplineName);

	std::cout << "student first name = ";
	std::cin >> firstName;
	std::cout << "student last name = ";
	std::cin >> lastName;

		studentRegister->findByFullName(firstName, lastName);

	std::cout << "grade = ";
	std::cin >> grade;
	studentRegister->addGrade(grade, discipline, firstName, lastName);
}

void Menu::updateGrade()
{
	std::string firstName, lastName, disciplineName;
	int group, year;
	double newGrade;
	Person *student;
	StudentRole *studentRole;
	StudentRegister *studentRegister;

	std::cout << "year = ";
	std::cin >> year;
	std::cout << "group = ";
	std::cin >> group;

		studentRegister = students.findByGroupAndYear(group, year);
	
	std::cout << "student first name = ";
	std::cin >> firstName;
	std::cout << "student last name = ";
	std::cin >> lastName;

		student = studentRegister->findByFullName(firstName, lastName);

	std::cout << "discipline name = ";
	std::cin >> disciplineName;

	std::cout << "new grade = ";
	std::cin >> newGrade;
	Discipline *discipline;

		discipline = disciplines.findByName(disciplineName);

	studentRole = dynamic_cast<StudentRole*>(student->displayRole(1));

		studentRole->updateGrade(newGrade, discipline);
}

void Menu::searchInRepository()
{
	enum Type {
		PERSONS = 1,
		ROOMS,
		ACTIVITIES,
		STUDENT_REGISTER,
		DISCIPLINES,
		RETURN
	};

	std::cout << "1.Persons\n 2.Rooms\n 3.Activities\n 4.StudentRegister\n 5.Discipline\n 6.Return\n";

	std::string input;

	do {
		std::cout << "Choice: ";
		std::cin >> input;
	} while (!checkInput(input));

	int inputAsInt = std::stoi(input);

	switch (inputAsInt)
	{
	case PERSONS:
	{
		std::string firstName, lastName;
		Person *person;

		std::cout << "student first name = ";
		std::cin >> firstName;
		std::cout << "student last name = ";
		std::cin >> lastName;

			person = persons.findByFullName(firstName, lastName);

		std::cout << *person;
		system("cls");
		break;
	}
	case ROOMS:
	{
		std::string roomName;
		Room *room;

		std::cout << "room name = ";
		std::cin >> roomName;

			room = rooms.findByName(roomName);

		std::cout << "Room " << room->getName() << " exists.\n";
	}
	case ACTIVITIES:
	{
		std::string activityName;
		Activity *activity;

		std::cout << "activity name = ";
		std::cin >> activityName;

			activity = activities.findByDescription(activityName);

		std::cout << "Location =  " << activity->getLocation() << "\n";
		std::cout << "Owner = " << activity->getOwner() << "\n";
	}
	case STUDENTREGISTER:
	{
		int group, year;
		StudentRegister *studentRegister;

		std::cout << "year = ";
		std::cin >> year;
		std::cout << "group = ";
		std::cin >> group;

			studentRegister = students.findByGroupAndYear(group, year);

		std::cout << "This register has " << studentRegister->getSize() << " students.\n";
	}
	case DISCIPLINES:
	{
		std::string disciplineName;
		Discipline *discipline;

		std::cout << "discipline name = ";
		std::cin >> disciplineName;

			discipline = disciplines.findByName(disciplineName);
	
		std::cout << "Discipline has " << discipline->getSizeOfActivities() << " activities.\n";
		std::cout << "Discipline has " << discipline->getSizeOfParticipants() << " participants.\n";
	}
	case RETURN:
		system("cls");
		break;
	default:
		std::cout << "Wrong input!\n";
	}
}
