// Chap 1 Practice 8 Cinema Seat Booking.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
   
	const int size = 5;
	int seats[size];

	cout << "Enter seats: ";

	for (int index = 0; index < size; index++)
	{
		cin >> seats[index];
	}

	cout << "Enter the new second seat value to be updated: ";
	int new_seat;
	cin >> new_seat;
	seats[1] = new_seat;
	
	cout << "Updated seats: ";
	for (int index = 0; index < size; index++)
	{
		cin >> seats[index];
	}
	for (int index = 0; index < size; index++)
	{
		cout << seats[index] << " ";
	}

	return 0;
}

