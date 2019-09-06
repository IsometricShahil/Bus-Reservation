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

void Driver::printTimeDepart()
{
	std::cout << this->timeDepart << std::endl;
}

void Driver::printTimeArrive()
{
	std::cout << this->timeArrive << std::endl;
}