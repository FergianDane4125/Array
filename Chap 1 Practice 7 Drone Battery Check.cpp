// Chap 1 Practice 7 Drone Battery Check.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	const int size = 5;
	int battery[size];
	int low_battery = 0;

	for (int index = 0; index < size; index++)
	{
		cout << "Enter Battery: ";
		cin >> battery[index];
	}
	
	cout << "Battery: ";

	for (int index = 0; index < size; index++)
	{
		cout << battery[index] << " ";

		if (battery[index] < 20)
		{
			low_battery += 1;
		}
	}

	cout << endl;
	cout << "Low battery readings (<20%): " << low_battery;

	return 0;
}

