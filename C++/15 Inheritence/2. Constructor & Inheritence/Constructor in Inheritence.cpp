#include <iostream>
using namespace std;

class Rectangle{

	int length, width;
   public:
   Rectangle(int length, int width)
	{ this->length=length;
   	this->width=width;
   }
   void display()
   {cout<<width<<endl;
    cout<<length<<endl;}
};

class Box:public Rectangle{
    int height;
	public:
   
   
   	
};
int main(){	
  Box a(5,7,10);
  Box b(8,9);
   b.display();
   a.display();
   
   }

