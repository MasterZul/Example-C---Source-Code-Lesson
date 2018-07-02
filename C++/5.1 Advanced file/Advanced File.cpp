// modify showpoint flag
#include <iostream>     // std::cout, std::showpoint, std::noshowpoint
#include<cstdlib>
#include<iomanip>
#include<fstream>
using namespace std;

int main () {
  
  float val1, val2, val3, val4;
  
  ifstream inData;
  ofstream outData;
  
  inData.open("DataIn.txt");
  outData.open("DataOut.txt");
  
  inData>>val1>>val2>>val3>>val4;
  
  
  outData<<setw(8)<<showpoint<<setprecision(3)<<val4<<endl;
  outData<<setw(7)<<showpoint<<setprecision(3)<<val3<<endl;
  outData<<setw(8)<<showpoint<<setprecision(2)<<val2<<endl;
  outData<<setw(5)<<showpoint<<setprecision(2)<<val1<<endl;
  
  inData.close();
  outData.close();
  
  return 0;
}
