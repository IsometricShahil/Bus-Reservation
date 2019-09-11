#include "Bus.h"
#include <iostream>
#include <string>

Bus(std::string drivername, std::string des = "", std::string from = ""):driverName(drivername), destination(des),
from(from)
{
	for (int i = 0; i < 40; i++)
	{
		seats[i] = "Empty!";
	}
}

void Bus::setTimeDepart(string hours = "00", string minutes = "00")
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

void Bus::setTimeArrive(string hours = "00", string minutes = "00")
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

void printAvaliableSeats()
{
	bool nextLine = false;

	for (int i = 0; i < 40; i++)
	{
		std::cout << (i + 1) << ". " << seats[i];

		if (i % 2 == 0 && nextLine)
		{
			std::cout << std::endl;
			continue;
		}
		if (i % 2 == 0 && !nextLine)
		{
			std::cout << "\t\t";
			nextLine = true;
			continue;
		}

		std::cout << "\t";
	}
