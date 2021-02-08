//Default Constructor
#include "NonGamingStudent.h"
using namespace std;


NonGamingStudent::NonGamingStudent()
{

	streamingService = 0;
	hoursOfNonGameFun = 0;
}


//Overloaded Constructor
NonGamingStudent::NonGamingStudent(int newStreamingService, int newHoursOfNonGameFun)
{
	streamingService = newStreamingService;
	hoursOfNonGameFun = newHoursOfNonGameFun;
}


//Accessor Function
int NonGamingStudent::getStreamingService() const
{
	return streamingService;
}

int NonGamingStudent::getHoursOfNonGameFun() const
{
	return hoursOfNonGameFun;
}


//Mutator Function
void NonGamingStudent::setStreamingService(int newStreamingService)
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


int NonGamingStudent::getStreamingService() const
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
