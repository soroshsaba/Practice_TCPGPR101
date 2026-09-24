#include <iostream>

int super = 2;

int main()
{
	std::cout << super << "\n";
	{
		int super = 3;
		std::cout << super<<"\n";
	}
	{
		std::cout << super;
	}
	return 0;
}