#include<iostream>
#include<string>

using namespace std;

class Month{

private:
	string name;
	int monthNumber;
	

public:
	
Month(string n)
{
	name = n;
	monthNumber = 0;
}

Month(int num)
{

monthNumber = num;
name = "";
}




void setName(string n)
{
name = n;
}

void setName(int m)
{
monthNumber = m;
}

string getName()
{
return name;
}

int getMonthNumber()
{
return monthNumber;
}

// overloaded prefix ++ operator
Month operator++ ()  
      {
         ++monthNumber;          // increment this object
         
         if(monthNumber == 13)  
         {
            monthNumber == 1;
         }
         
		 if(monthNumber == 1)  
         {
            name = "January";
            monthNumber = 1;
         }
         else if(monthNumber == 2){
         
		 name = "February";
            monthNumber = 2;
	}
		 else if(monthNumber == 3){
         
		 name = "March";
            monthNumber = 3;
	}
		 else if(monthNumber == 4){
         
		 name = "April";
            monthNumber = 4;
	}
	else if(monthNumber == 5){
         
		 name = "May";
            monthNumber = 5;
	}
	else if(monthNumber == 6){
         
		 name = "Jun";
            monthNumber = 6;
	}
	else if(monthNumber == 7){
         
		 name = "July";
            monthNumber = 7;
	}
	else if(monthNumber == 8){
         
		 name = "August";
            monthNumber = 8;
	}
	else if(monthNumber == 9){
         
		 name = "September";
            monthNumber = 9;
	}
	else if(monthNumber == 10){
         
		 name = "October";
            monthNumber = 10;
	}
	else if(monthNumber == 11){
         
		 name = "November";
            monthNumber = 11;
	}
	else if(monthNumber == 12){
         
		 name = "December";
            monthNumber = 12;
	}

		 
		 return Month(monthNumber);
      }

// overloaded postfix ++ operator
      Month operator++( int )         
      {
         // save the orignal value
         Month M(monthNumber);
         // increment this object
         ++monthNumber;                    
         if(monthNumber == 13)  
         {
            monthNumber == 1;
         }
         
		 if(monthNumber == 1)  
         {
            name = "January";
            monthNumber = 1;
         }
         else if(monthNumber == 2){
         
		 name = "February";
            monthNumber = 2;
	}
		 else if(monthNumber == 3){
         
		 name = "March";
            monthNumber = 3;
	}
		 else if(monthNumber == 4){
         
		 name = "April";
            monthNumber = 4;
	}
	else if(monthNumber == 5){
         
		 name = "May";
            monthNumber = 5;
	}
	else if(monthNumber == 6){
         
		 name = "Jun";
            monthNumber = 6;
	}
	else if(monthNumber == 7){
         
		 name = "July";
            monthNumber = 7;
	}
	else if(monthNumber == 8){
         
		 name = "August";
            monthNumber = 8;
	}
	else if(monthNumber == 9){
         
		 name = "September";
            monthNumber = 9;
	}
	else if(monthNumber == 10){
         
		 name = "October";
            monthNumber = 10;
	}
	else if(monthNumber == 11){
         
		 name = "November";
            monthNumber = 11;
	}
	else if(monthNumber == 12){
         
		 name = "December";
            monthNumber = 12;
	}

         // return old original value
         return M; 
      }

friend ostream &operator<<( ostream &output, Month &M )
      { 
         output << "Month's Name : " << M.name<<endl<< "Month's Number : " << M.monthNumber;
         return output; 
}
 friend istream &operator>>( istream  &input, Month &M )
      { 
         input  >>M.name>> M.monthNumber;
         return input;         
}
};

int main(){

 

Month M1(3);

cout<<"Enter The Month Name and Month Date: "<<endl;
cin >> M1;

++M1;
cout<<""<<M1<<endl;

return 0;
}







