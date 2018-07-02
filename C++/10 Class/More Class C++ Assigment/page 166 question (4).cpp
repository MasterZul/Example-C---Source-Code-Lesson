#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Product{

public:
	Product (double k)
	{
     prodCode = 0;
     price = k;
	}

int getProdCode()
{
return prodCode;
}

void setProdCode(int k)
{
prodCode = k;
}

double getPrice()
{
return price;
}

void setPrice(double p)
{
price = p;
}

friend ostream &operator<<( ostream &output, const Product &P){

output<<fixed<<showpoint;
output << "Product Code: " << P.prodCode<<endl<< "Product Size : "<<setprecision(2) << P.price;
         return output; 
}
private:
	int prodCode;
	double price;
	
	
	
};

int main()
{
int c = 789;
double p = 12.50;

Product P1(p);



P1.setProdCode(c);
P1.setPrice(p);

cout<<""<<P1<<endl;

}
