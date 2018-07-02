/*
    Program : Finding number of even number and average of it
*/

#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
#include<iomanip>
using namespace std;

void readFile(int num[10], int& n){


n = 0;
ifstream fin;
char filename[81];
cout<<"Enter The File Name must include .txt (Example: numbers1.txt): ";
cin>>filename;
fin.open(filename);

while(fin>>num[n]){


n++;
}

fin.close();
}

void SplitNumber(int num[10],int n,int neven[10],int nodd[10],int& z, int& y){

y = 0;
z = 0;
for(int i = 1; i<n; i++){

if(num[i]%2 == 0){

neven[y] = num[i];

y++;
}
else{

nodd[z] = num[i];

z++;

}


}
}
float average(int num[10],int  count){

float sum = 0;
for(int i = 0; i<count; i++){

sum = sum + num[i]; 

}
return sum/count;
}

void Display(int num[10],int ne,float avrg,int big ){

for(int i = 0; i<ne; i++){

if(big == num[i]){
cout<<"("<<num[i]<<")"<<endl;
}
else{

cout<<num[i]<<endl;
}
}
cout<<"The number of even number is "<<ne<<endl;
cout<<"The average of even numbers is "<<avrg<<endl;
cout<<endl;
}



int main(){

int numbers[10], n = 0,ne,no, even[10],odd[10];
readFile(numbers,n);
SplitNumber(numbers,n,even,odd,no,ne);

int bigOdd = odd[0];
for(int i = 1; i<no; i++){


if (bigOdd <= odd[i]);
bigOdd = odd[i];


}


int bigEven = even[0];
for(int i = 1; i<ne; i++){

if (bigEven <= even[i]){
bigEven = even[i];

}
}

float avrgEven = average(even,ne);
float avrgOdd =average(odd,no);

cout<<"The even numbers are:"<<endl;
Display(even,ne,avrgEven,bigEven);
cout<<"The odd numbers are:"<<endl;
Display(odd,no,avrgOdd,bigOdd);

return 0;
}
