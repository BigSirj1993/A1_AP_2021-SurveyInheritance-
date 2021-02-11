#include "Survey.h"
#include <string>
#include <iostream>
#include "GamingStudent.h"
#include "NonGamingStudent.h"

using namespace std;

Survey::Survey()
{
	numberOfNonGamingStudents = 0;
	numberOfGamingStudents = 0;
	totalNumberOfGamingHours = 0;
	averageNumberOfGamingHours = 0;
	totalNumberOfNonGamingHours = 0;
	averageNumberOfNonGamingHours = 0;
	totalAgeOfGamingStudents = 0;
	totalAgeOfNonGamingStudents = 0;
	mostPreferedDevice = "";
	mostPreferedService = "";

};

void Survey::process() 
{
	int numberOfStudentWhoPlayXbox = 0;
	int numberOfStudentWhoPlayPlayStation = 0;
	int numberOfStudentWhoWatchNexflix = 0;
	int numberOfStudentWhoWatchFunimation = 0;
	for (int i = 0;i < 500; i++) // the for loop takes one variable [i] starts at 0, then goes to 499
	{
		//studentArray[i]->printInfo();
		if (studentArray[i]->getIsGamingStudent())
		{
			numberOfGamingStudents++;
			totalNumberOfGamingHours += static_cast<GamingStudent*>(studentArray[i])->getHoursOfGameFun(); 
			string gamingDevice = static_cast<GamingStudent*>(studentArray[i])->getGamingDevice();
			if (gamingDevice == "Xbox")
			{
				numberOfStudentWhoPlayXbox++;
			}
			else if (gamingDevice == "PlayStation")
			{
				numberOfStudentWhoPlayPlayStation++;
			}
			
		}
		else if(studentArray[i]->getIsNotGamingStudent())
		{
			numberOfNonGamingStudents++;
			totalNumberOfNonGamingHours += static_cast<NonGamingStudent*>(studentArray[i])->getHoursOfNonGameFun();
			string streamingService = static_cast<NonGamingStudent*>(studentArray[i])->getStreamingService();
		}

	}
	if(numberOfNonGamingStudents != 0)
	averageNumberOfNonGamingHours = totalNumberOfNonGamingHours / numberOfNonGamingStudents;
	if (numberOfGamingStudents != 0)
		averageNumberOfGamingHours = totalNumberOfGamingHours / numberOfGamingStudents;
	if (numberOfStudentWhoPlayPlayStation > numberOfStudentWhoPlayXbox)
	{
		mostPreferedDevice = "PlayStation";
	}
	else if (numberOfStudentWhoPlayXbox > numberOfStudentWhoPlayPlayStation)
	{
		mostPreferedDevice = "Xbox";
	}
	else
	{
		mostPreferedDevice = "It's a tie";
	}
	if (numberOfStudentWhoWatchNexflix > numberOfStudentWhoWatchFunimation)
	{
		mostPreferedService = "Nextflix";
	}
	else if (numberOfStudentWhoWatchFunimation > numberOfStudentWhoWatchNexflix)
	{
		mostPreferedService = "Funimation";
	}
	else
	{
		mostPreferedService = "Its a tie";
	}
	cout << "Number of Non Gaming Students: " << numberOfNonGamingStudents << endl;
	cout << "Number of Gaming Students: " << numberOfGamingStudents << endl;
	cout << "Total Number of Non Gaming Hours: " << totalNumberOfNonGamingHours << endl;
	cout << "Total Number of Gaming Hours: " << totalNumberOfGamingHours << endl;
	cout << "Average Number of Gaming Hours: " << averageNumberOfGamingHours << endl;
	cout << "Average Number of Non Gaming Hours: " << averageNumberOfNonGamingHours << endl;
	cout << "Total Age of Gaming Students: " << totalAgeOfGamingStudents << endl;
	cout << "Total Age of Non Gaming Students: " << totalAgeOfNonGamingStudents << endl;
	cout << "Most Prefered Gaming Device: " << mostPreferedDevice << endl;
	cout << "Most Prefered Streaming Service: " <<mostPreferedService << endl;
	
}

/*void Survey::addStudent(int _AddStudent)
{
	Student classroom;
	classroom.createRandomStudent();
	studentArray[_AddStudent] = classroom;
}*/

void Survey::addStudent(int _AddStudent, Student* newStudent)
{
	studentArray[_AddStudent] = newStudent;
}
