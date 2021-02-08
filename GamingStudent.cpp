#include "GamingStudent.h"
#include <iostream>

using namespace std;






GamingStudent::GamingStudent()
{

	gamingDevice = 0;
	hoursOfGameFun = 0;
}


//Overloaded Constructor
GamingStudent::GamingStudent(int newGamingDevice, int newHoursOfGameFun)
{
	gamingDevice = newGamingDevice;
	hoursOfGameFun = newHoursOfGameFun;
}


//Accessor Function
int GamingStudent::getGamingDevice() const
{
	return gamingDevice;
}

int GamingStudent::getHoursOfGameFun() const
{
	return hoursOfGameFun;
}


//Mutator Function
void GamingStudent::setGamingDevice(int newGamingDevice)
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


int GamingStudent::getGamingDevice() const
{
	return gamingDevice;
}



int GamingStudent::getHoursOfGameFun() const
{
	return hoursOfGameFun;

}



void GamingStudent::printInfo() const
{
	cout << endl << "Name: " << getName() << endl;
	cout << endl << "Age: " << getAge() << endl;
	cout << endl << "Gaming Device: " << getGamingDevice() << endl;
	cout << endl << "Hours of Fun: " << getHoursOfGameFun() << endl;
	

}
