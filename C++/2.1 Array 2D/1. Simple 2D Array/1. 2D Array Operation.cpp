/*
    Program : 2D Array Operation
*/

#include<iostream>
#include<iomanip>
#define COL  4
using namespace std;

float getTotal(float score[][COL]){


float sum = 0;
 for(int i =0; i<4;i++){
 
      for(int j = 0; j<4; j++){
	 sum = sum + score[i][j];
	  
	  }
}

return sum;
}

float Average (float score[][COL]){

int n = 0;
float sum = 0;
 for(int i =0; i<4;i++){
 
      for(int j = 0; j<4; j++){
	 sum = sum + score[i][j];
	n++;
	  }
}
float Avg;
Avg = sum/n;


return Avg;
}

float getRowTotal(float score[][COL],int i ){

 float sum = 0;
      for(int j = 0; j<4; j++){
	 sum = sum + score[i][j];
	
	  }


return sum;
}

float getColumnTotal(float score[][COL],int j ){

 float sum = 0;
      for(int i = 0; i<4; i++){
	 sum = sum + score[i][j];
	
	  }
return sum;
}
float getHighestInRow(float score[][COL],int i){

float High = score[i][0];

for(int j = 1; j<4; j++){

if(score[i][j]>High)
    High = score[i][j];
}
return High;

}
float getLowestInRow(float score[][COL],int i){

float Low = score[i][0];

for(int j = 1; j<4; j++){

if(score[i][j]<Low)
    Low = score[i][j];
}
return Low;

}


int main(){
	
float Highest[COL], Lowest[COL];
float column[COL];
float row[COL];
	int n;
	float Total,AVRG;
	float score[COL][COL] ={{15,12, 29, 11},
                  {22,25, 26, 13},
                  {15,24, 27, 17},
                  {10,11, 18, 14}};
	
	


Total = getTotal(score);
cout<<"Total: "<<Total<<endl;
cout<<endl;

AVRG = Average(score);
cout<<"Average: "<<AVRG<<endl;
cout<<endl;

for(int z = 0; z<4; z++){

row[z] = getRowTotal(score,z);
cout<<z<<". "<<"ROW: "<<row[z]<<endl;
}

cout<<endl;
for(int z = 0; z<4; z++){

column[z] = getColumnTotal(score,z);
cout<<z<<". "<<"COlUMN: "<<column[z]<<endl;
}
cout<<endl;
for(int z = 0; z<4; z++){

Highest[z] = getHighestInRow(score,z);
cout<<z<<". "<<"Highest: "<<Highest[z]<<endl;
}
cout<<endl;
for(int z = 0; z<4; z++){

Lowest[z] = getLowestInRow(score,z);
cout<<z<<". "<<"Lowest: "<<Lowest[z]<<endl;
}

return 0;
}
