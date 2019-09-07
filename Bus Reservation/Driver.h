#pragma once
#include <string>

class Driver
{
	std::string name;
	std::string destination;
	std::string from;
	std::string timeDepart;
	std::string timeArrive;

public:
	Driver(std::string name, std::string des = "", std::string from = "")
		: name(name), destination(des), from(from) {}

	void setTimeDepart(int hours, int minutes);

	void setTimeArrive(int hours, int minutes);

	void printDriverInfo();

	// using 2d array for available seat
	void printAvailableSeat();
};