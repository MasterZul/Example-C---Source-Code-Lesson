#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

int main(){

 char number[13];


int year[13];
int y;

cout<<"Enter the IC Number: ";
cin.getline(number,13);

for(int i = 0; i<13; i++){

  year[i] = number[i] -'0';

}

if(year[0] > 1){

 y  = 1900  + year[0]*10 + year[1];
cout<<y<<endl;
}
else  {
y  = 2000  + year[0]*10 + year[1];
cout<<y<<endl;
}

int year2 = 2015 - y;
cout<<"Year: "<<year2;
cout<<endl;
if ( year[11]%2 == 0) {

cout << year[11] << " female"; 
} 

else {

cout << year[11] << "male"; 
}
}


