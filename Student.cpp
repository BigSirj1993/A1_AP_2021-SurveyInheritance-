#include "Student.h"


//Default Constructor
Student::Student()
{
	
	college = 0;
	programName = 0;
	currentSemester = 0;
}


//Overloaded Constructor
Student::Student(int newCollege, int newprogramName, int newcurrentSemester)
{
	college = newCollege;
	programName = newprogramName;
	currentSemester = newcurrentSemester;
}


//Accessor Function
int Student::getCollege() const
{
	return college;
}

int Student::getProgramName() const
{
	return programName;
}

int Student::getCurrentSemester() const
{
	return currentSemester;
}


//Mutator Function
void Student::setCollege(int newCollege)
{
	college = newCollege;
}

void Student::setProgramName(int newProgramName)
{
	college = newProgramName;
}

void Student::setCurrentSemester(int newcurrentSemester)
{
	currentSemester = newcurrentSemester;
}


//Destructor
Student::~Student()
{

}




int Student::getCollege() const
{
	return college;
}



int Student::getProgramName() const
{
	return programName;

} 


int Student::getCurrentSemester() const
{
	return currentSemester;
}

void Student::printInfo() const
{
	cout << endl << "Name: " << getName() << endl;
	cout << endl << "Age: " << getAge() << endl;
	cout << endl << "Program Name: " << getProgramName() << endl;
	cout << endl << "Current Semester: " << getCurrentSemester() << endl;
}
