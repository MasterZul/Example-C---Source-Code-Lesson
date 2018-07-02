/*
    Program : Constructor Lab 2
*/

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class date
{
	
	int day, year,month;
	char month2[15];
	
	public:
		//overlord construct definition
		date(char const b[] = "January",int a=1 , int c=2008);
		date(int);
		void print();
			void print2();
		
};

//constructor implementation
date::date(int a)
{
	
	day = a;
	strcpy(month2,"Feburuary");
	year = 2020;
	
}

date::date (char const b[],int a, int c)
{
	day = a;
	strcpy (month2,b);
	year = c;
	
	
}

void date::print()
{
	cout<<"\nDate is :"<<day<<"-"<<month<<"-"<<year;
}

void date::print2()
{
	cout<<"\nDate is :"<<day<<"-"<<month2<<"-"<<year;
}



int main()
{


date holiday2(31);
//declare instance of data using default argument

holiday2.print2();
getch();


}

