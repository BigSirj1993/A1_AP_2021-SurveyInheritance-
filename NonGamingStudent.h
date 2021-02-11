#pragma once

#ifndef NON_GAMING_STUDENT_H_
#define NON_GAMING_STUDENT_H_
#include <iostream>
#include "Student.h"


class NonGamingStudent : public Student
{
public:
	// Default Constructor
	NonGamingStudent();

	//Overloaded Constructor
	NonGamingStudent(string streamingService, int hoursOfNonGameFun);

	virtual void createRandomStudent();


	
	

	//Mutator Function
	void setStreamingService(string);
	void setHoursOfNonGameFun(int);
	

	//Destructor
	~NonGamingStudent();


	string getStreamingService() const; // Should Return Streaming Service
	int getHoursOfNonGameFun() const; // Should Return Program Name
	

	void printInfo() const; // Should print info of College, Program Name And Semester

private:
	//Member Variables
	
	string streamingService;
	int hoursOfNonGameFun;

};



