/*

Program 1: Greeting

*/

#include <iostream>
using namespace std;

int main()
{
    char name[100];
    cout << "What is your name? ";
    cin.getline(name,100);
    
    system ("cls");
    cout << "Hi " << name
         << ". Welcome to the World of Programming."
         << endl << endl;
    system ("pause");
    return 0;
}
