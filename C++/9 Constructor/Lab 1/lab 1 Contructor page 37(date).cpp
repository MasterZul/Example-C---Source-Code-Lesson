/*
    Program : Constructor Lab 1
*/

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class date
{
	
	int day, year;
	char month[15];
	
	public:
		
		date(int a=1, char const b[] = "January", int c = 2008 );
		
	
		void print();
		
		
};
	
	date::date(int a, char const b[], int c)
	{
		day = a;
		strcpy(month,b);
		year = c;
	}
	
	void date::print()
	{
	cout<<"\nThe date is : "<<day<<" - "<<month<< " - "<<year;
	
	}
	
	int main()
	{
	date birthDate;
	date birthDate1(2);
	date birthDate2(3,"March");
	date birthDate3(4,"April",2009);
	
	
	birthDate.print();
	birthDate1.print();
	birthDate2.print();
	birthDate3.print();
	
	getch();
	}
