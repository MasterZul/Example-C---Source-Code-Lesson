#include<iostream>
#include<string>
using namespace std;

class Passenger{

protected:
	
string name;
int age;

public:
	
Passenger(string name, int age){

this->name = name;
this->age = age;
}

};

class Kids: public Passenger{

protected:
	
string parentName;
public:

Kids(string first, int second, string third):Passenger(third, second){
	
this->parentName = first;
}

void printDetails(){

cout<<"Name: "<<name<<endl;
cout<<"Age: "<<age<<endl;
cout<<"Parent Name: "<<parentName<<endl;

}
};

int main(){

cout<<"Lets Begin"<<endl;
cout<<endl;
Kids obj("Muhammad", 30, "Hakimi");

obj.printDetails();
}
