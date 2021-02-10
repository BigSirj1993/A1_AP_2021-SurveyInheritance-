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

	void getName(string);
	void getAge(int);
	void getCollege(string);
	void getProgramName(string);
	void getCurrentSemester(int);
	void getIsGamingStudent(bool nIsGamingStudent);
	void getIsNotGamingStudent(bool nIsNotGamingStudent);

	
	void process();
	void addStudent();
	void setName(string);
	void setAge(int);
	void setCollege(string);
	void setProgramName(string);
	void setCurrentSemester(int);
	void setIsGamingStudent(bool nIsGamingStudent);
	void setIsNotGamingStudent(bool nIsNotGamingStudent);



};




#endif // _SURVEY_H_

