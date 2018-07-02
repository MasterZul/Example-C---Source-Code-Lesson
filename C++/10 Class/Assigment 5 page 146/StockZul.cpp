#include<iostream>
#include<cstdlib>
#include"Stock.h"
using namespace std;

int main(){
 
 Stock master("MSB", "Maybank", 100);
 master.setCurrentPrice(90);
 master.print(master);
 cout<<endl;
 cout<<"Stock's Price Percenatge': "<<master.findPercentage()<<"%"<<endl;
 
 
 cout<<endl;
 
 Stock *NewMaster;
 NewMaster = new Stock("TNB", "Tenaga Berhad", 130.50);
 NewMaster->setCurrentPrice(160.75);
 
 
 
 NewMaster->print(*NewMaster);
 cout<<endl;
 cout<<"Stock's Price Percenatge': "<<NewMaster->findPercentage()<<"%"<<endl;
 
 
 
 return 0;
 }
