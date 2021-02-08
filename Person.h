#pragma once
#ifndef PERSON_H
#define PERSON_H
#include <iostream>

using namespace std;

class Person
{
public:
	Person(); // Default Constructor
	Person(int); //Overloaded Constructor

	//Accessor Function (Getter)
	int getName() const; // Should get name
	int getAge() const;

	//Mutator Function (Setter)
	void setName(int); // Should return name
	void setAge(int);

	//Destructor
	~Person();

	void printInfo() const;

	//Get Age
	double getAge(int) const;

private:
	int name;
	int age;


};

#endif
