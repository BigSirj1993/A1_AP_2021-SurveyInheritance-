#include "Survey.h"
#include <string>
#include <iostream>

using namespace std;

Survey::Survey()
{
	numberOfNonGamingStudents = 0;
	numberOfGamingStudents = 0;
	totalNumberOfGamingHours = 0;
	averageNumberOfGamingHours = 0;
	mostPreferedService = "";

};

void Survey::process() 
{
	for (int i = 0;i < 500; i++) // the for loop takes one variable [i] starts at 0, then goes to 499
	{
		studentArray[i].printInfo();
	}
								
								// Next Step: creating a list of 500 students without having to type 500 students and putting it in my main.cpp
	
}

void Survey::addStudent()
{

}

