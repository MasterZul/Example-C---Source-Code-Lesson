#include<iostream>
using namespace std;


int function_03(int n){
	
if (n==0)
  return 0;
  else
  return n + function_03(n-1);
}

int main(){


cout<<function_03(5)<<endl;
}
