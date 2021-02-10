#include "Student.h"



//Default Constructor
Student::Student()
{
	
	college = "";
	programName = "";
	currentSemester = 0;
}

void Student::createRandomStudent()
{
	setName("Nick");
	setAge(27);
	setCollege("George Brown");
	setProgramName("Video Game Programming");
	setCurrentSemester(2);
}


//Overloaded Constructor
Student::Student(int newCollege, int newprogramName, int newcurrentSemester)
{
	college = newCollege;
	programName = newprogramName;
	currentSemester = newcurrentSemester;
}


//Accessor Function
string Student::getCollege() const
{
	return college;
}

string Student::getProgramName() const
{
	return programName;
}

int Student::getCurrentSemester() const
{
	return currentSemester;
}


//Mutator Function
void Student::setCollege(string newCollege)
{
	college = newCollege;
}

void Student::setProgramName(string newProgramName)
{
	college = newProgramName;
}

void Student::setCurrentSemester(int newcurrentSemester)
{
	currentSemester = newcurrentSemester;
}

void Student::setIsGamingStudent(bool nIsGamingStudent)
{
	isGamingStudent = nIsGamingStudent;
}

void Student::setIsNotGamingStudent(bool nIsNotGamingStudent)
{
	isNotGamingStudent = nIsNotGamingStudent;
}


//Destructor
Student::~Student()
{

}

bool Student::getIsGamingStudent()
{
	if(isGamingStudent == '1')
	return true;
}

bool Student::getIsNotGamingStudent()
{
	if(isNotGamingStudent == '0')
	return false;
}



void Student::printInfo() const
{
	cout << endl << "Name: " << getName() << endl;
	cout << endl << "Age: " << getAge() << endl;
	cout << endl << "Program Name: " << getProgramName() << endl;
	cout << endl << "Current Semester: " << getCurrentSemester() << endl;
}


