// ConsoleApplication.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;
// function declaration
void someFunction();
char yesOrNo(string&& question);
// we can also add default parameter value: (string question="some question")
// by adding "inline" keywords before function definition will skip look up process by making copy everywhere


int main()
{
	someFunction();
	string question = "do you like games?";
	char answer = yesOrNo("do you like games?");
	cout << "your answer is: " << answer << endl;
	system("pause");
    return 0;
}

// create a function definition
void someFunction()
{
	cout << "Hello World" << endl;
}

char yesOrNo(string&& question)
{
	cout << question << endl;
	char response = ' ';
	while (response != 'y' && response != 'n') {
		cout << "enter y(es) or n(o)" << endl;
		cin >> response;
		response = tolower(response);
	}

	return response;
}




