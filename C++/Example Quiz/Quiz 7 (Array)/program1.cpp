#include <iostream>
using namespace std;

void print(const int[], int);
int sum(const int list[], int, int);

int main()
{   int x = 2;
    int y[4]={3,4,1,7};
    int z[3][3] = { { 1,  2,  3},
                    { 5, 10, 15},
                    {10, 20, 30} };

    cout <<"a. " << y[x]+1    << endl;    // (a). Output:  __________________________________
    cout <<"b. " << y[x+1]    << endl;    // (b). Output:  __________________________________  

    cout <<"c. " << y[x]+y[1] << endl;    // (c). Output:  __________________________________  
    cout <<"d. " << y[ y[x] ] << endl;    // (d). Output:  __________________________________  

    y[x]++;
    cout  <<"e. "<< y[x]   << endl;       // (e). Output:  __________________________________  

    y[x++];
    cout  <<"f. "<< y[x]   << endl;       // (f). Output:  __________________________________  

    cout  <<"g. ";
    for (int i=0; i<3; i++)
       cout << z[i][0] << "\t"; // (g). Output:  __________________________________
    cout << endl;
   
    cout  <<"h. ";
    print(y, 2);                   // (h). Output:  __________________________________  
    
    cout  <<"i. ";
    print(z[2], 3);             // (i). Output:  __________________________________  
   
    cout  <<"j. "<< sum(z[2], 1,2)<< endl;// (j). Output:  _________________________________  
           
    cout << endl << endl;
    system("pause");
    return 0;
}

void print(const int list[], int size)
{    for (int i=0; i<size; i++)
         cout << list[i] << "\t";
     cout << endl;
}

int sum(const int list[], int from, int to)
{    int total = 0;
     for (int i=from; i<=to; i++) 
         total += list[i];

     return total;
}
