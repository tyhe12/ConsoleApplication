// ConsoleApplication.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
// function declaration
void someFunction();

int main()
{
	someFunction();
	system("pause");
    return 0;
}

// create a function definition
void someFunction()
{
	cout << "Hello World" << endl;
}

