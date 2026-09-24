#include <iostream>

using namespace std;

int main()
{
	cout << "What is the current temperature in celsius?\n";

	float ctemp;
	cin >> ctemp;

	float ftemp = (ctemp * 9.0f) / 5.0f + 32;

	cout << "The temperature is " << ftemp << " degrees fahrenheit.\n";
}
