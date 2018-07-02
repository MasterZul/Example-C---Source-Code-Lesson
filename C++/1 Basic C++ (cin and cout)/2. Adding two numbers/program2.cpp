/*
    Program 2: Adding two numbers
*/

#include <iostream>
using namespace std;

int main()
{
    int number1, number2;
    int result;
    
    cout << "Please enter two numbers " << endl << endl;
    cout << "The first number => ";
    cin >> number1;
    cout << "The second number => ";
    cin >> number2;
    
    system ("cls");
    
    result = number1 + number2;
    
    cout << number1 << " plus " << number2 << " is equal to "
         << result << endl << endl;
         
    system ("pause");
    return 0;
}
