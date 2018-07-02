/*
    Program : Create Student Report file input
*/

#include<iostream>
#include<fstream>

using namespace std;

int main(){
	
	ifstream fin;
	ofstream fout;
	int exam, score, x, n;
	char name[101];
	char num[81];
	char id[13];
	
	
	
	cout<<"Enter Input File include .txt (Example: report.txt)"<<endl;              /*the name of output file*/
	cin>>num;
	fin.open(num);

while(!fin.eof())	
	{
	                     /*input of the file*/
fin>>id>>exam>>score;	
fin.ignore();
fin.getline(name, 81);

		fout.open(id);
	
	fout<<"No Matrik:"<<id<<endl;
	fout<<"Name Student:"<<name<<endl;
	fout<<"Final Score: "<<exam<<endl;
	fout<<"Course Work Score: "<<score<<endl;

	
	                   /*output of the file*/
	fout.close();

}

	
	
	fin.close();

	return 0;
}
