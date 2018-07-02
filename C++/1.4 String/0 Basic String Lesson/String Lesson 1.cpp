#include<iostream>
#include<cstring>
#include<cctype>>
using namespace std;

int main(){

char number;
int n;
int total;

cout<<"Enter the NUmber or enter N or n to quit: ";

while(cin>>number){

if((number == 'N') || (number == 'n')){
break;
}

else if(isdigit(number)){

n = number -'0';
total = total + n;

}

cout<<"Enter the NUmber or enter N or n to quit: ";
}
cout<<total<<endl;
return 0;
}
