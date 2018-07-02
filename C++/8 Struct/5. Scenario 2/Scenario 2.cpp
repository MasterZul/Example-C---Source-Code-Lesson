/*
    Program : Scenario 2
*/


#include<iomanip>
#include<iostream>
using namespace std;

int main(){
	
	struct ScoreType{
	
	float raw;
	float per;
	
	};
		struct Student{
		
		string name[4];
		ScoreType score[4];
		
	};
	
	Student list[10];
	
	for(int i = 0; i<1; i++){
	for(int j = 0;j<2; j++){
	cout<<"Enter the List: "<<endl;
	cin>>list[i].name[j];
	
}
}
	
	cout<<endl;
	for(int i = 0; i<1; i++){
	for(int j = 0;j<2; j++){
	cout<<"Enter the Pay for RAW: "<<endl;
	cin>>list[i].score[j].raw;
}
	}
	
	
	cout<<endl;
		for(int i = 0; i<1; i++){
	for(int j = 0;j<2; j++){
	cout<<"Enter the Pay for PER"<<endl;
	cin>>list[i].score[j].per;
	
}
}
	

   for(int i = 0; i<1; i++){
	for(int j = 0;j<2; j++){
	
	cout<<"The Name "<<j<<": "<<list[i].name[j]<<endl;
    cout<<"The Pay RAW "<<j << ": "<<list[i].score[j].raw<<endl;
	cout<<"The Pay PER "<<j << ": "<<list[i].score[j].per<<endl;
  cout<<endl;
}
}
	
return 0;
}
