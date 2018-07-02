#include<iostream>
using namespace std;

int *PointerArray(int size){

int *P;
P = new int[5];

for(int i = 0; i<5; i++){

cout<<"Enter Number"<<endl;
cin>>P[i];

}
return P;
}

int main(){

int S[5];



S = PointerArray(5);

for(int i = 0; i<5; i++){

cout<<"The Number: "<<S[i]<<endl;
}

return 0;
}
