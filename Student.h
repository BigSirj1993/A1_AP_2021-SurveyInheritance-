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

	virtual void createRandomStudent();

	//Overloaded Constructor
	Student(string, string, int);


	

	//Accessor Function
	//string getCollege() const;
	//string getProgramName() const;
	//int getCurrentSemester() const;
	//int getStreamingService() const;


	//Mutator Function
	void setCollege(string);
	void setProgramName(string);
	void setCurrentSemester(int);
	void setIsGamingStudent(bool nIsGamingStudent);
	void setIsNotGamingStudent(bool nIsNotGamingStudent);

	//void setSteamingService(int);

	//Destructor
	~Student();


	//Accessor Function
	bool getIsGamingStudent();
	bool getIsNotGamingStudent();
	string getCollege() const; // Should Return College
	string getProgramName() const; // Should Return Program Name
	int getCurrentSemester() const; // Should Return Current Semetest
	//int getStreamingService() const;

	virtual void printInfo() const; // Should print info of College, Program Name And Semester

private:
	//Member Variables
	string college;
	string programName;
	int currentSemester;
	bool isGamingStudent;
	bool isNotGamingStudent;
	//int streamingService;


};




