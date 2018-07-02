/*
    Program : File Student
*/

#include<iostream>
#include<fstream>

using namespace std;

int main(){
	
	ofstream fout;
	int exam, course,total;
	char name[81];
	char num[13];
	
	
	
	cout<<"No Matrik"<<endl;
	cin.getline(num,13);
	
	fout.open(num);
	
	cout<<"Name:"<<endl;
	cin.getline(name,81);
	cout<<"Final Exam: "<<endl;
	cin>>exam;
	cout<<"Course Work Score"<<endl;
	cin>>course;
	
	total = exam + course;
	
	fout<<"Name: "<<name<<endl;
	fout<<"Student ID: "<<num<<endl;
	fout<<"Final Exam: "<<exam<<endl;
	fout<<"Course Work Score: "<<course<<endl;
	fout<<"Student Result: "<<total<<endl;
	
	fout.close();
	return 0;
}
