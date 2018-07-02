#include<iostream>
using namespace std;

int getSum(int N)
{
    int totalN = 0;

    totalN += (N% 10);
    N/= 10;
cout<<totalN<<endl;
    if(N == 0){
	
        return totalN;
       
    }
    else if(N!=0){
	
    
        return getSum(N) + totalN;
    }
}


int main(){
	
	
	cout<<getSum(237)<<endl;
}
 
