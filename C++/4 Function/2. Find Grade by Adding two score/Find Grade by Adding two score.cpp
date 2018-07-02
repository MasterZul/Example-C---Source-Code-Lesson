/*
    Program : Find Grade by Adding two score
*/

#include<iostream>
using namespace std;

char grade(int);

int main(){


int score, score1, score2;

char Grade;

cout<<"Enter your score1: ";
cin>>score1;

cout<<"Enter your score2: ";
cin>>score2;

score = score1 + score2;



cout<<"The Grade:"<<grade(score);

return 0;

}

char grade(int score){

char g;

if(score>=80){

g = 'A';


}

else if ((score>=50)&&(score<80)){
	
	g = 'B';
	
	
}

else{
	
	g = 'C';
	
}

return g;

}




