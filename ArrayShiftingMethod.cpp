#include "pch.h"
#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

using namespace std;


void Shift(int x, int y,int arr[])
{
	int	temp = 0;
	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
	for (int i = 0; i < 8; i++)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	int ShifterInt, ShiftedInt;
	int arr[8] = { 10,28,35,11,59,45,89,36 };

	cout << "Our array is : ";
	for (int i = 0; i < 8; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	// Receive ShifterInt
	cout << "Enter the index number you want to shift." << endl;
	cout << "The index number I want to shift is : ";
	cin >> ShifterInt;

	system("CLS");
	// Receive ShifterInt
	cout << "Enter the index number you want to be shifted with ShifterInt" << endl;
	cout << "The index number I want to be shifted with ShifterInt is : ";
	cin >> ShiftedInt;


	Shift(ShifterInt, ShiftedInt, arr);
	_getch();
}

