// Chap 1 Practice 6 Step Tracker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{

	const int size = 5;
	int steps[size];
	int total = 0;
	for (int counts = 0; counts < size; counts++)
	{
		cout << "Step count from hour " << counts + 1 << " : ";
		cin >> steps[counts];
		total = total + steps[counts];
	}
	cout << "Steps: ";
	for (int counts = 0; counts < size; counts++)
	{
		cout << steps[counts] << " ";
	}
	cout << endl;
	cout << "Total: " << total << endl;

	return 0;
}
