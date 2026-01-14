// Chap 1 Practice 4 Gaming Scores Display.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	const int round = 5;
	int score[round]; 

	for (int count = 0; count < round; count++)
	{
		cout << "Score from round " << count + 1 << " : ";
		cin >> score[count];
	}
	for (int count = 0; count < round; count++)
	{
		cout << score[count] << " ";
	}
	return 0;
}
