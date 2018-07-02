#include<iostream>
#include<string>
using namespace std;

class Date{

private:
	int Day, Month, Year;
	string nameMonth;

public:

Date(){


Day  = 0;
Month = 0;
Year = 0;
nameMonth = "";
}

Date(int month){

Month = month;

}


Date(int day, int month,int year){

Day  = day;
Month = month;
Year = year;
nameMonth = "";

}



// overloaded prefix ++ operator
Date operator++ ()  
      {
         ++Day;
		 
		 simplify();
		 return Date(Month);
      }

// overloaded postfix ++ operator
Date operator++ (int)  
      {
         Day++;
		 
simplify();
		 
		 return Date(Month);
      }

// overloaded - binary operator
Date operator - (const Date &right)
{
	Date temp;

	temp.Day = Day - right.Day;
		
	temp.Month = Month;
		
		temp.Year = Year;
		
		temp.simplify();
	return temp;
}
// overloaded input operator
friend ostream &operator<<( ostream &output, Date &M )
      { 
         output<<M.nameMonth<< " " << M.Day<< ",  " << M.Year;
         return output; 
}
//overloaded output operator
 friend istream &operator>>( istream  &input, Date &M )
      { 
         input  >>M.Day>> M.Month>>M.Year;
         return input;         
}

void simplify (){

	 
		if(Month == 1 || Month == 3 || Month == 5 || Month == 7 || Month == 8 || Month == 10 || Month == 12 ){
		 
		 if(Day >=32 ){
		  
		  ++Month;          // increment this object
         Day = 1;
     }
     }
         
		  if(Month == 4 || Month == 6 || Month == 9 || Month == 11){
		 
		 if(Day >=31 ){
		  
		  ++Month;          // increment this object
         Day = 1;
     }
     }
		 
		  if(Month == 2 ){
		 
		 if(Day >=29 ){
		  
		  ++Month;          // increment this object
         Day = 1;
     }
     }
		 
		 
		 if(Month == 13)  
         {
            Month == 1;
         }
         
		 if(Month == 1)  
         {
            nameMonth = "January";
            Month = 1;
         }
         else if(Month == 2){
         
		 nameMonth = "February";
            Month = 2;
	}
		 else if(Month == 3){
         
		 nameMonth = "March";
            Month = 3;
	}
		 else if(Month == 4){
         
		 nameMonth = "April";
            Month = 4;
	}
	else if(Month == 5){
         
		 nameMonth = "May";
            Month = 5;
	}
	else if(Month == 6){
         
		 nameMonth = "Jun";
           Month = 6;
	}
	else if(Month == 7){
         
		 nameMonth = "July";
            Month = 7;
	}
	else if(Month == 8){
         
		nameMonth = "August";
            Month = 8;
	}
	else if(Month == 9){
         
		 nameMonth = "September";
            Month = 9;
	}
	else if(Month == 10){
         
		 nameMonth = "October";
            Month = 10;
	}
	else if(Month == 11){
         
		 nameMonth = "November";
            Month = 11;
	}
	else if(Month == 12){
         
		 nameMonth = "December";
            Month = 12;
	}


}

operator int()
{ 
   return Day; 
}


};



int main(){

Date d(3,4,1995);
Date c(0,0,0);
Date b(0,0,0);
int choose;

cout<<"Choose either you want to Prefix, Postfix or Minus Binary"<<endl;
cout<<"Press 1 for Prefix"<<endl;
cout<<"Press 2 for Postfix"<<endl;
cout<<"Press 3 for Minus Binary"<<endl;
cin>>choose;

cout<<endl;
if(choose == 3){

cout<<"Enter the Day,Month,Year: "<<endl;
cin>>b;

cout<<"Enter Another the Day,Month,Year: "<<endl;
cin>>c;

d = b - c;
}
else if (choose == 1 )
{
cout<<"Enter the Day,Month,Year: "<<endl;
cin>>d;
++d;
}



else if (choose == 2)
{
cout<<"Enter the Day,Month,Year: "<<endl;
cin>>d;
d++;}

cout<<endl;
cout<<d;


}
