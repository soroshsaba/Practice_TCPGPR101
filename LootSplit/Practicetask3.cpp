#include<iostream>
int main()
{
	int first;
	int second;
	int third;
	std::cout << "Can you write three numbers?\n";
	std::cout << "First Number: ";
	std::cin >> first;
	std::cout << "\nSecond Number: ";
	std::cin >> second;
	std::cout << "\nThird Number: ";
	std::cin >> third;
	std::cout << "Your three numbers are: " << first << ", " << second << ", and " << third << ".";
	return (0);
}