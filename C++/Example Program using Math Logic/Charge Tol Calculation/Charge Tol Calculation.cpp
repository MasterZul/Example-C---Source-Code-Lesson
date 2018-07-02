/*
    Program : Charge Tol Calculation
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main (){
	
	int km,Epoint, Ipoint, Rpoint, RMDistance;
	float TDistance, fkm, RMkm, charge, Total, ADistance;
	
cout<<"Enter the Entry Point"<<endl;
cin>>Ipoint;

cout<<"Enter the Exit Point"<<endl;
cin>>Epoint;

Rpoint = Epoint - Ipoint;


TDistance = Rpoint + 800;

ADistance = TDistance/1000;

km = TDistance/1000;

 RMDistance= km - 3;

RMkm = RMDistance*3.10;

fkm = 7.50;

charge = RMkm;

Total = RMkm + fkm;



cout<<showpoint<<fixed;
cout<<setprecision(1)<<"Travel Distance = "<<ADistance<<"km"<<endl;
cout<<setprecision(1)<<"Chargable Distance = "<<km<<"km"<<endl;
cout<<setprecision(2)<<"chargable for the first kilometer =RM "<<fkm<<endl;
cout<<setprecision(2)<<"Chargable for the remaining kilometer =RM "<<charge<<endl;
cout<<setprecision(2)<<"Total  =RM"<<Total<<endl;

return 0;

}







	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

