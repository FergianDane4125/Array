// Chap 1 Practice 2 Robot Distanfce Sensors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

	const int size = 5;
	int distance[size];

	for (int reading = 0; reading < size; reading++)
	{
		cout << "Enter reading (cm) " << reading + 1 << ": ";
		cin >> distance[reading];
	}

	int first_reading = distance[0];
	int last_reading = distance[size -1];

	cout << "First Reading: " << first_reading << endl;
	cout << "Last Reading: " << last_reading << endl;
}
