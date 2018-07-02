#include<iostream>
using namespace std;

int main(){

char data;
char letter;



do{


cout<<" Continue to enter the data or quit? Press C to repeat or Q to quit: ";
cin>>letter;

if(letter == 'Q'||letter =='q')break;

cout<<endl;
cout<<"Enter the Data: ";
cin>>data;

if(ispunct(data)){
cout<<"You have not entered the correct character"<<endl;;
cout<<endl;
}
}while(letter == 'C'||letter =='c');





}
