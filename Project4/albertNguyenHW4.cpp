#include <iostream>
using namespace std;
#include "myArrayFuncs.h"

int main()
{
	const int SIZE_OF_ARRAY = 6;
	double array[SIZE_OF_ARRAY];
	
	FillArray(array, SIZE_OF_ARRAY);
	
	PrintArray(array, SIZE_OF_ARRAY);
	
	cout << "\n\nThe average of all the array elements is " << AvgArray(array, SIZE_OF_ARRAY) << "\n\n";
	
	system("pause");
	return 0;
}
