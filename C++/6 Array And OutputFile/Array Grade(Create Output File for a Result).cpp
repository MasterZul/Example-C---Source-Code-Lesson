/*
    Program : Array Grade(Create Output File for a Result)
*/

#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
#define F (input<0) || (input>mx)

using namespace std;

char Grade(int);
float Percentage (float,float,float);
float ReadScore (string, int);
void DisplayOutput (float, char);
void FileOutput (float, char );

int main(){
	
	char grade;
    int  totalint = 0;
	float pQuiz = 0, pAssigment = 0, pTest = 0, pExam = 0,totalP = 0,Quiz, Assigment, Test, Exam;
	
	
	Quiz = ReadScore("Quiz",80);
	Assigment = ReadScore("Assigment", 100);
	Test = ReadScore("Test", 58);
	Exam = ReadScore("Examination", 70);
	

pQuiz=Percentage(Quiz, 80, 20);
pAssigment=Percentage(Assigment, 100, 20);
pTest=Percentage(Test , 58, 30);
pExam=Percentage(Exam, 70, 30);

totalP = pQuiz + pAssigment + pTest + pExam;
	
totalint = totalP;

grade=Grade(totalint);
	
DisplayOutput(totalP, grade);

 FileOutput (totalP, grade);

return 0;	
}

char Grade (int p){
	
	char g[101];


for(int count = 80; count<101; count++ ){
    g[count] = 'A';
}
for(int count = 60; count<80; count++ ){
    g[count] = 'B';
}
for(int count = 40; count<60; count++ ){
    g[count] = 'C';
}
	for(int count = 35; count<40; count++ ){
    g[count] = 'D';
}
	for(int count = 0; count<35; count++ ){
    g[count] = 'E';
}	
	
int count = p;
return g[count];
	
	
}

float Percentage (float x,float y,float z){
	
	float per;
	per = (x/y)*z;
	return per;

}

float ReadScore(string prompt,int mx){

float input;

do
{


cout<<endl;
cout<<"Enter the score for "<<prompt<<" (only "<<mx<<" and below)"<<endl;
cin>>input;

if (F){

cout<<endl;
cout<<"Invalid Please Try"<<endl;
}

}while(F);

return input;
}
void DisplayOutput (float total, char grad){

   cout<<endl;
    cout<<showpoint<<fixed;
	cout<<"THe total Percentage: "<<setprecision(1)<<total<<endl;
	cout<<"The Grade: "<<setprecision(1)<<grad<<endl;


}

void FileOutput (float result, char G){
	
char file[81];

ofstream fout;

cout<<endl;
cout<<"Enter The OutputFile: "<<endl;
cin>>file;

fout.open(file);	


fout<<showpoint<<fixed;
fout<<"THe total Percentage: "<<setprecision(1)<<result<<endl;
fout<<"THe  Grade: "<<setprecision(1)<<G<<endl;

fout.close();
}
