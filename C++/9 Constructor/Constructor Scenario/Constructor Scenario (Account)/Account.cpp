/** @Account.cpp **/

#include<iostream>
#include "Account.h"
#include<string.h>
using namespace std;

Account::Account(){
	
	strcpy(accountName," ");
	strcpy(accountNumber," ");
	accountType = 0;
	accountBalance = 0.0;
	
	
}  //Default Constructor

Account::Account(char const Name[],char const Number[], int Type, float Balance){

strcpy(accountName,Name);
strcpy(accountNumber, Number);
accountType = Type;
accountBalance = Balance;



}//Constructor

float Account::getBalance() const
{
	return accountBalance;
	// getBalance
}

void Account::withdraw() 
{
	float withdraw;
	cout<<"How many did you want to withdraw"<<endl;
	cin>>withdraw;
	
	if (accountBalance > 99 ){
		
		accountBalance = accountBalance - withdraw;
	}
	else {
		
		cout<<"Sorry You Cannot Withdraw Money from the bank"<<endl;
		cout<<" Your Account Only have : "<<accountBalance;
	}
}

void Account::deposit()
{
	float deposit;
	cout<<"How many did you want deposit"<<endl;
	cin>>deposit;
	accountBalance = accountBalance + deposit;
}

void Account::printDetail() const
{
	cout<<"Account Name: "<<accountName<<endl;
	cout<<"Account Number: "<<accountNumber<<endl;
	cout<<"Account Type: "<<accountType<<endl;
	cout<<"Account Balance:"<<accountBalance<<endl;
 } 
