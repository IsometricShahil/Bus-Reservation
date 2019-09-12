#pragma once
#include <string>

class Bus
{
	std::string driverName;
	std::string destination;
	std::string from;
	std::string timeDepart;
	std::string timeArrive;
	std::string seats[40];		// (5sq * 2 row) = 10sq*4seats = 40 seats

  public:

	Bus(std::string drivername, std::string des = "", std::string from = "");

	void setTimeArrive(std::string hours = "00", std::string minutes = "00" );

	void setTimeDepart(std::string hours = "00", std::string minutes = "00");

	void printBusInfo();

	void printAvaliableSeats();
	
	void seatReserve(int sNum , std::string name);
	
	void cancelReserve(int sNum);
	
};
