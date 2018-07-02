/*
    Program : Saving Account Balance
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
	int n = 0, month;
	float balance, deposited, windraw, sumW = 0, sumD = 0, SumTI = 0,rate = 0, interest = 0, totali = 0,starting;
	
	
	cout<<"16. Saving Account Balance"<<endl;
	cout<<"=================================="<<endl;
 cout<<endl;	
	
	cout<<"How much the annual interest => ";
	cin>>interest;
	cout<<endl;	
	
	cout<<"How much the starting balance =>";
	cin>>starting;
    cout<<endl;	
	
	cout<<"Enter the number of month that have passed since the account was established "<<endl;
	cout<<"=> ";
	cin>>month;
cout<<endl;	


	while(n < month){
		
	
	do{
	
		cout<<"Enter the amount that deposited (Do not acept the negative number)"<<endl;
		cout<<"=> ";
		cin>>deposited;
	cout<<endl;
	}while(deposited<0);
		
		balance = starting + balance + deposited;
		sumD = sumD + deposited;
		
	
	do{
	
		cout<<"How much the amount that windraw from the account"<<endl;
	     cout<<"(Do not acept the negative number)"<<endl;
		cout<<"=> ";
		cin>>windraw;
cout<<endl;
}while(windraw<0);
		sumW = sumW + windraw;
		
		balance = balance - windraw;
		
		rate = interest/12;
	
		totali = rate*balance;
		
		SumTI = SumTI + totali;
		
		balance = balance + totali;
		starting = 0;
        n = n+1;
	}
	
	cout<<showpoint<<fixed;
	cout<<setprecision(2)<<"The Balance:RM "<<balance<<endl;
	cout<<setprecision(2)<<"The total amount of deposited:RM "<<sumD<<endl;
	cout<<setprecision(2)<<"The total amount of windraw:RM "<<sumW<<endl;
	cout<<setprecision(2)<<"The total amount of interest:RM "<<SumTI<<endl;
	
	return 0;
	
	
	
	
}
