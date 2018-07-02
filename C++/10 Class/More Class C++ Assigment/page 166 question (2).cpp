#include<iostream>
#include<string>

using namespace std;

class Mechanic{

private:
	string name, staffid;
	int hoursworked, salary, rph;
	
public:

Mechanic() {}
friend Mechanic calculateEPF (const Mechanic& epf);
   Mechanic(string n, string staff, int h, int sala, int r)
   {
      name = n;
      staffid = staff;
      hoursworked = h;
      salary =  sala;
      rph = r;
   
   }

void calculateSalary (){


salary = hoursworked * rph;

}

void display(){

cout<<"Name: "<<name<<endl;
cout<<"StaffID: "<<staffid<<endl;
cout<<"HoursWorked: "<<hoursworked<<endl;
cout<<"Salary: "<<salary<<endl;
cout<<"RPH: "<<rph<<endl;


}


};

Mechanic calculateEPF (const Mechanic& result)
{
float epf1;
Mechanic epf;
epf1 = 0.05 * result.salary;

cout<<endl;
cout<<"The EPF: "<<epf1;
return epf;
}

int main(){


Mechanic zul1;
Mechanic data ("Muhammad Zulkifli", "A14CS0173", 8, 0, 20);
data.calculateSalary();

data.display();
zul1 = calculateEPF(data);
}
