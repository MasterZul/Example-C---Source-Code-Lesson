/*
    Program : 2D array (input1, v2)
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
cout<<"Enter the file name inlude .csv (Example input1.csv): "<<endl;
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
for(int i = 0; i<itemCount;i++){
fin.ignore();
fin>>Weight[i];

}
cout<<Weight[1];
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

float SumArray(const float a[][NSTUD],int n,int z){ //campur semua markah

float sum = 0.0;
for(int i=0; i<n; i++){
sum += a[i][z];
cout<<"Sum: "<<sum<<endl;
}
cout<<endl;
return sum/n;

}
float itemAverage(const float itemScores[][NSTUD],int n, int w, int z){  //average semua
	


	float a = SumArray(itemScores,  n, z);
	float s = a/10.0*w;
return s;
}

void getStudentScore(const float scales[][NSTUD], const float weights[], int nitem,int n,float totalList[]){    //untuk sorang
	
for(int i = 0; i<n; i++){

	totalList[i] = 0;

	for(int j=0; j<nitem; j++){
		
		totalList[i] += scales[i][j]/10.0*weights[j];
	
	}
cout<<"TOTAL: "<<totalList[i]<<endl;
}
cout<<endl;	
}

float AllScore(float list[],int n){
float sum = 0;

for(int i = 0; i<n; i++){


sum = sum + list[i];
}

return sum;
}

float Percentage(float Avg,int w){


float p;
p = (Avg/w)*100;
cout<<"Percentage: "<<p<<endl;
return p;
}

string getGrade(float a)
{
	if(90 <= a) return "A+";
	if(80 <= a) return "A";
	if(75 <= a)	return "A-";
	if(70 <= a) return "B+";
	if(65 <= a) return "B";
	if(60 <= a) return "B-";
	if(55 <= a) return "C+";
	if(50 <= a) return "C";
	if(45 <= a) return "C-";
	if(40 <= a) return "D+";
	if(35 <= a) return "D";
	if(30 <= a) return "D-";	
	return "E";
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
 
 for(int b = 0; b<itemCount; b++){
 
 sumWeight = sumWeight + Weight[b];
cout<<"SUMWEIGHT: "<<sumWeight<<endl;
}
 
 cout<<endl;
 getStudentScore(score, Weight, itemCount,n,Totalscore);
             
 for(int a; a<n; a++){
 
 float T = Totalscore[a];
 float PS = Percentage(T,sumWeight);
 grade[a] = getGrade(PS);
 cout<<"GRADE: "<<grade[a]<<endl;
 }
 cout<<endl;
 SumScore = AllScore(Totalscore,n);
 sumWeight = sumWeight*n;
 PerAllScore = Percentage(SumScore, sumWeight);
 cout<<"AllScore: "<<SumScore<<endl;
 cout<<"Percentage All Score: "<<PerAllScore<<endl;
cout<<endl;
for(int z = 0; z<itemCount; z++ ){
	
int W = Weight[z];
Avrgitem[z] = itemAverage(score, n, W, z);
float A = Avrgitem[z];
float Percen = Percentage(A,W);
cout<<"AVRG: "<<Avrgitem[z]<<endl;
}

 
 
 
 

/*cout<<"The Score"<<itemCount;
cout<<"ID: "<<id[0]<<endl;
cout<<"ID: "<<id[1]<<endl;

cout<<endl;
cout<<"Score: "<<score[1][0]<<endl;
cout<<"Score: "<<score[1][1]<<endl;

cout<<endl;
cout<<"weight: "<<Weight[0]<<endl;
cout<<"Weight: "<<Weight[1]<<endl;*/
//Score = getStudent(score, )	


	
	return 0;
}

