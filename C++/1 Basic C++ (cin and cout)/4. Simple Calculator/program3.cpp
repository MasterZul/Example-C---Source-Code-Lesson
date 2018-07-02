/*
    Program 3: Simple Calculator 
*/

#include <iostream>
using namespace std;

int main()
{
    double number1, number2;
    double result;
    char operation;
    
    cout << "Please choose an arimethic operation." << endl << endl;
    cout << "a - Addition " << endl;
    cout << "s - Substraction " << endl;
    cout << "m - Multiplication " << endl;
    cout << "d - Division " << endl << endl;
    cout << "Operation => ";
    cin >> operation;
    cout << endl << endl;
    
    cout << "Now, enter two numbers " << endl << endl;
    cout << "The first number => ";
    cin >> number1;
    cout << "The second number => ";
    cin >> number2;
    
    system ("cls");
    
    if (operation == 'a')
    {
       result = number1 + number2;
       cout << number1 << " plus " << number2 << " is " << result << endl << endl;
    }
    else if (operation == 's')
    {
       result = number1 - number2;
       cout << number1 << " minus " << number2 << " is " << result << endl << endl;
    }
    else if (operation == 'm')
    {
       result = number1 * number2;
       cout << number1 << " times " << number2 << " is " << result << endl << endl;
    }
    else if (operation == 'd')
    {
       result = number1 / number2;
       cout << number1 << " divide " << number2 << " is " << result << endl << endl;
    }
    else
    {
       cout << "Sorry! You have chosen incorrect operation." << endl << endl;
    }

    system ("pause");
    return 0;
}
