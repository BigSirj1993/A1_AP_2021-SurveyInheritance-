//Default Constructor
#include "NonGamingStudent.h"
using namespace std;


NonGamingStudent::NonGamingStudent()
{
	setIsNotGamingStudent(true);
	setStreamingService("");
	setHoursOfNonGameFun(24);
}


//Overloaded Constructor
NonGamingStudent::NonGamingStudent(string newStreamingService, int newHoursOfNonGameFun)
{
	setIsNotGamingStudent(true);
	streamingService = newStreamingService;
	hoursOfNonGameFun = newHoursOfNonGameFun;
}

void NonGamingStudent::createRandomStudent()
{
	setName("");
	setAge(18 + rand()% 27);
	setCollege("");
	setProgramName("");
	setCurrentSemester(1 + rand() % 6);
	int randomService = rand() % 2;
	switch (randomService)
	{
	case 0:
		setStreamingService("Funimation");
		break;
	case 1:
		setStreamingService("Disney");
		break;
	
	}
	//createRandomStudent();
	//setStreamingService("Funimation");
	setHoursOfNonGameFun(30 + rand () % 60);
}




//Mutator Function
void NonGamingStudent::setStreamingService(string newStreamingService)
{
	streamingService = newStreamingService;
}

void NonGamingStudent::setHoursOfNonGameFun(int newHoursOfNonGameFun)
{
	hoursOfNonGameFun = newHoursOfNonGameFun;
}




//Destructor
NonGamingStudent::~NonGamingStudent()
{

}


string NonGamingStudent::getStreamingService() const
{
	return streamingService;
}



int NonGamingStudent::getHoursOfNonGameFun() const
{
	return hoursOfNonGameFun;

}



void NonGamingStudent::printInfo() const
{
	cout << endl << "Name: " << getName() << endl;
	cout << endl << "Age: " << getAge() << endl;
	cout << endl << "Program Name: " << getProgramName() << endl;
	cout << endl << "Current Semester: " << getCurrentSemester() << endl;
	cout << endl << "Type of Streaming Service: " << getStreamingService() << endl;
	cout << endl << "Program Name: " << getProgramName() << endl;
	
}

//NonGamingStudent::~NonGamingStudent()
//{
//}
