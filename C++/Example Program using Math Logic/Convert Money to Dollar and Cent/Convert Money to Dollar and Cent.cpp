/*
    Program : Convert Money to Dollar and Cent
*/

#include <iostream>
using namespace std;

int main()
{
	int dollar;
	float x, cent;
	
	cout << "Enter a money  value that receive: ";
	cin  >> x;
	cout << endl;
	
	dollar = x;
	cent = (x-dollar)*100;
	
	cout << "Dollar Part: " << dollar << endl;
	cout << "Cent Part  : " << cent  << endl;
	
	return 0;
}
