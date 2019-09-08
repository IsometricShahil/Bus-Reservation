#pragma once
#include <string>

class Bus
{
	std::string driverName;
	std::string destination;
	std::string from;
	std::string timeDepart;
	std::string timeArrive;
   std::string 
public:
	Bus(std::string drivername, std::string des = "", std::string from = "")
		: driverName(drivername), destination(des), from(from) {}

	void setTimeDepart(int hours, int minutes);

	void setTimeArrive(int hours, int minutes);

	void printBusInfo();

	// using 2d array for available seat
	void printAvailableSeat();
};
