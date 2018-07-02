#include <iostream>
#include<cstdlib>
using namespace std;

class FeetInches {

private:
	int feet;
	int inches;
	
public:
	
	FeetInches(int f = 0, int i = 0){
	
	feet = f;
	inches = i;
	
	}

FeetInches(const FeetInches &obj){

feet = obj.feet;
inches  = obj.inches;

}

FeetInches multiply (const FeetInches &obj){

FeetInches temp;
temp.feet = feet * obj.feet;
temp.inches = inches * obj.inches;
return temp;

}


void setFeet(int f)
{
feet = f;
}

void setInches (int i)

{
inches = i;
}

int getFeet() const
{return feet;
}

int getInches() const{ return inches;}


};

int main(){

FeetInches one(20, 50);
FeetInches two(one);
FeetInches three;

three = one.multiply(two);

cout<<one.getFeet()<<endl
<<two.getFeet()<<endl
<<three.getFeet()<<endl;

system("pause");
}

