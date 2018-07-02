#include<iostream>

using namespace std;

class SavingAccount{

private:
   static float annualInterestRate;
   float savingBalance;
public:

SavingAccount(float balance){


savingBalance = balance;
}

void calculateMonthlyInterest()

{
float month;
month =	((annualInterestRate/100)/12)*savingBalance;



savingBalance = savingBalance + month;

}

void modifyInterestRate (float annual){

annualInterestRate = annual;

}

float getBalance() const
{return savingBalance;
}

};

float SavingAccount::annualInterestRate = 0;

int main(){

float interest;

SavingAccount saver1(2000.00);
SavingAccount saver2(3000.00);

cout<<"Set the Interest: ";
cin>>interest;

saver1.modifyInterestRate(interest);

saver1.calculateMonthlyInterest();

cout<<"The Saver1 Saving: "<<saver1.getBalance()<<endl;



saver2.modifyInterestRate(interest);

saver2.calculateMonthlyInterest();

cout<<"The Saver2 Saving "<<saver2.getBalance()<<endl;

cout<<endl;

cout<<"Set the another Interest: ";
cin>>interest;

saver1.modifyInterestRate(interest);

saver1.calculateMonthlyInterest();

cout<<"The Saver1 Saving: "<<saver1.getBalance()<<endl;

saver2.modifyInterestRate(interest);

saver2.calculateMonthlyInterest();

cout<<"The Saver2 Saving "<<saver2.getBalance()<<endl;
}
