/*
    Program : Using atoi
*/

#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
#include<iomanip>

using namespace std;

int main (){

string myString[2];
	
 myString[1] = "45";
int value = atoi(myString[1].c_str()); //value = 45 
cout<<value;
	
}
