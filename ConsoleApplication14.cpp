#include "stdafx.h"
#include <iostream>
int populateIntegerArray(int *arrayPtr, int arraySize);
void displayIntegerArray(int *arrayPtr, int arraySize);
using namespace std;


int main()
{
	int size;
	//int number;
	int *ptr;
	cout << "Enter desired array size:";
	cin >> size;
	ptr = new int[size];
	populateIntegerArray(ptr, size);
	displayIntegerArray(ptr, size);


	system("pause");
	return 0;

}


int populateIntegerArray(int *arrayPtr, int arraySize)

{
	//	double *arrayPtr;
	//int input;
	int index = 0;
	for (int index = 0; index < arraySize; index++)
	{
		cout << "Enter value for array element" << " " << (index + 1) << " " << ":";
		cin >> arrayPtr[index];
		arrayPtr[index] = index;


	}
	return index;




}
void displayIntegerArray(int *arrayPtr, int arraySize)
{
	for (int index = 0; index < arraySize; index++)
	{		

		cout << &arrayPtr[index] << endl;
  
	}

}