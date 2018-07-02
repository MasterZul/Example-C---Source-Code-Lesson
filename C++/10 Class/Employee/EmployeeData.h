#ifndef EMPLOYEEDATA_H
#define EMPLOYEEDATA_H
#include<string>

using namespace std;

class Employee{

private:
	string name;
	int idNumber;
	string department;
	string position;
	
public:

Employee(string,int,string,string);
Employee();

void setName(string n){ name = n;}
void setIdNumber(int i){ idNumber = i;}
void setDeparment(string d){ department = d;}
void setPosition(string p){ position = p;}

string getName() const { return name; }
int getIdNumber() const{ return idNumber; }
string getDeparment() const{ return department; }
string getPosition() const{ return position; }

void print(Employee&) const;

};

Employee::Employee(string n, int id,string depart, string posis ){

name = n;
idNumber = id;
department = depart;
position = posis;

}

Employee::Employee(){

name = "";
idNumber = 0;
deparment ="";
position = "";

}


void Employee::print(Employee &a) const{

cout<<"Name:  "<<a.name<<endl;
cout<<"ID Number:  "<<a.idNumber<<endl;
cout<<"Deparment: "<<a.department<<endl;
cout<<"Position: "<<a.position<<endl;
cout<<endl;


}
#endif


