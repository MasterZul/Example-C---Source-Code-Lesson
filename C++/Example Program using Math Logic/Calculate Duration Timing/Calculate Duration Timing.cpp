/*
    Program : Calculate Duration Timing
*/

#include<iostream>
using namespace std;

int main (){
	
int h1, h2, m1, m2, time1, time2, RH = 0, RM= 0 , dif = 0;



cout<<"Enter the first time "<<endl;
cin>>time1;

cout<<"Enter the second time "<<endl;
cin>>time2;

h1 = time1/100;
  m1 = time1 - h1*100;
  
  h2 = time2/100;
  m2 = time2 - h2*100;
 
	
	dif = (h2*60+m2)-(h1*60+m1);
	RH=dif/60;
	RM=dif- RH*60;
	
 
  cout<<"Hour= "<<RH<<endl;
  cout<<"Minit= "<<RM<<endl;

	return 0;
	
	
}
