/*
    Program : Get last digit of string
*/

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int getCredit(string code){

char last = code[7];

switch (last){

case '1': return 1;
case '2': return 2;
case '3': return 3;
case '4': return 4;

}
return 0;
}


int main(){

string code;
cout<<getCredit("SCSR1013")<<endl;
return 0;
}
