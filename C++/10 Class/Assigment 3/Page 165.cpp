#include <iostream>

using namespace std;

class Length;

bool operator <(Length, Length);
bool operator ==(Length a, Length b);

class Length{

private:
	int len_inches;
public:
	Length (int feet, int inches)
{
len_inches=12*feet+inches;
}

int getFeet(){ return len_inches/12;}
int getInches(){ return len_inches%12;}

friend bool operator <(Length a, Length);
friend bool operator ==(Length a, Length b);
};

bool operator < (Length a, Length b)
{
    bool status;
 
    if (a.len_inches < b.len_inches)
        return true;
 
    return false;
}

bool operator == (Length a, Length b)
{
    bool status;
 
    if (a.len_inches == b.len_inches)
        return true;
    
 
    return false;
}

int main()
{
   int feet, inches;  // To hold input for feet and inches

   // Create two FeetInches objects. The default arguments
   // for the constructor will be used.
  

   // Get a distance from the user.
   cout << "Enter a distance in feet and inches: ";
   cin >> feet >> inches;

   // Store the distance in first.
    Length first(feet, inches);

cout<<endl;
   // Get another distance.
   cout << "Enter second distance in feet and inches: ";
   cin >> feet >> inches;



   // Store the distance in second.
   Length second(feet, inches);



   // Compare the two objects.
   if (first == second)
      cout << "first is equal to second.\n";
   if (first < second)
      cout << "first is less than second.\n";

   return 0;
}


