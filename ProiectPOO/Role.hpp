#pragma once

#include <iostream>
#include <string>
 
class Role
{ 
public: 

	enum RoleType {
		STUDENT_ROLE,
		TEACHER_ROLE,
		ADMINISTRATIVE_ROLE,
		GUEST_ROLE
	};

	Role(RoleType type);
	RoleType getType();

protected:
	RoleType mType;
};

