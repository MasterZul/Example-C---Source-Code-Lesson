/*
    Program : Array (Find a grade score)
*/

#include<iostream>
using namespace std;

char Grade(int);
float Percentage (float,float,float);

int main(){
	
	char grade;
    int Quiz, Assigment, Test, Exam, totalP = 0;;
	float pQuiz = 0, pAssigment = 0, pTest = 0, pExam = 0;
	
	cout<<"Enter the Quiz score: "<<endl;
	cin>>Quiz;
	cout<<"Enter the Assigment score: "<<endl;
	cin>>Assigment;
	cout<<"Enter the Test score: "<<endl;
	cin>>Test;
	cout<<"Enter the Exam score: "<<endl;
	cin>>Exam;

pQuiz=Percentage(Quiz, 80, 20);
pAssigment=Percentage(Assigment, 100, 20);
pTest=Percentage(Test , 58, 30);
pExam=Percentage(Exam, 70, 30);

totalP = pQuiz + pAssigment + pTest + pExam;
	
	
	grade=Grade(totalP);
	
	cout<<"THe total Percentage: "<<totalP<<endl;
	cout<<"The Grade: "<<grade<<endl;
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
