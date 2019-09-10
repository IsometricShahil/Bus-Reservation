#include "Bus.h"
#include <iostream>
#include <string>

void Bus::setTimeDepart(string hours = "00", string minutes = "00")
{
	this->timeDepart = std::to_string(hours) + ":" + std::to_string(minutes);
}

void Bus::setTimeArrive(string hours = "00", string minutes = "00")
{
	this->timeArrive = std::to_string(hours) + ":" + std::to_string(minutes);
}

void Bus::printBusInfo()
{
	std::cout << "Name\t\t: " << this->driverName << "\n";
	std::cout << "Destination\t: " << this->destination << "\n";
	std::cout << "Arrival\t\t: " << this->timeArrive << "\n";
	std::cout << "From\t\t: " << this->from << "\n";
	std::cout << "Departure\t: " << this->timeDepart << "\n";
}
