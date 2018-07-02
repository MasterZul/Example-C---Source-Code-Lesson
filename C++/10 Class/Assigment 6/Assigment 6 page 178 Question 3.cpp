#include<iostream>
#include<string>
using namespace std;



class Blade{
	
private:
	
string bladeNum;
int bladeLength;
	
public:
	
Blade(string bladeNum,int bladeLength){
	
this->bladeNum = bladeNum;
this->bladeLength = bladeLength;
}

string getBladeNum(){

return bladeNum;
}

int getBladeLength(){

return bladeLength;
}
	
};





class Engine{

private:

string engineNum;
string 	manufacturer;
	
public:
	
Engine(string engineNum,string manufacturer){
	
this->engineNum = engineNum;
this->manufacturer = manufacturer;
}
	
string getEngineNum(){
	
	
return engineNum;	
}	

string getManufacturer(){


return manufacturer;
}
};






class Wheel{
	
private:
	
string wheelNum;
int wheelDiam;

public:
	
Wheel(string wheelNum,int wheelDiam){
	
this->wheelNum = wheelNum;
this->wheelDiam = wheelDiam;
}
	
string getWheelNum(){
	
return wheelNum;	
}	
	
int getWheelDiameter(){
	
	
return wheelDiam;	
}	
};




class LawnMower{
	
private:

string modelNumber;

Blade *B;
Engine *E;
Wheel *W;

	
public:
	
LawnMower(string modelNumber,Blade *blade, Engine *engine, Wheel *wheel){

this->modelNumber = modelNumber;

B = blade;
E = engine;
W =wheel;
}

void print(){

cout<<"Lawn Mower Specification:"<<endl;
cout<<modelNumber<<endl;
cout<<endl;

cout<<"Parts Specification"<<endl;
cout<<"A) Blade"<<endl;
cout<<"Blade Serial Number: "<<B->getBladeNum()<<endl;
cout<<"Blade Length: "<<B->getBladeLength()<<endl;
cout<<endl;

cout<<"B) Engine"<<endl;
cout<<"Engine Number: "<<E->getEngineNum()<<endl;
cout<<"Engine Manufacturer: "<<E->getManufacturer()<<endl;
cout<<endl;

cout<<"C) Wheel"<<endl;
cout<<"Wheel Serial Number: "<<W->getWheelNum()<<endl;
cout<<"Wheel Diameter: "<<W->getWheelDiameter()<<endl;

}

	
};

int main(){
	
Blade *bb = new Blade("1234",10);
Engine *ee = new Engine("X456","Bosch");
Wheel *ww	= new Wheel("S3445", 45);
	
LawnMower lw("ABD1234", bb,ee,ww);
lw.print();
}


