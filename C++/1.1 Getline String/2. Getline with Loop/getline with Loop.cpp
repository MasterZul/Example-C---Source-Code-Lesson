/*
    Program : Getline with Loop
*/

#include<iostream>
#include<fstream>

using namespace std;

int main(){
	
	string ID[3];
	string name[3];
	
	cout<<"Please Enter the ID and Name three times: "<<endl;
	cout<<"Since it loop three times: "<<endl<<endl;
	
	for(int i = 0; i<3; i++){
	
	cout<<"Enter the ID: ";
	cin>>ID[i];
	
	cin.ignore();
	cout<<"Enter the Name: ";
	getline(cin,name[i]);
	cout<<endl;
	
	}
	
		for(int i = 0; i<3; i++){
	
	cout<<"NAME:"<<name[i]<<endl;
		cout<<"ID:"<<ID[i]<<endl;
	
	}
string last = ID[0];
cout<<"Last: "<<last[6]<<endl;


int n;
switch(last[6])
{

case '1': n = 1;
          break;
          
          

}

          cout<<"N: "<<n<<endl;

}


