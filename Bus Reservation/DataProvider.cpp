#include "DataProvider.h"
#include "Driver.h"
#include <vector>

// Current available drivers 
std::vector<std::unique_ptr<Driver>>drivers;

void addNewDriver()
{
	std::cout << "=========================\n";
	std::cout << "    Add New Schedule     \n";
	std::cout << "=========================\n";

	std::string name, destination, from;
	int hours, minutes;

	std::cout << "Please insert the information below:\n";
	std::cout << "====================================\n";
	std::cout << "Name\t\t: ";
	std::getline(std::cin, name);
	std::cout << "Destination\t: ";
	std::getline(std::cin, destination);
	std::cout << "From\t\t: ";
	std::getline(std::cin, from);

	drivers.emplace_back(std::unique_ptr<Driver>(new Driver(name, destination, from)));

	std::cout << "Time Departure\n";
	std::cout << "- Hours\t\t: ";
	std::cin >> hours;
	std::cout << "- Minutes\t: ";
	std::cin >> minutes;

	drivers[drivers.size() - 1]->setTimeDepart(hours, minutes);

	std::cout << "Time Arrival\n";
	std::cout << "- Hours\t\t: ";
	std::cin >> hours;
	std::cout << "- Minutes\t: ";
	std::cin >> minutes;
	drivers[drivers.size() - 1]->setTimeArrive(hours, minutes);
	std::cout << "====================================\n";
}

void showAvailableBus()
{
	std::cout << "=========================\n";
	std::cout << "      Available Bus      \n";
	std::cout << "=========================\n";

	for (size_t i = 0; i < drivers.size(); i++)
	{
		std::cout << "====================================\n";
		// Print driver
		drivers[i]->printDriverInfo();

		// Print available seat 
		// Currently are not available
		std::cout << "====================================\n";
	}
}
