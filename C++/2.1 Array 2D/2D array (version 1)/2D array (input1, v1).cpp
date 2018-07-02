/*
    Program : 2D array (input1, v1)
*/

#include<iostream>
#include<fstream>
#include<cstdlib>
# define MAXSTUDENT
#include<string>
#include<iomanip>
#define NSTUD 20

using namespace std;

void readFile(float Weight[],string id[], float score[][20], int& n,int& itemCount)
{

int i = 0;
cout<<"Enter the file name include .csv (Example: input1.csv): "<<endl;
string filename;	
ifstream fin;
cin>>filename;
fin.open(filename.c_str());
if (fin.fail()){

cout<<"Cant open File"<<endl<<endl;
exit(0);
}

fin.ignore(1000, '\n');
fin>>itemCount;
cout<<itemCount;
fin.ignore();
for(int a = 0; a<itemCount;a++){
fin.ignore();
fin>>Weight[a];

}
cout<<Weight[0];
fin.ignore(1000, '\n');
fin.ignore(1000, '\n');
 n = 0;
while(getline(fin,id[n],',')){

cout<<"THe ID:  "<<id[0]<<endl;
fin>>score[n][0];
cout<<"Item1:  "<<score[0][0]<<endl;
for(int i =1; i<itemCount;i++){
fin.ignore();
fin>>score[n][i];
cout<<"THe Score: "<<score[n][i]<<endl;
cout<<endl;
}
n++;
fin.ignore();


}

return ;
fin.close();
}
int main(){
	
float SumScore;
float Avrgitem[NSTUD];
float All[NSTUD];
int n, itemCount;
float list[NSTUD];
float result[NSTUD];
float Weight [2];
string id [NSTUD];
float score[NSTUD][NSTUD];
float Totalscore[NSTUD];
string grade[NSTUD];
float sumWeight;
float PerAllScore;

 readFile(Weight, id, score,n,itemCount);     
return 0;
}

