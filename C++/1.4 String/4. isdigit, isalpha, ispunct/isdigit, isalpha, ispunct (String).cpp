#include <iostream>
#include <cctype>
using namespace std;
int main()
{	char input;
   cout<<"Enter any character: ";
   cin.get(input);
  
   if (isdigit(input)){
		
   	cout<<"digit";}
  
   if ( isalpha(input))
   
   	cout<<"letter";

 
   
   
  if ( ispunct(input))
   	cout<<"special character";


   return 0;}

