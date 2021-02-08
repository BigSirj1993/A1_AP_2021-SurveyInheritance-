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

	NonGamingStudent(int streamingService, int hoursOfNonGameFun);

	//Overloaded Constructor
	NonGamingStudent(int, int);


	//Accessor Function
	int getStreamingService() const;
	int getHoursOfNonGameFun() const;



	//Mutator Function
	void setStreamingService(int);
	void setHoursOfNonGameFun(int);
	

	//Destructor
	~NonGamingStudent();


	int getStreamingService() const; // Should Return College
	int getHoursOfNonGameFun() const; // Should Return Program Name
	

	void printInfo() const; // Should print info of College, Program Name And Semester

private:
	//Member Variables
	
	int streamingService;
	int hoursOfNonGameFun;

};





#endif // !NON_GAMING_STUDENT_H_
