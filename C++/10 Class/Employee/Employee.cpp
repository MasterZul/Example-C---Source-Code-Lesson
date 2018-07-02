#include<iostream>
#include<iomanip>
#include"EmployeeData.h"
using namespace std;

int main(){

Employee emp1("Syed Mahadi", 47899,"Accouting","Vice President");
emp1.print(emp1);

Employee emp2("Maheran Joned",39119,"IT","Programmer");
Employee *pemp;
pemp = &emp2;
pemp->print(*pemp);

Employee *emp3;
emp3 = new Employee("Juliaz Rahmat",81774,"DOM","Engineer");
emp3->print(*emp3);

return 0;
}
