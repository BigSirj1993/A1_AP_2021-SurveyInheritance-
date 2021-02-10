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

	// Mutating info in mySurvey
	mySurvey.setName("Nick");
	mySurvey.setAge('27');
	mySurvey.setCollege("George Brown");
	mySurvey.setProgramName("");
	mySurvey.setCurrentSemester(2);

	//Get info again(Getter)
	cout << mySurvey.getName("Nick") << endl;
	cout << mySurvey.getAge('27') << endl;
	cout << mySurvey.getCollege("George Brown") << endl;
	cout << mySurvey.getProgramName("") << endl;
	cout << mySurvey.getCurrentSemester('2') << endl;

	/*for (int i = 0;i < 500; i++)
	{
		if (myStudent)
		{

		
		}

	}*/


	system("pause");
	return 0;


}
