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

	GamingStudent(int gamingDevice, int hoursOfGameFun);

	//Overloaded Constructor
	GamingStudent(int, int);


	//Accessor Function
	int getGamingDevice() const;
	int getHoursOfGameFun() const;



	//Mutator Function
	void setGamingDevice(int);
	void setHoursOfGameFun(int);


	//Destructor
	~GamingStudent();


	int getGamingDevice() const; // Should Return College
	int getHoursOfGameFun() const; // Should Return Program Name


	void printInfo() const; // Should print info of College, Program Name And Semester

private:
	//Member Variables

	int gamingDevice;
	int hoursOfGameFun;

};

#endif
