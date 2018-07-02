/*
    Program : Finding biggest number in array
*/

#include<iostream>
using namespace std;

int numbers[6] = {23,44,55,12,89,43};

int main(){

int biggest = 0;


biggest = numbers[0];

for(int i = 1; i<6; i++){

if(biggest< numbers[i])
biggest = numbers[i];

}

for(int i = 0; i<6; i++){

if(biggest == numbers[i])
cout<<"("<<numbers[i]<<")"<<endl;

else
cout<<numbers[i]<<endl;
}


return 0;
}
