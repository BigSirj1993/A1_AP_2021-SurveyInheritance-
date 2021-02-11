#pragma once
#ifndef PERSON_H
#define PERSON_H
#include <iostream>

using namespace std;

class Person
{
public:
	Person(); // Default Constructor
	Person(string, int); //Overloaded Constructor

	//Accessor Function (Getter)
	string getName() const; // Should get name
	int getAge() const;

	//Mutator Function (Setter)
	void setName(string); // Should return name
	void setAge(int);

	//Destructor
	~Person();

	void printInfo() const;

	//Get Age
	int getAge(int) const;

private:
	string name;
	int age;


};

#endif
