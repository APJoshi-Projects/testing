/* Who.
   Copyright 2020 Ankur Joshi <ankurjoshi@outlook.com>
  
 * What.
   Bittest.cpp (anding, oring and xoring variables) 
 
 * Why.
   Learning C++
 
 * Testing.
   Github integration in VSCode 
   
 */

#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main (int nNumberofArgs, char* pszArgs[])
{
	cout.setf(cout.boolalpha); //set output format for bool variables to true and false instead of 1 and 0
	
	int nArg1;
	cout << "Input value 1: ";
	cin >> nArg1;
	
	int nArg2;
	cout << "Input value 2: ";
	cin >> nArg2;
	
	bool b;
	b = nArg1 == nArg2;
	//compare two variablees and store result in bool b
	
	cout << "This statement, " << nArg1
	     << " equals "         << nArg2
	     << " is "             << b
			 << endl;
	     
	cout << "Press Enter to continue..." << endl;
	cin.ignore(10, '\n');
	cin.get();
	return 0;
}