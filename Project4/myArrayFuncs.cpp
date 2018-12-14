#include <iostream>
using namespace std;
#include "myArrayFuncs.h"

void FillArray(double a[], int arrayMax)
{
	for (int counter = 0; counter < arrayMax; counter++)
	{
		double value;
		cout << "Enter value for element number " << counter + 1 << ": ";
		cin >> value;
		a[counter] = value;
	}
}

void PrintArray(double a[], int arrayMax)
{
	for (int counter = 0; counter < arrayMax; counter++) {
		cout << "\narray[" << counter << "] = " << a[counter];
	}
}

double AvgArray(double a[], int arrayMax)
{
	double total = 0;
	for (int counter = 0; counter < arrayMax; counter++) {
		total += a[counter];
	}

	double avg = total / arrayMax;
	return avg;
}