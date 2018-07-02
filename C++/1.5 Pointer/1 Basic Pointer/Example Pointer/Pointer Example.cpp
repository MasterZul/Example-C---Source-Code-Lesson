#include<iostream>
using namespace std;

int main(){

int size;
float *p;
int j = 1;
float total = 0;

cout<<"Please enter number of subjects taken: ";
cin>>size;
cout<<endl;
cout<<"Please enter the marks of each subject. "<<endl;
p = new float[size];
cout<<endl;
for(int i = 0; i<size; i++){

cout<<"Subject "<<j<<"  ";
cin>>p[i];
total = total + p[i];
j++;
}

cout<<"Total of Marks: "<<total<<endl;

cout<<"Average: "<<total/size<<endl;
delete [] p;
return 0;
}
