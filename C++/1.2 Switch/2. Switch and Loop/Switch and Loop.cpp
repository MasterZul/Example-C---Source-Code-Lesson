/*
    Program : Switch and Loop
*/

#include<iostream>
using namespace std;

int main(){

for (int i = 0; i<4; i++){

switch(i){

case 0 : cout<<"A"<<endl;
case 1 : cout<<"B"<<endl; continue;
case 2 : cout<<"C"<<endl;break;
default : cout<<"D"<<endl;break;


}

cout<<"E"<<endl;






}
return 0;
}
