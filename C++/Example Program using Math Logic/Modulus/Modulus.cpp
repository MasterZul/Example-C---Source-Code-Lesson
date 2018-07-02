/*
    Program : Modulus
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main (){
	
	int jumlah;
	float number1, number2, number;
	

	cout<<"number1= "<<endl;
	cin>>number1;
	cout<<"number2 = "<<endl;
	cin>>number2;	
	jumlah = number1 + number2;
	
	
	number = static_cast<int>(number1);
	
	cout<<"Jumlah = "<<jumlah<<endl;
	cout<<"number1 = "<<number1<<endl;
	cout<<"static = "<<number<<endl;
	
	return 0;
	
	
	
	
	
	
	
	
}
