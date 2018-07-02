#include<iostream>
#include<string>
using namespace std;

 struct Student{
	string name;
	float score;
	string add;  // address
};

string Grade(float score){

	if(90 <= score) return "A+";
	if(80 <= score) return "A";
	if(75 <= score)	return "A-";
	if(70 <= score) return "B+";
	if(65 <= score) return "B";
	if(60 <= score) return "B-";
	if(55 <= score) return "C+";
	if(50 <= score) return "C";
	if(45 <= score) return "C-";
	if(40 <= score) return "D+";
	if(35 <= score) return "D";
	if(30 <= score) return "D-";	
	return "E";

}



const int MAXSTUD = 200;
int main(){
	

int studCount = 4;
Student list[MAXSTUD];



for(int i = 0; i<studCount; i++){

cout<<"Student number  ("<<i<<")"<<endl;
cout<<endl;
	
cout<<"Enter The Name: "<<endl;
cin>>list[i].name;
cout<<endl;
	
cout<<"Enter The Score: "<<endl;
cin>>list[i].score;
cout<<endl;
	
	
cout<<"Enter The Adress: "<<endl;
cin>>list[i].add;
cout<<endl;	
	
	}

float sum = 0;
for(int i = 0; i<studCount; i++){

sum = sum = list[i].score;

}

float avrg =  sum/studCount;
string grade = Grade(avrg);

cout<<"Avrg: "<<avrg<<endl;
cout<<"Grade: "<<grade<<endl;


}
