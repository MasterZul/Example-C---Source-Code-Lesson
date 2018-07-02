#include<iostream>
#include<string>
using namespace std;

class Name{

private:
	string firstname;
	string lastname;
	
public:
	Name(string first,string last)
	{
	
	firstname = first;
	lastname = last;
}

string getFullName(){
return firstname + " " + lastname;
}


};

class Student{

private:
	Name nama;
	string address;
	
	public:
		Student(string, string, string);
		void print();
		
		

};

Student::Student(string first, string last, string address):nama(first, last){

this->address=address;
}

void Student::print(){


cout<<nama.getFullName()<<"\n"<< address<<endl;
}

int main(){

string first, last;
cout<<"Enter the First and Lastname "<<endl;
cin>>first;
cin>>last;
cout<<endl;
Student stu1(first, last, "Jalan Pulai 13/2, Skudai, Johor, 81310");
stu1.print();
}
