/*
    Program : Return Struct Function
*/

#include<iostream>
#include<iomanip>

using namespace std;

struct Circle{

float radius;
float diameter;
float area;

};

Circle getData(){


Circle r;

r.radius = 10.0;
r.diameter =20.0;
r.area =3.142;
return r;
}
int main(){
	
	Circle c;
	c = getData();
	
	cout<<c.radius<<endl;
	cout<<c.diameter<<endl;
	cout<<c.area<<endl;
}
