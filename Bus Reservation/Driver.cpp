#include "Driver.h"
#include <iostream>
#include <string>

void Driver::setTimeDepart(int hours = 0, int minutes = 0)
{
	this->timeDepart = std::to_string(hours) + ":" + std::to_string(minutes);
}

void Driver::setTimeArrive(int hours = 0, int minutes = 0)
{
	this->timeArrive = std::to_string(hours) + ":" + std::to_string(minutes);
}

void Driver::printDriverInfo()
{
	std::cout << "Name\t\t: " << this->name << "\n";
	std::cout << "Destination\t: " << this->destination << "\n";
	std::cout << "Arrival\t\t: " << this->timeArrive << "\n";
	std::cout << "From\t\t: " << this->from << "\n";
	std::cout << "Departure\t: " << this->timeDepart << "\n";
}

