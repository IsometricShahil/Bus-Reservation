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

	void printTimeDepart();

	void printTimeArrive();
};