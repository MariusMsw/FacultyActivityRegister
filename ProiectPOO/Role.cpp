/***************************************************************************************************
Object-oriented programming second homework
Mihai Liviu-Marius, Faculty of Mathematics and Computer science
Group 252
***************************************************************************************************/

#include "Role.hpp"

Role::Role(RoleType type)
	:mType(type)
{
} 

Role::RoleType Role::getType()
{ 
	return mType;
}
 