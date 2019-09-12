#include "Bus.h"
#include <iostream>
#include <string>

Bus::Bus(std::string drivername, std::string des, std::string from):driverName(drivername), destination(des),
from(from)
{
	for (int i = 0; i < 40; i++)
	{
		seats[i] = "Empty!";
	}
}

void Bus::setTimeDepart(std::string hours, std::string minutes)
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

void Bus::setTimeArrive(std::string hours, std::string minutes)
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

void Bus::printAvaliableSeats()
{
	bool nextLine = false;

	for (int i = 0; i < 40; i++)
	{
		std::cout << (i + 1) << ". " << seats[i];

		if ((i + 1) % 2 == 0 && nextLine)
		{
			std::cout << std::endl;
			nextLine = false;
			continue;
		}
		if ((i + 1) % 2 == 0 && !nextLine)
		{
			std::cout << "\t\t";
			nextLine = true;
			continue;
		}

		std::cout << "  ";
	}
}

 void Bus::seatReserve(int sNum, std::string name)
{
	seats[sNum - 1] = name;
}

void Bus::cancelReserve(int sNum)
{
	seats[sNum - 1] = "Empty!";
}
