#include "Employee.h"
#include "Employment.h"
#include <string>

using namespace std;

Employee::Employee()
{
	this->name = "DefaultName";
	this->birthYear = 0;
	this->position = nullptr;
}

Employee::Employee(string name, int birthYear, Employment* position)
{
	this->name = name;
	this->birthYear = birthYear;
	this->position = position;
}

void Employee::setName(string name)
{
	this->name = name;
}

string Employee::getName()
{
	return name;
}

void Employee::setBirthYear(int birthYear)
{
	this->birthYear = birthYear;
}

int Employee::getBirthYear()
{
	return birthYear;
}

void Employee::setPosition(Employment* position)
{
	this->position = position;
}

Employment* Employee::getPosition()
{
	return position;
}

string Employee::toString()
{
	string result;

	result = "Name: " + name + "\nBirthyear: " + to_string(birthYear) + "\n";

	return result + position->toString();
}


Employee::Employee(const Employee& other) : position(other.position)
{
	this->name = other.name;
	this->birthYear = other.birthYear;
}

void Employee::operator=(const Employee& other)
{
	if (position == nullptr)
	{
		position = other.position;
	}
	else
	{
		*position = *other.position;
	}

	this->name = other.name;
	this->birthYear = other.birthYear;
}

Employee::~Employee()
{
	delete position;
}