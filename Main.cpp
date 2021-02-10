#include "GamingStudent.h"
#include "NonGamingStudent.h"
#include "Survey.h"
#include "Student.h"
#include "Person.h"
#include <iostream>


using namespace std;



int main()
{
	// Creating our classes
	Survey mySurvey;
	Student myStudent;
	myStudent.createRandomStudent();
	myStudent.printInfo();

	// Accessing info from our classes
	cout << myStudent.getName() << endl;
	cout << myStudent.getAge() << endl;
	cout << myStudent.getCollege() << endl;
	cout << myStudent.getProgramName() << endl;
	cout << myStudent.getCurrentSemester() << endl;
	
	
	// Mutating info in our myStudent
	myStudent.setName("Nick");
	myStudent.setAge('27');
	myStudent.setCollege("George Brown");
	myStudent.setProgramName("Video Game Programming");
	myStudent.setCurrentSemester('2');


	// Getting info to check if mutation worked

	cout << myStudent.getName() << endl;
	cout << myStudent.getAge() << endl;
	cout << myStudent.getCollege() << endl;
	cout << myStudent.getProgramName() << endl;
	cout << myStudent.getCurrentSemester() << endl;




	for (int i = 0;i < 500; i++)
	{
		mySurvey.addStudent(i);
	}

	for (int i = 0; i < 500; i++)
	{
		//mySurvey.studentArray[i].getIsGamingStudent(); 
		//mySurvey.studentArray[i].getIsNotGamingStudent();
		if (mySurvey.studentArray[i].getIsGamingStudent())
		{
			cout << "Thank you for taking my quiz, Gamer." << endl;
		}
		else if(mySurvey.studentArray[i].getIsNotGamingStudent())
		{
			cout << "Thank you for taking my quiz, Non Gamer." << endl;
		}

	}


	system("pause");
	return 0;


}
