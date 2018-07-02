#include<iostream>
using namespace std;

class Circle{

int radius;

public:

void set_value(int);
double getRadius(){return radius;}

double getArea() {return 3.142*radius*radius;}


};

void Circle::set_value(int x){

radius = x;

}



int main(){
	
	Circle fun;
	int num;  
	
cout<<"Enter the radius: "<<endl;
cin>>num;
	
fun.set_value(num);

cout<<"[Circle]"<<endl;
cout<<"Radius = "<<fun.getRadius()<<endl;
cout<<"Area = "<<fun.getArea();
	
}
