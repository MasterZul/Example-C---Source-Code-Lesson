#include<iostream>
using namespace std;

class Rectangle{


protected:
	int length, width, height;
  
   public:
   Rectangle(int length, int width)
	{ this->length=length;
   	this->width=width;
   }
   void display()
   {
   	 
  cout<<"This is Length: "<<length<<endl;
   cout<<"This is Width: "<<width<<endl;
    
	}
};

class Box:public Rectangle{
  
   
	public:
   
   	Box (int height,int length, int width)      	:Rectangle(length,width)
      {  this->height=height; }
    
	
	  Box(int l, int w):Rectangle(l,w){}

void display()
      { Rectangle::display();
      
		  cout<<"This is Height: "<<height<<endl;
      	cout<<endl;
	  }


};
int main(){	
  Box a(5,7,10);
  Box b(6,8,9);
   a.display();
   b.Rectangle::display();
   }

