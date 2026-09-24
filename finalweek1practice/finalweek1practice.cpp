#include <iostream>

using namespace std;

int main()
{
	// Prompt the user for their name. 
	cout << "What is your name?\n";
	
	// Get the name. 
	string name;
	cin >> name;
	
	// Year of birth.
	cout << "What is your year of birth?\n";

	// Get the year of birth.
	int yob;
	cin >> yob;

	// Prompt the user for the current year. 
	cout << "What is the current year?\n";

	// Get the current year. 
	int currentyear;
	cin >> currentyear;
	
	// Display the information to the user. 
	cout << "Your name is " << name << ", and your age is " << currentyear - yob << ".\n";
	
	return 0;
}