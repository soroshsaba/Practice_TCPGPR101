#include <iostream>
#include <string>

using namespace std;

int main()
{
	// dataType variableName;
	int age;
	float weight;
	double distance;
	bool isAlive;
	char initial;
	string name;
	
	unsigned short int betterage;
	long double hugeDistance;

	age = 40;
	weight = 90.2f;
	distance = 29132.132;
	isAlive = true;
	initial = 'F';
	name = "John";

	cout << "My name is " << name << " and I am " << age << " years old." << endl;
	cout << "Am I alive: " << isAlive << endl;
	return 0;
}