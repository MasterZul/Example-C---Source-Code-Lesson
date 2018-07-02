#include <stdio.h>
#include<iostream>
#include<string.h>
#include<cctype>
using namespace std;

int main(){

char sample1[10];
char sample2[10];


cout<<"Enter the name: "<<endl;
cin>>sample1;
cout<<"Enter the name2: "<<endl;
cin>>sample2;

if (strcmp(sample1, sample2) < 0)
cout<<"It Success"<<endl;

else
cout<<"Error"<<endl;





return 0;
}
