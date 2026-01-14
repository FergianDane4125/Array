// Chap 1 Practive 5 Array Bounds Detective.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    
    const int size = 5;
    int arr[size];

    /*
        for (int index = 0; index <= size; index++)
    {
        cin >> arr[index];
    }
    */
    for (int index = 0; index < size; index++)
    {
        cin >> arr[index];
    }
    cout << "Fixed input loop works!" << endl;
    return 0;
}
