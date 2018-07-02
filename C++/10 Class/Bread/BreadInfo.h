#ifndef BREADINFO_H
#define BREADINFO_H
#include<string>

using namespace std;

class Breads{

private:

int code;
double price;
string name;

public:

Breads();
Breads(int,double,string);
~Breads();
void setCode (int c){code = c;}
void setPrice (double p){price = p;}
void setBreadName (int);

int getCode () const {return code;}
double getPrice() const {return price;}
string getBreadname() const {return name;}



};

Breads::Breads(){

code = 0;
price = 0.0;
name = "";

}



Breads::Breads(int c, double p, string n){

code = c;
price = p;
name = n;


}

Breads::~Breads()
{
}

void Breads::setBreadName(int n){

if (n == 101) name = "Plain Croissant";
if (n == 102) name = "Cream-filled Croissant";
if (n == 103) name = "Sausage Croissant";
if (n == 202) name = "Plain Bun";
if (n == 204) name = "Sambal Bun";
if (n == 205) name = "Cheese Bun";
if (n == 301) name = "Plain Braid";
if (n == 305) name = "Cheese Braid";
if (n == 306) name = "Sugar Braid";



}

#endif


