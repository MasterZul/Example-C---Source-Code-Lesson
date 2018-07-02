#include<iostream>
#include<string>
using namespace std;

class Cat{

private:
	
string name;
int age;
int yearAdopt;
static int count;

public:
	
	Cat(){
	
	name ="";
	age = 0;
	yearAdopt = 0;
	
	
	}
Cat(string n, int a, int year){

this->name = n;
this->age = a;
this->yearAdopt = year;

count++;
}

string getName(){

return name;
}

int getAge(){

return age;
}

int CalcNumOfYear(){

yearAdopt = 2015 - yearAdopt;

return yearAdopt;
}


static int getNumCat() 
{
return count;
}



};





class Person{

private:
	
string name;
string address;
Cat myCat[3];	

public:

Person(string n, string d){

name = n;
address = d;


}

void adopt(Cat kucing){

 myCat[Cat::getNumCat()]= kucing;

}

void print(){

cout<<"Owner Name: "<<name<<endl;
cout<<"Owner Address: "<<address<<endl;

int count = Cat::getNumCat();

for(int i = 1; i<count + 1; i++){

cout<<endl;
cout<<"Cat's Name': "<<myCat[i].getName()<<endl;
cout<<"Cat's Age: "<<myCat[i].getAge()<< " years old"<<endl;
cout<<"Year of Cat being Adopted: "<<myCat[i].CalcNumOfYear()<<"years"<<endl;

}
}




};

int Cat::count = 0;


int main(){
Cat obj("Hakimi", 5, 2013);
Person per("Muhammad Zulkifli", "Jalan Johran 1 19/24a");



per.adopt(obj);


Cat obj1("Nat", 2, 2013);
per.adopt(obj1);



per.print();
}
