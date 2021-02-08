#pragma once

#ifndef STUDENT_H_
#define STUDNET_H_
#include <iostream>
#include "Person.h"

using namespace std;


class Student : public Person
{
public:
	// Default Constructor
	Student();

	//Overloaded Constructor
	Student(int, int, int);


	//Accessor Function
	int getCollege() const;
	int getProgramName() const;
	int getCurrentSemester() const;
	//int getStreamingService() const;


	//Mutator Function
	void setCollege(int);
	void setProgramName(int);
	void setCurrentSemester(int);
	//void setSteamingService(int);

	//Destructor
	~Student();


	int getCollege() const; // Should Return College
	int getProgramName() const; // Should Return Program Name
	int getCurrentSemeter() const; // Should Return Current Semetest
	//int getStreamingService() const;

	void printInfo() const; // Should print info of College, Program Name And Semester

private:
	//Member Variables
	int college;
	int programName;
	int currentSemester;
	//int streamingService;


};



