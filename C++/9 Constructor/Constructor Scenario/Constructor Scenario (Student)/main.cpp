#include<iostream>
#include "Student.h"
#include<conio.h>
#include<fstream>
#include<string.h>
using namespace std;

int main(){
	
ifstream fin;
Student S[2];

char sName[20];
char mNumb[20];
char answer[25];
char grade;
float marks;

char Name[20];


fin.open("data.txt");

while(!fin.eof()){
for(int i = 0; i<3; i++){


fin.getline(sName,7,' ');

fin.getline(mNumb,7,' ');

fin.getline(answer,28,' ');

S[i].getData(sName,mNumb,answer);
S[i].gradeTest();
S[i].PrintDetail();
}

}




fin.close();
}
