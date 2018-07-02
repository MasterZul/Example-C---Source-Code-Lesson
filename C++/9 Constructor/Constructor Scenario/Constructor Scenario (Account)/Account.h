/** @fileAccount.h */

#include<iostream>

class Account{
	
	private:
		char accountName[20];
		char accountNumber[20];
		int accountType;
		float accountBalance;
		
		public:
			
			Account();
			Account(char const accountName[],char const accountNumber[],int accountType, float accountBalance);
			
			float getBalance() const;
			
			void withdraw();
			void deposit();
			void printDetail() const;
			
			
			
	
};
