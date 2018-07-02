#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;

class Passenger{

private:
string name;
int age;	
static int numpassenger;

public:

Passenger(string name, int age){

this->name = name;
this->age = age;

 numpassenger++;
}

static int getNumPassenger() 
{
return numpassenger;
}

};

class Time{

private:

int hour;
int minute;

public:

Time(int hour, int minute){

this->hour = hour;
this->minute = minute;
}

int getHour( ){

return hour;
}

int getMinute(){

return minute;
}


};

class Flight{

private:

string id;
string destination;
Time *depart;
Time *arrival;	
Passenger *passengerList;
	
public:

Flight(string id,string destination ,Time *d,Time *a){

this->id = id;
this->destination = destination; 
depart = d;
arrival = a;

}

void addPassenger(Passenger *subject){

passengerList = subject;

}

void printInfo(){

cout<<fixed<<showpoint;
cout<<"Flight NO: "<<id<<endl;
cout<<"Destination: "<<destination<<endl;
cout<<"Departure: "<<depart->getHour()<<":"<<setw(2)<<setfill('0')<<depart->getMinute()<<endl;
cout<<"Arrival: "<<arrival->getHour()<<":"<<setw(2)<<setfill('0')<<arrival->getMinute()<<endl;
}

};

 int Passenger::numpassenger = 0;
int main(){

int count, age;
string name;

cout<<"Plane System"<<endl;
cout<<"-------------------------"<<endl;
cout<<endl;

cout<<"How Many Passenger You Want Add: "<<endl;
cin>>count;
cout<<endl;

vector<Passenger*> subj(count);



for(int i = 0; i<count; i++){
cout<<"Please Enter Passenger Name: ";
cin.ignore();
getline(cin, name);

cout<<"Please Enter Passenger Age: ";
cin>>age;
cout<<endl;
subj[i] =  new Passenger(name, age);
}

Time *depart1 = new Time(8, 00);
Time *arrival2 = new Time(9, 01);

Flight psg1("MH3120","Johor Bahru", depart1, arrival2);

psg1.addPassenger(subj[0]);
psg1.printInfo();
cout<<"Number of Passenger: "<<Passenger::getNumPassenger()<<endl;
}




