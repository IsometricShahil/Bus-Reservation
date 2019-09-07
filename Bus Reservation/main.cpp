#include "DataProvider.h"
#include "Driver.h"
#include <iostream>

int main()
{
	std::cout << "Bus Reservation\n";
	std::cout << "1. Add new bus schdule\n";
	std::cout << "2. Show available bus\n";
	std::cout << "3. Reserve a bus\n";
	std::cout << "4. Cancel bus reservation\n";
	std::cout << "5. Exit the programs\n";

	int choice = 0;

	std::cout << "Input: ";
	std::cin >> choice;
	std::cin.ignore();

	switch (choice)
	{
	case 1:
		addNewDriver();
		main();
		break;
	case 2:
		showAvailableBus();
		main();
		break;
	case 3:
		// Reserve a bus
		main();
		break;
	case 4:
		// Cancel bus reservation
		main();
		break;
	case 5:
		// Exit Programs
		break;
	default:
		main();
	}
}