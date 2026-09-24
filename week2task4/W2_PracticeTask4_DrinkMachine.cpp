#include <iostream>


int main()
{
	std::cout << "Pick your beverage by inputing a number between 1-5. \n\n1. Ice Coffee \n2. Ice Tea \n3. Cold Water \n4. Cola\n5. Energy Drink\n\nType your choice here: ";
	
	int choice;
	std::cin >> choice;
	switch (choice)
	{
	case 1:
		std::cout << "\nYou chose: Ice Coffee.\n";
		break;
		
	case 2:
		std::cout << "\nYou chose: Ice Tea.\n";
		break;

	case 3:
		std::cout << "\nYou chose: Cold Water.\n";
		break;
	
	case 4:
		std::cout << "\nYou chose: Cola.\n";
		break;

	case 5:
		std::cout << "\nYou chose: Energy Drink.\n";
		break;

	default:
		std::cout << "\nINVALID\n";
		break;
	}

	return 0;
}