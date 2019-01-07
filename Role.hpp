#pragma once

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
