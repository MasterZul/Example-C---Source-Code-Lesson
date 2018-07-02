#include<iostream>
using namespace std;

int main(){

int number[] = {4,7,11};
int *p;
p = number;

(*p)++;
cout<<"The Number: "<<*p<<endl;


}
