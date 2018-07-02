#include<iostream>
#include<string>
using namespace std;


//class Room
class Room{

private:
	  string Name;
      string room;
public:

Room(string nama, string r)
{
Name = nama;
room = r;
}


string getName(){

return Name+ " " + room;
}

};




//House Class
class House{

private:
	string address;
	Room roomType;
	
public:
	
House(string nama,string room ):roomType(nama, room){
	

	
}

void print(){

cout<<"The College Name and Room Number: "<<roomType.getName()<<endl;

}


};



int main(){

string first, second;
cout<<"Enter the College Name: ";
cin>>first;

cout<<"Enter the Room Number: ";
cin>>second;

cout<<endl;
House stu(first,second);
stu.print();
}
