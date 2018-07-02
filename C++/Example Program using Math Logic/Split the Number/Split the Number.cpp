/*
    Program : Split the Number
*/

#include<iostream>
using namespace std;

int main(){
	
	
	
   int number,f, second, third ;
	
	cout<<"Enter the number = ";
	cin>>number;
	
	f= number/100;
	
	second = (number - f*100 ) / 10;
	
	third = (number - f*100) -second*10;


	cout<<"First Number = "<<f<<endl;
	cout<<"Second Number = "<<second<<endl;
	cout<<"Third Number ="<<third;
	return 0;
	
	
	
	
	
}



