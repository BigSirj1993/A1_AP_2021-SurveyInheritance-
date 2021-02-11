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
Student::Student(string newCollege, string newprogramName, int newcurrentSemester)
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
	programName = newProgramName;
}

void Student::setCurrentSemester(int newcurrentSemester)
{
	currentSemester = newcurrentSemester;
}

void Student::setIsGamingStudent(bool nIsGamingStudent)
{
	isGamingStudent = nIsGamingStudent;
	isNotGamingStudent = !isGamingStudent;
}

void Student::setIsNotGamingStudent(bool nIsNotGamingStudent)
{
	isNotGamingStudent = nIsNotGamingStudent;
	isGamingStudent = !isNotGamingStudent;
}


//Destructor
Student::~Student()
{

}

bool Student::getIsGamingStudent()
{
	//if(isGamingStudent == true)
	//return true;
	return isGamingStudent;
}

bool Student::getIsNotGamingStudent()
{
	//if(isNotGamingStudent == true)
	//return true;
	return isNotGamingStudent;
}


