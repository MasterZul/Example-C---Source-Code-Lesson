/*
    Program : Using substr
*/

// string::substr
#include <iostream>
#include <string>
using namespace std;
int main ()
{
 int num[2];
 string stre[1];
  string str2[2];
  cout<<"Enter the string"<<endl;
cin>>stre[0];
cin>>stre[1];

   for(int n = 0; n<2;n++){
   
   str2[n] = stre[n].substr (7,1);   // "generalities"
num[n] = str2[n];
}
  
  cout<<str2[0]<<endl;
cout<<str2[1]<<endl;


  return 0;
}
