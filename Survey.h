#pragma once
#define SURVEY_H_
#ifdef SURVEY_H_
#include <iostream>
#include <string>
#include "Student.h"

using namespace std;


class Survey
{
public:
	//Defualt Constructor
	Survey();
	Student studentArray[500];
	


	int numberOfNonGamingStudents;
	int numberOfGamingStudents;
	int totalNumberOfGamingHours;
	int averageNumberOfGamingHours;
	string mostPreferedService;
	
	void process();
	void addStudent(int _AddStudent);
	
	

};
