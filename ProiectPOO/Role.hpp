#pragma once
/***************************************************************************************************
Object-oriented programming second homework
Mihai Liviu-Marius, Faculty of Mathematics and Computer science
Group 252
***************************************************************************************************/

#include <iostream>
#include <string>
 
class Role {
public:
	enum RoleType
	{
		STUDENT_ROLE = 1,
		TEACHER_ROLE,
		GUEST_ROLE,
		ADMINISTRATIVE_ROLE
	};
	Role(RoleType type);
	virtual ~Role() {}
	RoleType getType();
private:
	RoleType mType;
};
