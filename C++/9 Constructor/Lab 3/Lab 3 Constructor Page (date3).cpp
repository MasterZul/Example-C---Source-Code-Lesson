/*
    Program : Constructor Lab 3
*/

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class date
{
	int day,year;
	char month[15];
	
	public:
		//construct with default argument
		//construct must have the same name as class name
		date(int a=1, char const b[] = "January", int c =2008);
		
		// destructor
		~date()
		{
			cout<<"\nObject with Date : "<<day<<"-"<<"-"<<month<<"-"<<year<<" is destroyed";
			getch();
		}
		
		void print();
		
};

//contructtor implementation
date::date(int a, const char b[], int c)

{
	day =a;
	strcpy (month,b);
	year = c;
	
}

void date::print()
{
	cout<<"\nThe date is :"<<day<<"-"<<month<<"-"<<year;
	
}

int main()
{
	date today(19,"July",2008);
	today.print();
	date registerDay(7,"July",2008);
	registerDay.print();
	getch;
}
