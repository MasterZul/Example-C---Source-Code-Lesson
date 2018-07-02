#include <iostream>
using namespace std;

/* Function prototypes */
void funA(void);
void funB(int);
void funC(void);

int a=5;

int main()
{
   int a=8;

   cout << a << " (a)." << endl;   // (a).Answer:____________

  funA();
  funB(10);
  a=11;
  funC();

   cout << a << " (b)." << endl;   // (b). Answer:____________
   
   system("pause");
   return 0;
   }


void funA(void)
{
  cout << a << " (c)." << endl;    //(c). Answer:____________
  a = a+2;
}


void funB(int a)
{
 cout << a << " (d)." << endl;     // (d). Answer:___________
}

void funC(void)
{
  cout << a << " (e)." << endl;   // (e). Answer:____________

}
