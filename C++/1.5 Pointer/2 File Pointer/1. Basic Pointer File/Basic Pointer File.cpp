#include<iostream>
#include<fstream>
using namespace std;

int main(){

string name;

string filename;
ofstream fout;
cout<<"Enter the File name"<<endl;
cin>>filename;

fout.open(filename);

string arr[] = "Muhammad Zulkifli";
string *ptr;

cout<<"Enter Name;"<<endl;
getline(cin,name);

ptr = arr;



cout<<*ptr<<endl;;
fout<<name;
fout.close();
}
