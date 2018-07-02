/*
	Program 4: Repeat my name
*/

#include <iostream>
using namespace std;

int main()
{
	char name[100];
	int repeat;
	
	cout << "Hello. What is your name? ";	
	cin.getline(name,100);
	system ("cls");
	
	cout << "Hi " << name << ". I will repeat your name." << endl;
	cout << "How many repetition you want> ";
	cin >> repeat;
	
	cout << endl << endl;
	cout << "Okay, here is your names" << endl;
	system("pause");
	system("cls");
	
	for (int i=0; i<repeat; i++)
	{
		cout << (i+1) << ".\t" << name << endl;
	}
	
	cout << endl << endl;
	
	system("pause");
	return (0);
}
