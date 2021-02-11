#include "Person.h"
#include <iostream>
#include <string>


// Default Constructor
Person::Person()
{
	name = "";
	age = 0;
}

// Overloaded Constructor (Name)
Person::Person(string newName, int newAge)
{
	age = newAge;
	name = newName;
}


//Accessor Function
string Person::getName() const
{
	return name;
}

int Person::getAge() const
{
	return age;
}

//Mutator Function
void Person::setName(string newName)
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







void Person::printInfo() const
{
	cout  << "Name: " << getName() << endl;
	cout  << "Age: " << getAge() << endl;
}
