/*
    Program : Getline with fin.ignore using File
*/

#include<iostream>
#include<fstream>

using namespace std;

int main(){

ifstream fin;

string id[2];
string name[2];

fin.open("zul.txt");

int i = 0;
while(fin>>id[i]){
fin.ignore();
getline(fin, name[i]);
i++;
}

for(int i =0; i<2; i++){

cout<<"ID: "<<id[i]<<endl;
cout<<"NAME: "<<name[i]<<endl;
cout<<endl;
}





}
