/*
    Program : Finonacci V1
*/

#include <iostream>

using namespace std;

int main()
{
    int num1 = 0;
    int num2 = 1;
   
    int num_next = 1;
    int n;
    cout<<"Display How many Fibonacci element based on input"<<endl<<endl
		<<"enter how many need: ";
    cin >> n;
    if (n>=1)
        cout << num1 << " ";
    if (n>=2)
        cout << num2 << " ";
    for (int i = 0; i < n-2; i++){
        num_next = num1 + num2;
        cout << num_next << " ";
        num1 = num2;
        num2 = num_next;
    }
    cout << endl;
    return 0;
}
