// Chap 1  What is an Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	/*int student_marks[5];
	*/
	const int size = 10;
	int student_marks[size];

	/*cout << "Enter marks for first subject: ";
	cin >> student_marks[0];

	cout << "You entered: " << student_marks[0] << endl;
	*/

	for (int index = 0; index < size; index++)
	{
		cout << "Enter marks for subject " << index + 1 << ": ";
		cin >> student_marks[index];
	}

	for (int index = 0; index < size; index++)
	{
		cout << student_marks[index] << endl;
	}


	/*
	student_marks[0] = 23;
	student_marks[1] = 25;
	student_marks[2] = 27;
	student_marks[3] = 29;
	student_marks[4] = 24;

	int sum = student_marks[0] + student_marks[1];

	cout << sum;

	cout << "Array declared successfully" << endl;
	cout << "Balues stored" << endl;
	*/

	return 0;
}
