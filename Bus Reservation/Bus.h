#pragma once
#include <string>

class Bus
{
	std::string driverName;
	std::string destination;
	std::string from;
	std::string timeDepart;
	std::string timeArrive;
   std::string seats[40]; //(5sq * 2 row) = 10sq*4seats = 40 seats

public:
	Bus(std::string drivername, std::string des = "", std::string from = "")
		: driverName(drivername), destination(des), from(from) {}

	void setTimeDepart(string hours, string minutes);

	void setTimeArrive(string hours, string minutes);

	void printBusInfo();

	void printAvailableSeat();
};
