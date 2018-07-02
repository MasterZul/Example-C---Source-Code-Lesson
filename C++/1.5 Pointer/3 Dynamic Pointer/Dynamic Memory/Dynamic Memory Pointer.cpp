#include<iostream>
using namespace std;
int *getStudentID (int studentNum)
{
	int *S;
	S=new int[studentNum];
	for(int count=0; count<5;count++)
	{
		cout<<"Enter student ID: ";
		cin>>S[count];
	}
return S;
}
int main()
{

	
	int *stu;
	stu= new int[5];
	
	//stu=studentsID;
	
	stu=getStudentID(5);
	
	for(int count=0; count<5;count++)
	{
		cout<<stu[count]<<endl;
	}
	
	delete [] stu;
return 0;
}
