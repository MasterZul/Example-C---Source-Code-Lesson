/*
    Program : Find Grade More Advanced
*/

#include<iostream>
using namespace std;

char Grade(float);
float Percentage (float,float,float);

int main(){
	
	char grade;
    int Quiz, Assigment, Test, Exam;
	float pQuiz = 0, pAssigment = 0, pTest = 0, pExam = 0, totalP = 0;
	
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

char Grade (float p){
	
	char g;
	
	if((p>=80)&&(p<=100)){
		
		g = 'A';
		}
	   
	   else if((p>=60)&&(p<=79)){
		g = 'B';
		}
		
		else if((p>=40)&&(p<=59)){
		g = 'C';
		}
		
		else if((p>=35)&&(p<=39)){
	    g = 'D';
	}
		
		else if((p>=0)&&(p<=34)){
	    g = 'E';
	}
return g;
}

float Percentage (float x,float y,float z){
	
	float per;
	per = (x/y)*z;
	return per;

}


