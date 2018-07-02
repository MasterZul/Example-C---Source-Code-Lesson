/*
    Program : Finding Highest Value
*/

#include<iostream>
using namespace std;

int main(){

int n, highV;

cout<<"Enter a Number"<<endl;
cin>>n;

	highV = n;
	
	while (n!=0){

     if(highV < n){
     
	 highV = n;
	 }

cout<<"Enter a Number (Enter 0 number to stop the calculate)"<<endl;
cin>>n;

}

cout<<"Highest Value is: "<<highV<<endl;

return 0;
}
