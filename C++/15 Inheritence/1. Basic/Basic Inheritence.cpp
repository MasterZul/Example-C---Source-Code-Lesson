#include<iostream>
using namespace std;

class A{



protected:

int a,b;

public:

A(int aaa, int bbb){

a = aaa;
b = bbb;

}

void display(){


cout<<"A is :"<<a<<endl;
cout<<"B is :"<<b<<endl;
cout<<"This is Display in A Class:"<<endl;
cout<<endl;
}

};

class Bored: public A{

public:

Bored(int a, int b):A(a,b){
}


void display(){



cout<<a<<endl;
cout<<"And This is also Display in Bored Class:"<<endl;
}
};

int main(){

Bored ab(5,6);
cout<<"The Plane"<<endl;
ab.Bored::display(); // This display in A class if want Bored Class Change to ab.A::display();




}
