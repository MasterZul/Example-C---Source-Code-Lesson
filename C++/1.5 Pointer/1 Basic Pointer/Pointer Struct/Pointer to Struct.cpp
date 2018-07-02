#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

int main (){

struct LecturerInfo{

string name;
string room;
int extension;


};

struct Lecturer{

int ID;
LecturerInfo contact;
string deparment;
string facultyCode;

};

Lecturer lecturerTP2 [10]= {{1234, {"Dayang Norhayati","305-03", 32354},"Software Engineering", "FC"},
                   {5678,{"Norazah Yusof","305-06", 32341},"Software Engineering", "FC"},
					{9101,{"Haswadi Hasan","438-08", 32374},"Computer Science", "FC"} };                                                               

Lecturer *me;
Lecturer *ptr;

ptr = &lecturerTP2[2];
me = lecturerTP2;
   
int size;

cout<<"How many Lecturer You want add in data (Less then 7) => ";
cin>>size;


for(int i = 3; i<size + 3; i++){

cout<<endl;
cout<<"Enter Lecturer ID: ";
 cin>>me[i].ID;

cin.ignore();
cout<<"Enter Lecturer Name: ";
 getline(cin, me[i].contact.name);
 
 cout<<"Enter Lecturer Room: ";
 cin>>me[i].contact.room;

 
 
 cout<<"Enter Lecturer Extension: ";
 cin>>me[i].contact.extension;
 
 cin.ignore();
 
 cout<<"Enter Lecturer Deparment: ";
  getline(cin, me[i].deparment);

cout<<"Enter Lecturer FacultyCode: ";
  cin>> me[i].facultyCode;


}

ofstream fout;
fout.open("LecturerTP2");

fout<<"ID"<<"       "<<"Name"<<"              "<<"Room"<<"       "<<"Extension"<<"       "<<"Deparment"<<"         "<<"Faculty Code"<<endl;
 for(int i = 0; i<size + 3; i++){

 
 fout<<me[i].ID<<setw(20)<<me[i].contact.name<<"  "<<me[i].contact.room <<"      " <<me[i].contact.extension <<setw(25)<<me[i].deparment <<"     "<<me[i].facultyCode <<endl;
 
 
 
 
 } 
   
fout.close();
   
 return 0;

}
