#include "Bus.h"
#include <iostream>
#include <string>

void Bus::setTimeDepart(std::string hours = "00", std::string minutes = "00")
{
	if (hours.length() == 1)
	{
		hours = "0" + hours;
	}
	if (minutes.length() == 1)
	{
		minutes = "0" + minutes;
	}
	this->timeDepart = hours + ":" + minutes;
}

void Bus::setTimeArrive(std::string hours = "00", std::string minutes = "00")
{
	if (hours.length() == 1)
	{
		hours = "0" + hours;
	}
	if (minutes.length() == 1)
	{
		minutes = "0" + minutes;
	}
	this->timeArrive = hours + ":" + minutes;
}

void Bus::printBusInfo()
{
	std::cout << "Name\t\t: " << this->driverName << "\n";
	std::cout << "Destination\t: " << this->destination << "\n";
	std::cout << "Arrival\t\t: " << this->timeArrive << "\n";
	std::cout << "From\t\t: " << this->from << "\n";
	std::cout << "Departure\t: " << this->timeDepart << "\n";
}

