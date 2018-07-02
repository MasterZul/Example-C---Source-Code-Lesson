#include<iostream>
using namespace std;

int main(){

int i,j,*p,*q;
p = &i;
q = &j;
*p = 5;
*q = *p + i;
cout<<"i = "<<i<<endl<<"j = "<<j<<endl;
return 0;



}
