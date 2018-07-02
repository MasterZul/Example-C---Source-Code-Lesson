#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

int main(){

char letter;



do{
cout<<"Press C to repeat or Q to quit: ";
cin>>letter;

if(letter == 'Q'||letter =='q'){
cout<<"Q"<<endl;
return 0;
}




}while(letter == 'C'||letter =='c');
cout<<"You Have Not enter correct character"<<endl;
}
