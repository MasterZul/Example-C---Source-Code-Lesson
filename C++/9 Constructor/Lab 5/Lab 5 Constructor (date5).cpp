/*
    Program : Constructor Lab 5
*/

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class subject
{
	
	char subjectName[20];
	char kod[8];
	int credit;
	
	public:
	subject(char const *a ="xxx", char const *b ="kkk", int k=3);
	~subject (){cout<<"\nDESTROY OBJECT";}
	void getDetail();
	void changeDetail();
	
};


subject::subject(char const *sub, char const *kd, int kre)
{
	strcpy(subjectName, sub);
	strcpy(kod,kd);
	credit = kre;
}

void subject::getDetail()

{
	cout<<"\n\nSubject Name : "<<subjectName;
	cout<<"\n\nSubject Code : "<<kod;
	cout<<"\n\nCredit hours : "<<credit;
	
}


void subject::changeDetail()

{
	cout<<"\nInsert new subject name : ";
	cin>>subjectName;
	cout<<"\nInsert new subject code : ";
	cin>>kod;
	
}

//changedSubject() implementaion
//write code based on the comment given

 subject changeSubject()

{
	
	//declare instance of subject
	subject object;
	//call function changeDetail () through the instance.
	object.changeDetail();
	cout<<"\n Get new information for the subject.";
	
	//call function getDetail() through the instance;
	object.getDetail();
	//return the instance
	return object;
}

int main()
{
	subject sd("Struktur Data C++" ,"SZK3043 ");
	sd.getDetail();
	sd = changeSubject();
	
	//call a function taht return object subject
	
	cout<<"\n Semak maklumat subject setelah kembali ke main().";
	
	sd.getDetail();
	getch();
	
};
