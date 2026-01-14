// Chap 1 Practice 3 Secret PIN Attempts.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

	const int attempts = 5;
	int pin[attempts];

	for (int input = 0; input < attempts; input++)
	{
		cout << "Attempt: " << input + 1 << endl;
		cout << "Enter PIN: ";
		cin >> pin[input];
	}

	int third_attempt = pin[2];

	return 0;
}

