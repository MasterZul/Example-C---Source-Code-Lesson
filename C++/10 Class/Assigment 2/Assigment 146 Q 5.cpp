#include<iostream>
#include<cstdlib>
using namespace std;

class Stock{

private:
	string code;
	string sName;
	double closePrice;
	double currentPrice;
	
	public:
		Stock(string,string,double);

void setClosePrice(double);
void setCurrentPrice(double);


string getCode() const {return code;};
string getName() const  {return sName;};
 double getClosePrice() const  {return closePrice;};
double getCurrentPrice() const  {return currentPrice;};

float findPercentage () const;

void print() const;

};

Stock::Stock(string c, string name, double price){

code = c;
sName = name;
closePrice = price;

}
 
void Stock::setClosePrice(double x)
{
closePrice = x;

}
 
 void Stock::setCurrentPrice(double y)
{
currentPrice = y;

}
 
float Stock::findPercentage() const{

if(currentPrice>closePrice){

return ((currentPrice - closePrice)/currentPrice)*100;
}
else{

return ((closePrice - currentPrice)/closePrice)*100;
}


}
 
void Stock::print() const{

cout<<"Stock's Code:  "<<code<<endl;
cout<<"Stock's Name:  "<<sName<<endl;
cout<<"Stock's Close Price: "<<closePrice<<endl;
cout<<"Stock's Current Price: "<<currentPrice<<endl;



}
 
 
 
 
 int main(){
 
 Stock master("MSB", "Maybank", 100);
 master.setCurrentPrice(90);
 master.print();
 cout<<endl;
 cout<<"Stock's Price Percenatge': "<<master.findPercentage()<<"%"<<endl;
 
 
 cout<<endl;
 
 Stock *NewMaster;
 NewMaster = new Stock("TNB", "Tenaga Berhad", 130.50);
 NewMaster->setCurrentPrice(160.75);
 
 
 
 NewMaster->print();
 cout<<endl;
 cout<<"Stock's Price Percenatge': "<<NewMaster->findPercentage()<<"%"<<endl;
 
 
 
 return 0;
 }
