#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include "Employment.h"

class Employee
{
private:
	std::string name;
	int birthYear;
	Employment* position;
	Employee();

public:
	Employee(std::string name, int birthYear, Employment* position);
	Employee(const Employee& other);
	void operator=(const Employee& other);

	//toString function which is used to construct a string for printing
	virtual std::string toString();

	//Get/Set
	virtual void setName(std::string name);
	virtual std::string getName();

	virtual void setBirthYear(int birthYear);
	virtual int getBirthYear();

	virtual void setPosition(Employment* position);
	virtual Employment* getPosition();

	//Destructor
	virtual ~Employee();
};

#endif
