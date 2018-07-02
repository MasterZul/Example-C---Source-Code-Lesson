#include<iostream>

class Student{
	
	private:
		
		char studentName [20];
		char matrixNumber [20];
		char answer [25];
		char grade;
		float marks;
		
		
	public:
	
	Student();
	void getData(char const studentName[],char const matrixNumber[],char answer[]);
	void gradeTest();
	void PrintDetail();
	
};
