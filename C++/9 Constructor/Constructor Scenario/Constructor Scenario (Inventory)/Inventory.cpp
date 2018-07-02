#include<iostream>
#include "Inventory.h"
using namespace std;

Inventory::Inventory(){

strcpy(itemName," ");
strcpy(itemKod," ");
itemPrice = 0.0;
qttyInStock = 0;
totalEarned = 0.0;


}

void Inventory::getData(char const Name[],char const Kod[], int quantity, float Price){
	
strcpy(itemName, Name);
strcpy(itemKod, Kod);
qttyInStock = quantity;
itemPrice = Price;





}

void Inventory::buy(int v){
	
	qttyInStock = qttyInStock - v;
	totalEarned = v*itemPrice;
	
}

void Inventory::addStock(){
	
	int add;
	cout<<"How many Did you want add"<<endl;
	cin>>add;
	qttyInStock = qttyInStock + add;
	
}

void Inventory::discountPrice(){
	
	float discount = 20;
	
	
	cout<<"You Get Discount!!!!"<<endl;
	discount = discount/100 * itemPrice;
	itemPrice = itemPrice - discount;

}

void Inventory::printDetail(){
	
	cout<<"\nItem Name: "<<itemName;
	cout<<"\nItem Kod: "<<itemKod;
	cout<<"\nItem Price: "<<itemPrice;
	cout<<"\nQuantity In Stock: "<<qttyInStock;
	cout<<"\nTotal Earned: "<<totalEarned;
	
}

