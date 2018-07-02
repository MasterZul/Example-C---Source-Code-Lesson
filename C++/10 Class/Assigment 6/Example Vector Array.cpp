#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Person{

private:
	
string name;
int age;
static int total;

public:

Person(string name, int age){

this->name = name;
this->age = age;

}

void print(){

cout<<"The Name: "<<name<<endl;
cout<<"The Age: "<<age<<endl;


}

void calc(){

total = total + age;
cout<<"The Num: "<<total<<endl;;
cout<<endl;
}

};

int Person:: total = 0;

int main(){

vector<Person*> obj(10);


for(int i = 0; i<2; i++){

obj[i] = new Person("Muhammad Zulkifli", 20);

obj[i]->print();
obj[i]->calc();
}

}
