#include<iostream>
#include<string>
using namespace std;


class ProductionWorker{

private: 
     int shift;
     double hpr;
    
public:
	
ProductionWorker(int shift, double hpr){

this->shift = shift;
this->hpr = hpr;

}
	
int getShift(){

return shift;
}

double getHour(){

return hpr;
}


};



class ShiftSuperVisor{

private:
	double ANS;
	double  APB;
	
public:
	
	ShiftSuperVisor(){
	
	ANS = 0;
	APB = 0;
	}
	
	ShiftSuperVisor(double ANS, double APB){
	
	
	
	this->ANS = ANS;
	this->APB = APB;
	}
	
	
double getANS(){

return ANS;
}

double getAPB(){

return APB;
}

};





class Employee{

	
	private:
		string name;
		int number;
		string date;
		ProductionWorker *worker;
		ShiftSuperVisor  *visor;
		
		public:

 Employee(){

name = "";
number = 0;
date ="";

}

Employee(string name, int number, string date){

this->name = name;
this->number = number;
this->date = date;

}

void work(ProductionWorker *w){

worker = w;

}

void Boss(ShiftSuperVisor *s){

visor = s;
}

void display(){


cout<<"Employee Name: "<<name<<endl;
cout<<"Employee Number: "<<number<<endl;
cout<<"Date Hire: "<<date<<endl;
cout<<"Worker Shift: "<<worker->getShift()<<endl;
cout<<"Hourly Pay Rate: "<<worker->getHour()<<endl;


}

void SuperVisorDisplay(){

cout<<"SuperVisor Name: "<<name<<endl;
cout<<"SuperVisor Number: "<<number<<endl;
cout<<"Date Hire: "<<date<<endl;
cout<<"Annual Salary: "<<visor->getANS()<<endl;
cout<<"Annual Production Bonus: "<<visor->getAPB()<<endl;


}

};

int main(){

ProductionWorker *obj = new ProductionWorker(1, 12);

Employee subj("Muhammad Zulkifli", 13476, "12/1/2015");
subj.work(obj);
subj.display();
cout<<endl;

ShiftSuperVisor *boss = new ShiftSuperVisor(123, 345);

Employee subj1("MasterZul", 54879, "4/7/2000");
subj1.Boss(boss);
subj1.SuperVisorDisplay();
cout<<endl;

}

			
