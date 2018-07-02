/*
    Program : Quiz4: Calculates the salary for part time worker
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

float rate(char day);

int main()
{
    int totalHours;
    float paymentPerHour, totalPayment;
    char workDay;
    
    ifstream inFile;
    ofstream outFile;
    
    inFile.open ("work.txt");
    outFile.open("payment.txt");
    
    inFile >> workDay >> totalHours;
    paymentPerHour = rate(workDay);
    totalPayment = paymentPerHour * totalHours;
    
    outFile << showpoint << fixed << setprecision(2);
    outFile << "Total Working Hours       : " << totalHours  << endl;
    outFile << "Payment Rate (per Hour)   : RM" << setw(6) << paymentPerHour << endl; 
    outFile << "Total Salary              : RM" << setw(6) << totalPayment << endl; 
    
    inFile.close();
    outFile.close();
    
    return 0;
}

float rate(char day)
{
      float r;
      
      if (day == 'X') r = 4.80;
      else if ( (day == 'M') || (day == 'T') || (day == 'W') || (day == 'T') ) r = 2.80;
      else if ( (day == 'F') || (day == 'S') ) r = 3.20;

      return r;
}
