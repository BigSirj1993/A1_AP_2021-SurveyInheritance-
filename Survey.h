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
	Student* studentArray[500];
	

	int totalAgeOfGamingStudents;
	int totalAgeOfNonGamingStudents;
	int numberOfNonGamingStudents;
	int numberOfGamingStudents;
	int totalNumberOfGamingHours;
	int totalNumberOfNonGamingHours;
	int averageNumberOfNonGamingHours;
	int averageNumberOfGamingHours;
	string mostPreferedDevice;
	string mostPreferedService;
	
	void process(int populateSurvey);
	void addStudent(int _AddStudent, Student* newStudent);
	//void addStudent(Student*);
	

};




#endif // _SURVEY_H_

