#include "Person.h"
#include <iostream>
#include <string>


// Default Constructor
Person::Person()
{
	age = 0;
}

// Overloaded Constructor (Name)
Person::Person(int newName)
{
	name = newName;
}

Person::Person(int newAge)
{
	age = newAge;
}

//Accessor Function
int Person::getName() const
{
	return name;
}

int Person::getAge() const
{
	return age;
}

//Mutator Function
void Person::setName(int newName)
{
	name = newName;
}

void Person::setAge(int newAge)
{
	age = newAge;
}



//Destructor
Person::~Person()
{

}

int Person::getName() const
{
	return name;
}



int Person::getAge() const
{
	return age;

}


void Person::printInfo() const
{
	cout << endl << "Thank you for taking this survey! Please enter the following: " << endl;
	cout << endl << "Name: " << getName() << endl;
	cout << endl << "Age: " << getAge() << endl;
	
}
