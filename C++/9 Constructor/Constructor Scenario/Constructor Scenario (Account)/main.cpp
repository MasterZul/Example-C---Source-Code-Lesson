#include<iostream>
#include "Account.h"
#include<conio.h>
#include<fstream>
using namespace std;

int main(){

ifstream fin;
int choice, Type;
float Balance;

char accountNum [20];
char accountN [20];

Account  Master[10];



fin.open("data.txt");

int x = 0; 
int n = 1;

while(!fin.eof())	
	{
	                     /*input of the file*/
	                     
	             
	                    



fin>>Balance>>Type;	
fin.ignore();
fin.getline(accountNum, 6,' ');

fin.getline(accountN, 20);

Account dummy(accountN,accountNum,Type,Balance);       

Master[x] = dummy;

x++;

}



for(int i = 0; i<10; i++){

cout<<"#Person :"<<n<<endl;
cout<<"Please enter the choice 1 -> withdraw  2 -> deposited"<<endl;
cout<<endl;
cin>>choice;




if (choice == 1){
	
Master[i].withdraw();
}

else if(choice == 2){

Master[i].deposit();
}

Master[i].printDetail();
cout<<endl;
n++;
}
fin.close();
getch();
}
