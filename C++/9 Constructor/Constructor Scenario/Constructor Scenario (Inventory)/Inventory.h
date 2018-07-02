#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class Inventory{
	
	private:
		
		ifstream fin;
		char itemName [20];
		char itemKod [20];
		float itemPrice;
		int qttyInStock;
		float totalEarned;
		
	public:
		
		Inventory();
		void getData(char const itemName[],char const itemKod[],int qttyInStock, float itemPrice);
		void buy(int);
		void addStock();
		void discountPrice();
		void printDetail();
		
};
