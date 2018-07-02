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



class TeamLeader{

private:
	double MBA;
	int  NOTHR;
	int  NOTHA;
	
	
public:
	
	TeamLeader(){
	
	MBA = 0;
	NOTHR = 0;
	NOTHA = 0;
	
	}
	
	TeamLeader(double MBA, int NOTHR, int NOTHA){
	
	
	
	this->MBA = MBA;
	this->NOTHR = NOTHR;
	this->NOTHA = NOTHA;
	}
	
	
double getMBA(){

return MBA;
}

double getNOTHR(){

return NOTHR;
}

double getNOTHA(){

return NOTHA;
}


};





class Employee{

	
	private:
		string name;
		int number;
		string date;
		ProductionWorker *worker;
		TeamLeader  *leader;
		
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

void Boss(TeamLeader *s){

leader = s;
}

void display(){


cout<<"Employee Name: "<<name<<endl;
cout<<"Employee Number: "<<number<<endl;
cout<<"Date Hire: "<<date<<endl;
cout<<"Worker Shift: "<<worker->getShift()<<endl;
cout<<"Hourly Pay Rate: "<<worker->getHour()<<endl;


}

void TeamLeaderDisplay(){

cout<<"TeamLeader Name: "<<name<<endl;
cout<<"TeamLeader Number: "<<number<<endl;
cout<<"Date Hire: "<<date<<endl;
cout<<"Monthly Bonus Amount: "<<leader->getMBA()<<endl;
cout<<"Number Of Traning Hour: "<<leader->getNOTHA()<<endl;
cout<<"Number of Traning Hour That Attended: "<<leader->getNOTHR()<<endl;

}

};

int main(){

ProductionWorker *obj = new ProductionWorker(1, 12);

Employee subj("Muhammad Zulkifli", 13476, "12/1/2015");
subj.work(obj);
subj.display();
cout<<endl;

TeamLeader *boss = new TeamLeader(50, 6, 60);

Employee subj1("MasterZul", 54879, "4/7/2000");
subj1.Boss(boss);
subj1.TeamLeaderDisplay();
cout<<endl;

}

			
