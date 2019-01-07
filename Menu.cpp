#include "Menu.hpp"
#include "StudentRole.hpp"
#include "TeacherRole.hpp"
#include "AdministrativeRole.hpp"
#include "GuestRole.hpp"
#include <string>
bool Menu::checkInput(std::string input)
{
	int inputAsNumber = 0;
	try {
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
	std::cout << "Start Menu\n";
	std::cout << "1. Persons\n 2. Activities\n 3. Disciplines\n 4. StudentRegister\n 5.Repositories\n 6.Exit\n";
	std::string input;

	do{
		std::cout << "Choice: ";
		std::cin >> input;
	} while (!checkInput(input));

	int inputAsInt = std::stoi(input);
	switch (inputAsInt)
	{
	case Type::PERSON:
		system("clear");
		personMenu();
		break;
	case Type::ACTIVITY:
		system("clear");
		activityMenu();
		break;
	case Type::DISCIPLINE:
		system("clear");
		disciplineMenu();
		break;
	case Type::STUDENTREGISTER:
		system("clear");
		studentRegisterMenu();
		break;
	case Type::REPOSITORY:
		system("clear");
		repositoryMenu();
		break;
	case Type::EXIT:
		system("clear");
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
		system("clear");
		addPerson();
		break;
	case DELETE_PERSON:
		system("clear");
		deletePerson();
		break;
	case ADD_ROLE:
	{
		system("clear");
		std::string firstName, lastName;
		std::cout << "first name = ";
		std::cin >> firstName;
		std::cout << "last name = ";
		std::cin >> lastName;
		Person *person;
		try
		{
			person = persons.findByFullName(firstName, lastName);
		}
		catch (std::runtime_error const &e)
		{
			std::cout << e.what() << "\n";
		}

		addRole(person);
		system("clear"); 
		break; }
	case REMOVE_ROLE:
		system("clear");
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
		system("clear");
		addActivity();
		break;
	case DELETE_ACTIVITY:
		system("clear");
		deleteActivity();
		break;
	case RETURN:
		system("clear");
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
		system("clear");
		addDiscipline();
		break;
	case DELETE_DISCIPLINE:
		system("clear");
		deleteDiscipline();
		break;
	case ADD_STUDENT_TO_DISCIPLINE:
		system("clear");
		addStudentToDiscipline();
		break;
	case REMOVE_STUDENT:
		system("clear");
		removeStudentFromDiscipline();
		break;
	case RETURN:
		system("clear");
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
		FIND_STUDENT_IN_REGISTER,
		RETURN
	};

	std::cout << "Student Register Menu\n";
	std::cout << "1.Create student register\n 2.Delete student register \n3. Add student to register \n";
	std::cout<<"4.Remove student\n 5.Add grade\n6. Update grade\n7. Find student\n 8.Return\n";
	std::string input;

	do {
		std::cout << "Choice: ";
		std::cin >> input;
	} while (!checkInput(input));

	int inputAsInt = std::stoi(input);

	switch (inputAsInt)
	{
	case CREATE_STUDENT_REGISTER:
		system("clear");
		createStudentRegister();
		break;
	case DELETE_STUDENT_REGISTER:
		system("clear");
		deleteStudentRegister();
		break;
	case ADD_STUDENT:
		system("clear");
		addStudent();
		break;
	case REMOVE_STUDENT:
		system("clear");
		removeStudent();
		break;
	case ADD_GRADE:
		system("clear");
		addGrade();
		break;
	case UPDATE_GRADE:
		system("clear");
		updateGrade();
		break;
	case FIND_STUDENT_IN_REGISTER:
		system("clear");
		findStudent();
		break;
	case RETURN:
		system("clear");
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
		system("clear");
		searchInRepository();
		break;
	case RETURN:
		system("clear");
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
		system("clear");
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
		system("clear");

	}
	case DELETE_BY_CNP:
	{
		std::string CNP;
		std::cout << "CNP = ";
		std::cin >> CNP;
		Person *person;

		person = persons.findByCNP(CNP);

		persons.remove(person);
		system("clear");
	}
	case RETURN:
		system("clear");
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



