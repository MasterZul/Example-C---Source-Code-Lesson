/*
    Program : Sum and Number of Odd
*/


#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
	int n, SumOdd = 0, NOdd = 0;
	float Avg;
	
	cout<<"Enter a Number"<<endl;
		cin>>n;
	
	
	
	while (n!=0){
		
			if(n%2==1){
			
			SumOdd = SumOdd + n;
			NOdd++;
			
			
		}
	
	    cout<<"Enter a Number (Enter a 0 number to stop calculate)"<<endl;
		cin>>n;
	}
	Avg = SumOdd/NOdd;
	
	
	cout<<showpoint<<fixed;
	cout<<"Sum of Odd Number: "<<SumOdd<<endl;
	cout<<"Number of Odd Number: "<<NOdd<<endl;
	if(NOdd>0)
	
	cout<<setprecision(2)<<"Average of Odd Number: "<<Avg<<endl;
	
	return 0;
}
