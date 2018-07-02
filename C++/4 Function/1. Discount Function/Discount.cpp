/*
    Program : Discount
*/

#include<iostream>
#include<iomanip>
using namespace std;

int discount(float);

int main(){


int DiscountRate;
float price, DiscountPrice;

cout<<setprecision(2)<<"Enter the item price (RM)";
cin>>price;

DiscountRate = discount(price);


DiscountPrice = price*(100-DiscountRate)*0.01;

cout<<showpoint<<fixed;
cout<<"Discount Rate:"<<DiscountRate<<"%"<<endl;
cout<<setprecision(2)<<"Discount Price:RM"<<DiscountPrice<<endl; 


return 0;
}
int discount(float price){


int D;
if(price<10){
	D = 0;
	
}

else if ((price>=10)&&(price<=50)){


D = 5;
}
else{
	D = 10;
	
	
}

return D;
}


