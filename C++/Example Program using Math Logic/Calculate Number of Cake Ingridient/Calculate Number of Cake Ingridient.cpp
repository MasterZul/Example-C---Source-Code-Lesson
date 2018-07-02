/*
    Program : Calculate Number of Cake Ingridient
*/

#include<iostream>
using namespace std;
int main (){
	
int person, numCake;
float flour, sugar;

cout<<"How many number of person the customer wants to serve -";

cin>>person;

	
	
	
	numCake = (person/5.0)+ 0.9;
	
	flour = numCake * 0.75;
	sugar = numCake * 0.4;
	
	cout<<"Flour = "<<flour<<endl;
	cout<<"Sugar = "<<sugar<<endl;
	cout<<"Number Of Cake = "<<numCake<<endl;
	
	return 0;

	
	

}
