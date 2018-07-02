#ifndef STOCK_H
 #define STOCK_H
 #include <string>
 using namespace std;



class Stock{

private:
	string code;
	string sName;
	double closePrice;
	double currentPrice;
	
	public:
		Stock(string,string,double);

//Mutator
void setClosePrice(double);
void setCurrentPrice(double);

//Accensior
string getCode() const {return code;};
string getName() const  {return sName;};
 double getClosePrice() const  {return closePrice;};
double getCurrentPrice() const  {return currentPrice;};

float findPercentage () const;

void print(Stock&) const;

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
 
void Stock::print(Stock &a) const{

cout<<"Stock's Code:  "<<a.code<<endl;
cout<<"Stock's Name:  "<<a.sName<<endl;
cout<<"Stock's Close Price: "<<a.closePrice<<endl;
cout<<"Stock's Current Price: "<<a.currentPrice<<endl;



}
#endif
