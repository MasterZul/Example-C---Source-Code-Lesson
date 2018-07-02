/*
    Program : Finonacci V2
*/

#include <iostream>

using namespace std;

long long FibonacciElement1(long long);
long long FibonacciElement2(long long);

int
main(void)
{
	cout<<"Calculate Fibonacci element"<<endl
		<<"enter the n -";
        long long int lliN; cin>>lliN;

	cout<<"With recursion F(n)    ="<<FibonacciElement1(lliN)<<endl
	    <<"Iterative solution F(n)="<<FibonacciElement2(lliN)<<endl;

	int iRespond; cin>>iRespond;

	return 0;
}

long long 
FibonacciElement1( long long n)
{
  if (n==0) return 0;
  if (n==1) return 1;
  return FibonacciElement1(n-2) + FibonacciElement1(n-1);  
}

long long
FibonacciElement2( long long n)
{
   long long Previous   = 0,
             PPrevious  = 1;

if( n==0) return 0;
if( n==1) return 1;

long long i=1, Curent;
while( i <= n)
{
	Curent      = PPrevious + Previous;
	PPrevious   = Previous;
	Previous    = Curent;
++i;
}
return Curent;
}
