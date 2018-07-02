#include<iostream>
using namespace std;

int main(){

int x=51, y=43;
int *p = &x;
int *q = &y;
*q = 98;
*p = *q ;
cout<<"x = "<<x<<endl<<"y = "<<y<<endl<<"*p = "<<*p<<endl<<"*q = "<<*q<<endl;
return 0;



}
