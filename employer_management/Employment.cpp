#include "Employment.h"
#include <string>
#include <iostream>

using namespace std;

Employment::Employment()
{
	typeName = "Default type";
	isManager = false;
	wage = 0;
}

Employment::Employment(string typeName, bool isManager, int wage)
{
	this->typeName = typeName;
	this->isManager = isManager;
	this->wage = wage;
}

string Employment::toString()
{
	string result;

	result = "Employment: " + typeName + "\nSalaray: ";

	if (getWageType() == 0)
	{
		result = result + to_string(wage) + " / month";
	}
	else
	{
		result = result + to_string(wage) + " / hour";
	}

	if (isManager == true)
	{
		result = result + "\nManager: Yes";
	}
	else
	{
		result = result + "\nManager: No";
	}

	return result;
}

void Employment::setWage(int wage)
{
	if (wage >= 0)
	{
		this->wage = wage;
	}

}

int Employment::getWage()
{
	return wage;
}

void Employment::setTypeName(string typeName)
{
	this->typeName = typeName;
}

string Employment::getTypeName()
{
	return typeName;
}

void Employment::setIsManager(bool isManager)
{
	this->isManager = isManager;
}

bool Employment::getIsManager()
{
	return isManager;
}

Employment::~Employment()
{
	//Does nothing
}

Employment::Employment(const Employment& other)
{
	this->typeName = other.typeName;
	this->isManager = other.isManager;
	this->wage = other.wage;
}

void Employment::operator=(const Employment& other)
{
	typeName = other.typeName;
	isManager = other.isManager;
	wage = other.wage;
}