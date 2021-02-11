#include "GamingStudent.h"
#include <iostream>

using namespace std;






GamingStudent::GamingStudent()
{

	gamingDevice = "";
	hoursOfGameFun = 0;
}


//Overloaded Constructor
GamingStudent::GamingStudent(int newGamingDevice, int newHoursOfGameFun)
{
	gamingDevice = newGamingDevice;
	hoursOfGameFun = newHoursOfGameFun;
}

void GamingStudent::createRandomStudent()
{
	setName("");
	setAge(18 + rand() % 27);
	setCollege("");
	setProgramName("");
	setCurrentSemester(1 + rand() % 6);
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
