#include<iostream>
#include "Inventory.h"
#include<conio.h>
#include<fstream>
using namespace std;

int main(){
	
	ifstream fin;
	Inventory Master[1];
	int value;
	string choice;
	
		char Name [20];
		char Kod [20];
		float Price;
		int quantity;
	

	
	fin.open("data.txt");
	
	int i = 0;
	

while(!fin.eof())	
	{
	
fin>>Price>>quantity;	
fin.ignore();
fin.getline(Kod, 6,' ');

fin.getline(Name, 20);


	Master[i].getData(Name,Kod,quantity,Price);
	
	
	cout<<"Welcome to Master Inventory"<<endl;
	cout<<endl;
	
	cout<<"How many item did he buy"<<endl;
	cin>>value;
	

	Master[i].discountPrice();



    Master[i].buy(value);
    cout<<endl;
    
    cout<<"Did you want to add Stock"<<endl;
    cout<<"Press Yes if you want: ";
    cin>>choice;
    cout<<endl;
    
    
  	
    	Master[i].addStock();
	


Master[i].printDetail();
	fin.close();
i++;
}
}

