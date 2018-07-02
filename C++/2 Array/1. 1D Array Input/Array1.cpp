/*
    Program : Array 1D
*/

#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;


string Grade (int );
float Percentage (float ,float );


int main(){
	
	
		ifstream fin;
	   ofstream fout;
     	
		 	
			 char filename[81];
		 char id [81];
      string student [40];
	   float coursework [50];
       float exam [50];
	

	int maxW = 0, maxA = 0;
	float maxG ;
	string gradeT, gradew, gradef, name;
	float  SumC = 0, SumE = 0, SumP = 0, Per = 0 ,totals = 0, Avg = 0, BP = 0,BW = 0,BG = 0, OP = 0, SumT, perC, perF;
	

	cout<<"Masukkan Nama Input File (input1.txt)"<<endl;              /*the name of output file*/
	cin>>filename;
	fin.open(filename);
    name = filename;

 if(name== "input1.txt"){
maxW = 60;
maxA = 40;
}

else if(name =="input2.txt"){

maxW = 70;
maxA = 30;

}
cout<<maxA;
cout<<endl;
cout<<maxW;
cout<<endl;

	fout.open("Output.txt");
	
    fout<<setw(4)<<"ID"<<setw(12)<<"Score"<<setw(7)<<"Grade";
	fout<<endl;
	int count = 0;
    int n = 0;

	while(fin>>id){
	
	
    count++;
    
    

	student[n] = id;
	fin>>coursework[n];
    fin>>exam[n];
    
    
    totals = (coursework[n] + exam[n]);
    SumT = SumT + totals;                /* buat function*/
	SumC = SumC + coursework[n];
    
	SumE = SumE + exam[n];
    
    Per = Percentage(totals, 100);
	SumP = SumP + Per;                      /* buat function*/
	
	gradeT =Grade(Per);

     
	 
	fout<<student[n]<<"  "<<totals<<"     "<<gradeT;
	fout<<endl;
	
	n++;
}
	fin.close();
	Avg = SumT/count;  /* buat function*/
	OP = SumP/count;
	
	BW = count* maxW;    /* buat function*/
	BG = count* maxA;
	
	perC = Percentage(SumC, BW);
	perF = Percentage(SumE, BG);
	
	gradew = Grade (perC);
	gradef = Grade (perF);
	
	cout<<perC;
	cout<<gradew;
	cout<<gradef;
	
	fout<<endl;
	 fout<<showpoint<<fixed;
	 fout<<"Average"<<setw(19)<<"OverallPercentage"<<setw(9)<<"GradeCW"<<setw(7)<<"GradeF";
	 fout<<endl;
	 fout<<setprecision(2)<<Avg<<setw(9)<<setprecision(2)<<OP<<setw(16)<<gradew<<setw(7)<<"  "<<gradef;
	 
	 
	 fout.close();
	 
	return 0 ;
}

string Grade (int p){
	


	string g ;
    int n;


if((p>=90)&&(p<=100)){
 g = "A+";
}
else if((p>=80)&&(p<=89)){
 g  = "A";
}
else if((p>=75)&&(p<=79)){
 g  = "A-";
}
else if((p>=70)&&(p<=74)){
  g  = "B+";
}
else if((p>=65)&&(p<=69)){
 g  = "B";
}
else if((p>=60)&&(p<=64)){
 g  = "B-";
}
else if((p>=55)&&(p<=59)){
 g  = "C+";
}
else if((p>=50)&&(p<=54)){
 g  = "C";
}
else if((p>=44)&&(p<=49)){
 g  = "C-";
}
else if((p>=40)&&(p<=44)){
 g  = "D+";
}
else if((p>=35)&&(p<=39)){
 g  = "D";
}
else if((p>=30)&&(p<=34)){
 g  = "D-";
}
else if((p>=0)&&(p<=29)){
 g  = "E";
}

return g;
}

float Percentage (float x,float y){
	
	float per;
	per = (x/y)*100;
	return per;

}


