#include<iostream>
using namespace std;


int myFun(int * ptr, int size){

int t=0, * ptr2;
ptr2 = ptr + (size-1);
for(int i=0; i<size; i++){

t += *ptr;
ptr++;
t += *ptr2;
ptr2--;
}

return t;
}

int main()
{

int myValues[] = {2,4,6,8,10};

int total;
total = myFun(myValues, 5);
cout<<"Values is = "<<total;
return 0;
}
















