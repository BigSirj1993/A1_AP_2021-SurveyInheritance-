#include "GamingStudent.h"
#include <iostream>

using namespace std;






GamingStudent::GamingStudent()
{
	setIsGamingStudent(true);
	setGamingDevice("");
	setHoursOfGameFun(24);
}


//Overloaded Constructor
GamingStudent::GamingStudent(string newGamingDevice, int newHoursOfGameFun)
{
	setIsGamingStudent(true);
	setGamingDevice(newGamingDevice) ;
	setHoursOfGameFun(newHoursOfGameFun);
}

void GamingStudent::createRandomStudent()
{

	setName("");
	setAge(18 + rand() % 27);
	setCollege("");
	setProgramName("");
	setCurrentSemester(1 + rand() % 6);
	setHoursOfGameFun(24);
	int randomService = rand() % 2;
	switch (randomService)
	{
	case 0:
		setGamingDevice("PlayStation");
		break;
	case 1:
		setGamingDevice("Xbox");
		break;
	}

}





//Mutator Function
void GamingStudent::setGamingDevice(string newGamingDevice)
{
	gamingDevice = newGamingDevice;
}

void GamingStudent::setHoursOfGameFun(int newHoursOfGameFun)
{
	hoursOfGameFun = newHoursOfGameFun;
}




//Destructor
GamingStudent::~GamingStudent()
{

}


string GamingStudent::getGamingDevice() const
{
	return gamingDevice;
}



int GamingStudent::getHoursOfGameFun() const
{
	return hoursOfGameFun;

}



void GamingStudent::printInfo() const
{
	cout <<  "Name: " << getName() << endl;
	cout <<  "Age: " << getAge() << endl;
	cout <<  "College: " << getCollege() << endl;
	cout <<  "Program Name: " << getProgramName() << endl;
	cout <<  "Current Semester: " << getHoursOfGameFun() << endl;
	

}

