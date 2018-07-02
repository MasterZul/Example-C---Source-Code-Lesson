/*
    Program : Struct Function
*/

#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

struct Rectangle{
	
	float length;
	float width;
	float area;
};

void multiply(Rectangle& r){

r.area = r.length*r.width;

}


int main(){

Rectangle All;
Rectangle Tri;

cout<<"Enter the length: "<<endl;
cin>>All.length;
cout<<"Enter the Width: "<<endl;
cin>>All.width;

cout<<"Enter the length for Tri : "<<endl;
cin>>Tri.length;
cout<<"Enter the Widthfor Tri : "<<endl;
cin>>Tri.width;


multiply(All);
multiply(Tri);

cout<<"Area: "<<All.area<<endl;
cout<<"Tri: "<<Tri.area<<endl;
}
