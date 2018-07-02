#include<iostream>
using namespace std;

class Address{

private: 
     string street;
     string town;
     string zip;
     string state;
     
public:
	Address (string street,string town, string zip, string state);
	string getFullAddress();
	
};

Address::Address(string street,string bandar, string zip, string state){

           this->street=street;
town=bandar;
this->zip=zip;
this->state=state;
}

string Address::getFullAddress(){

return street + "\n" + town + "\n" +state+ "\n"+zip;

}

class Student{

private:
	
	string firstname;
	string lastname;
	Address *home;
	
public:
	
	Student(string firstname, string lastname, Address *homeAdress);
	
	   void print();

};

Student::Student(string firstname, string lastname, Address *homeAdress){

   this->firstname = firstname;
   this->lastname=lastname;
   home = homeAdress;
   
}

void Student::print(){

cout<<firstname<<"\t"<<lastname<<"\n"<<home->getFullAddress()<<"\n";

}

int main(){

Address *add = new Address("Jalan Indah 18/1","Johor Bahru", "81200", "Johor");

Student stu1 ("Aini","Ahmad", add);
stu1.print();

}

