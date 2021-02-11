#pragma once

#ifndef GAMING_STUDENT_H_
#define GAMING_STUDENT_H_
#include <iostream>
#include "Student.h"



class GamingStudent : public Student
{
public:
	// Default Constructor
	GamingStudent();

	GamingStudent(string gamingDevice, int hoursOfGameFun);

	virtual void createRandomStudent();

	//Overloaded Constructor
	GamingStudent(int,int);


	//Mutator Function
	void setGamingDevice(string);
	void setHoursOfGameFun(int);


	//Destructor
	~GamingStudent();


	string getGamingDevice() const; // Should Return College
	int getHoursOfGameFun() const; // Should Return Program Name


	virtual void printInfo() const; // Should print info of College, Program Name And Semester

private:
	//Member Variables

	string gamingDevice;
	int hoursOfGameFun;

};

#endif
