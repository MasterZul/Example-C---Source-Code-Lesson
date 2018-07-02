/*
    Program : Constructor Lab 4
*/

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class subject{

private:
	char subjectName[20];
	char kod[8];
	int credit;
	
public:
	
	subject (char const *,char const *, int k = 3);
	
	~subject(){
		
	cout<<"\nDestroy subjeck instance";	
	}
	void getDetail();
	friend void changeSubject(subject&);

};

subject::subject(char const *sub, char const *kd, int kre)
{
 
 strcpy(subjectName,sub);
 strcpy(kod,kd);
 credit = kre;
 
 }
 
 void subject::getDetail()
 {
 	
 	cout<<"\nSubject Name : "<<subjectName;
 	cout<<"\nSubject Code : "<<kod;
 	cout<<"\nCredit hours : "<<credit;
  } 
  
  //friend function implementaion
  
  void changeSubject(subject &sub)
  {
  	cout<<"\nInsert new subject name: ";
  	cin>>sub.subjectName;
  	cout<<"\nInsert new subject code: ";
  	cin>>sub.kod;
  	cout<<"\nGet new information for the subject.";
  	sub.getDetail();
  	
  	
  }
  
  
  int main(){
 
 subject DS("Data Structure C++","SCJ2013");
 DS.getDetail();
 changeSubject(DS);
 cout<<"\n View the subejct information again: ";
 DS.getDetail();
 getch();
 
 
  };
