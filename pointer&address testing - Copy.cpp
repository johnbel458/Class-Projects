
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	//memory adress for variable adress... It does not matter what the value is.. such as addres with the value 5 won't matter what it prints out
	int addres ;
	cout << &addres << endl;


	int *pointer;
	//variable pointer contain the memory adress of variable address
	pointer = &addres;
	cout << pointer << endl;
	system("pause");
    return 0;
}

