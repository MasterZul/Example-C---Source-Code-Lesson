// Array in Aggreration
#include<iostream>
#include<string>
using namespace std;

class Person{

private:
	string name;
	int age;
	static int count;
	
public:
	
	Person(){
	
	name ="";
	age = 0;
	}
	
	
Person(string name, int age){


this->name = name;
this->age = age;
count++;
}

int getAge(){



return age;
}

string getName(){



return name;
}


static int getNum(){


return count;
}



};


class Course{

private:
	string course;
	Person sorang[];

public:
	Course(string course, Person p){
	
	this->course = course;
   sorang[Person::getNum()] = p;
	}




void print(){

cout<<" The Name: "<<sorang[1].getName()<<endl;
cout<<" The Age: "<<sorang[1].getAge()<<endl;


cout<<endl;
cout<<"The Count is: "<<sorang->getNum()<<endl;

}



};

int Person::count = 0;

int main(){


Person obj("Muhammad Zulkifli", 20);



Course sub("Computeran", obj);




sub.print();



}
