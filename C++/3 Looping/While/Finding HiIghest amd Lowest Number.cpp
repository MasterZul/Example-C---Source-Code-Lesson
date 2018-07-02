/*
    Program : Finding HiIghest amd Lowest Number
*/

#include<iostream>
using namespace std;

int main(){

int n, highV, LowV, SumOdd, SumEven, Dif;

cout<<"Enter a Number=> ";
cin>>n;

	highV = n;
	LowV = n;

	while (n!=0){

    if(n%2==1){
	
	cout<<n<<" is an odd number "<<endl;
    cout<<endl;
	

}
else{

	
	cout<<n<<" is an even number"<<endl;;
    cout<<endl;
	
}
	 
	 if(highV < n){
     
	 highV = n;
	 }
else if (LowV> n){

LowV = n;
}



cout<<"Enter a Number (Enter a 0 number to stop calculate)=> ";
cin>>n;

}

cout<<endl;
cout<<"Highest Value is: "<<highV<<endl;
cout<<"Lowest Value is: "<<LowV<<endl;
cout<<endl;
	
Dif = highV - LowV;
cout<<"Difference = ";

if(Dif%2==1){
	
	cout<<Dif<<" is an odd number ";
    
}
else{

	
	cout<<Dif<<" is an even number";
}
return 0;
}
