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
		int choice;
		//mySurvey.addStudent(i);
		choice = rand() % 2;
		if (choice == 0)
		{
			GamingStudent* Selection = new GamingStudent;
			Selection->createRandomStudent();
			mySurvey.addStudent(i, Selection);
			

		}
		else if(choice == 1)
		{
			NonGamingStudent* Selection = new NonGamingStudent;
			Selection->createRandomStudent();
			mySurvey.addStudent(i, Selection);
			
		}
		

	}

	mySurvey.process();

	/*for (int i = 0; i < 500; i++)
	{
		cout << "Select if your a gaming student or a non gaming student: " << endl;
		
		//mySurvey.studentArray[i].getIsGamingStudent(); 
		//mySurvey.studentArray[i].getIsNotGamingStudent();
		if (mySurvey.studentArray[i].getIsGamingStudent())
		{
			static_cast<GamingStudent*>(&studentArray[i])->setHoursOfGameFun(srand);
			cout << "Thank you for taking my quiz, Gamer." << endl;
		}
		else if(mySurvey.studentArray[i].getIsNotGamingStudent())
		{
			cout << "Thank you for taking my quiz, Non Gamer." << endl;
		}

	}*/


	system("pause");
	return 0;


}
