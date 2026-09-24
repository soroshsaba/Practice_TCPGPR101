#include<iostream>
int main()
{
	std::cout << "Can you give me three numbers for their average?\n";
	double first;
	double second;
	double third;
	std::cout << "\nFirst Number: ";
	std::cin >> first;
	std::cout << "Second Number: ";
	std::cin >> second;
	std::cout << "Third Number: ";
	std::cin >> third;
	double average;
	average = (first + second + third) / 3;
	std::cout << "\nYour three numbers are: " << first << ", " << second << ", and " << third << ". Therefore, their average is: " << average << ".\n";
	return 0;
}