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









class Employee{

	
	private:
		string name;
		int number;
		string date;
		ProductionWorker *worker;
		
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

void display(){


cout<<"Employee Name: "<<name<<endl;
cout<<"Employee Number: "<<number<<endl;
cout<<"Date Hire: "<<date<<endl;
cout<<"Worker Shift: "<<worker->getShift()<<endl;
cout<<"Hourly Pay Rate: "<<worker->getHour()<<endl;


}



};

int main(){

ProductionWorker *obj = new ProductionWorker(1, 12);

Employee subj("Muhammad Zulkifli", 13476, "12/1/2015");
subj.work(obj);
subj.display();
}

			
