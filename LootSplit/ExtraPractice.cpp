#include <iostream>
int main()
{
	int gold;
	std::cout<<"How many gold coins did your party find?\n";
	std::cin>>gold;
	std::cout << "Your party has found " << gold << " coins of gold!\n";
	int players;
	std::cout << "How many party members do you have?\n";
	std::cin>>players;
	std::cout << "You have " << players << " party members!\n";
	std::cout << "That is " << gold / players << " gold per member!\n";
	std::cout << "You have " << gold % players << " remaining gold";
	if (gold % players == 1)
	{
		std::cout << " coin!";
	}
	else
	{
		std::cout<<" coins!";
	}
	return 0;
}