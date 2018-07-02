#include<iostream>
#include<iomanip>
#include<string>
#include"BreadInfo.h"

using namespace std;

int main(){

int co,size;
double pri;
string na;
double total, average;

Breads B[100];


cout<<"How many bread types to enter? ";
cin>>size;
cout<<endl;



for(int i = 1; i<size+1; i++){

cout<<"Enter the information of bread #"<<i<<endl;
cout<<"Bread code: ";
cin>>co;
B[i].setCode(co);

B[i].setBreadName(co);
cout<<"Bread Name: "<<B[i].getBreadname()<<endl;


cout<<"Price (RM): ";
cin>>pri;
B[i].setPrice(pri);
cout<<endl;
total = total + pri;
}


cout<<"No   "<<"Bread Code            "<<"Bread Name                "<<"Price(RM)"<<endl;
cout<<endl;


for(int i = 1; i<size+1; i++){
cout<<fixed<<showpoint;
cout<<i<<"       "<<left<<setw(8)<<B[i].getCode()<<"        "<<left<<setw(32)<<B[i].getBreadname()<<setw(5)<<setprecision(2)<<B[i].getPrice()<<endl;
}


cout<<endl;
cout<<"Average Price(RM) = "<<total;







}
