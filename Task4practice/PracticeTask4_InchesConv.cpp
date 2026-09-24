#include <iostream>
int main()
{
	double inches;
	std::cout << "Can you give me a number in inches?\n";
	std::cin >> inches;
	std::cout << "The number provided is " << inches << " inches.\n";
	
	double feet = inches / 12;
	double meters = inches * 0.0254;
	double cm = inches * 2.54;
	std::cout << "The conversion of inches to feet is: " << feet << " feet.\n";
	std::cout << "The conversion of inches to meters is: " << meters << " meters.\n";	
	std::cout << "The conversion of inches to centimeters is: " << cm << " cm.\n";
	
	std::cout << "So the conversion of inches to the three values are: " << feet << " feet, " << meters << " meters, and " << cm << " centimeters.\n";
	return 0;
}