
#include<iostream>
#include "Student.h"
#include<string.h>
using namespace std;

Student::Student(){
	
strcpy(studentName," ");
strcpy(matrixNumber," ");
strcpy(answer," ");	
grade = ' ';
marks = 0.0;
	
}

void Student::getData(char const Name[],char const Matrik[],char ans[]){
	
strcpy(studentName,Name);	
strcpy(matrixNumber,Matrik);
strcpy(answer,ans);
	
}

void Student::gradeTest(){
	
char correctanswer[] = {"BACDACBDABBACADAABACABCDA"};

	for(int i = 0; i<25; i++){
	
	if(correctanswer[i] == answer[i]){
		
			marks = marks + 4;	
		
	
		}
		else{
			
	marks = marks - 1;

		}
	
	
	}
	

if( marks > 74 && marks < 101){
	grade = 'A';
	
}
	if( marks > 64 && marks < 75){
	grade = 'B';
}

if( marks > 54 && marks < 65){
	grade = 'C';
}
if( marks > 44 && marks < 55){
	grade = 'D';
}
if( marks > 0 && marks < 45){
	grade = 'E';
}	
	
	}
	
void Student::PrintDetail(){
	
	cout<<"Student Name : "<<studentName<<endl;
	cout<<"Matrix Name : "<<matrixNumber<<endl;
	cout<<"Grade : "<<grade<<endl;
	cout<<"Marks : "<<marks<<endl;
	
	
	
}
	

