/*
    Program : Arrange The Number
*/

#include<iostream>
using namespace std;

int main (){
	
	int first, second, third, fourth; 
	int f, number, s, t;
	
	cout<<"Enter the 4 digit number =  "<<endl;
	cin>>number;
	
	first = number/1000;
	
	f = first*1000;
	
	second = (number - f)/100;
	
	
	s = second*100;
	
	third = (number - f- s)/10;
	
	t = third*10;
	
	fourth = (number - f - s - t );
	
	cout<<"First Number = "<<f<<endl;
		cout<<"Second Number = "<<s<<endl;
		cout<<"Third Number = "<<t<<endl;
		cout<<"Fouth Number = "<<fourth<<endl;
		
		return 0;
		
	
}
