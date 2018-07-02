#include <iostream>
using namespace std;

/* Function declarations */
int fun(int, int&);
int fun(int);

int main()
{
     int x,y;
     
      x=2; y=5;
      fun(x, y);
      cout << "(a). x= " << x << "\ty=" << y << endl; 

      x=2; y=5;
      y = fun(1, x); 
      cout << "(b). x= " << x << "\ty=" << y << endl; 

      x=2; y=5;
      fun ( fun(1, y), x); 
      cout << "(c). x= " << x << "\ty=" << y << endl; 

      x=2; y=5;
      y = fun(x); 
      cout << "(d). x= " << x << "\ty=" << y << endl; 

      x=2; y=5;
      x = fun(3) + fun(1,y); 
      cout << "(e). x= " << x << "\ty=" << y << endl; 

      system ("pause");
      return 0;
}

int fun(int a, int &b)
{
   int c = a + b;

   a = a+1;
   b = b+1;

   return c;
}

int fun(int a)
{
   return a*a*a;
}



