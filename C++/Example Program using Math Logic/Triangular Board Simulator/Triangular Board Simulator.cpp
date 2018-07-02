#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include <sstream>
#include <cstdlib>
using namespace std;

void Triangle(int i,int num[]);
void Quad(int i,int num[]);
void Hex(int i,int num[]);

int number[6];
int total,n;



ifstream fin;
ofstream fout;

///////////////////////////////         MAAAAAIIIIIINNNNNNNNNNNNNNNNNNN         /////////////////////////////

int main(){


fin.open("input.txt");             ////// Input File //////////
fout.open("Output.txt");          ////// Output File ////////////


n = 0;

if (fin.good())
{
    string str;
    while(getline(fin, str))     //get all data from the line in the file (1 2 3)
    {
        istringstream ss(str);   // change from string to integer 
        int num;
        n = 0;
        while(ss >> num)      //get every data from single line (1 and 2 and 3)
        {
            
            number[n] = num;
            
        
            n++;
        }
       
       if(n >= 3 && n <= 6){
	   
       
       if(n == 3){
       	Triangle(n,number);   //execute Triangle Function
      
        
    }
        
        else if(n == 4){     //execute Quad Function
        Quad(n,number);
			
		}
		
		else if(n == 6){    //execute Hex Function
        Hex(n,number);
			
        
		}
}
else{
	
	for(int x = 0; x< n; x++){
		fout<<number[x]<<" ";
	}
	fout<<"are not the vertices of an acceptable figure"<<endl;  // kalau takde apa apa function
}
    }
}
fin.close();
fout.close();

	return 0;
}

////////////////////////////////////                 ASCENDING                //////////////////////////////////

void Ascending(int i, int num[]){
	
	int temp;
	
	for(int x = 0; x<i-1;x++){
		
		for(int j = 0; j<i-1; j++){
		
		
	if(num[j]> num[j + 1]){
		
	           temp = num[j];
                num[j] = num[j+1];

                num[j+1] = temp;
	  }
	
     }
  }

   for (int p = 0; p < i; ++p){
   cout << "  " << num[p];
    cout << endl;
  }
	
}

//////////////////////////////////////////////////       FIND ROW           /////////////////////////////////////////////////////////

void findRow(int n,int num[],int row[]){
	
    int  z,  c;
    
    for(z = 0; z<n;z++){

    int i = 1;
    int a=1;
    int habis = 9;
    
    do{
    	
        for (c = 1; c <= i; c++)
        {        
            if(num[z] == a){
            	habis = 1;
            break;
			}
            
            a++; 
        }
        
    i++; 
    
    }while(habis == 9);
 
    i--;
    row[z] = i;
  }
	
}

//////////////////////////////////////////////           TRIANGLE           ////////////////////////////////////////////

void Triangle(int i, int num[]){
	
	int row[i];
	
	
	string result = "are not the vertices of an acceptable figure";   //dia akan declare awal awal yg dia bukan vertices
	cout<<"Triangle"<<endl;
	
	fout<<num[0]<<" "<<num[1]<<" "<<num[2]<<" ";
	
	Ascending(i,num);
    findRow(i,num,row);

   if(row[1] == row[2]){
	
	
	int r = 0;
	r = row[0];

	
		for(int first = num[0] + r; first<=num[1]; first = first + r){
			
			
			
			if(first == num[1]){
				r = row[0];
				r++;
				
				
			for(int top = num[0] + r;top<=num[2]; top = top + r ){
				
				
				if(top == num[2]){
					
					result = "are the vertices of a triangles";
					
				}
				
			}
		}
		r++;
		}
		
   }
   

	cout<<endl;
	fout<<result<<endl;
}


///////////////////////////////////////           QUADDDDDDDDDDDDDDDDDD         //////////////////////////////////////////

void Quad(int i, int num[]){
	
	int row[i];
	int dif, dif2;
	int confirm = 0;
	
	
	cout<<"Quadrilateral"<<endl;
	
	for(int z = 0; z<i; z++){
		
		fout<<num[z]<<" ";
	}
	
    Ascending(i,num);
    findRow(i,num,row);
    
    if(row[0] == row[1] && row[2] == row[3]){
    	
    	
       dif = num[1] - num[0];	
       dif2 = num[3] - num[2];
       
       if(dif == dif2){
       	
       	
       	int r = row[0];
       	int first = num[0];
       	
       	for(int u = 0;   u<dif  ; u++){
       		
       		first = first + r;
       		r++;
		   }
       	
       	if(first == num[2]){
       		
       		
       	/*	r = row[0];
       		int second = num[1];
       		
       		for(int u = 0;   u<dif  ; u++){
       		
       		second = second + r;
       		r++;
		   }
		   
		   if(second == num[3])
		   
       		confirm = 1;*/
       		confirm = 1;
		   }
		   
		   else{
		   	
		   	r = row[0] + 1;
		   	first = num[0];
		   	
		   	for(int u = 0;   u<dif  ; u++){
       		
       		first = first + r;
       		r++;
		   }
		   
		   if(first == num[2]){
		   	confirm  = 1;
		   }
		   
		   	
		   }
       	
	   }
        
    	
	}
    
    if(confirm == 1){
    	
    	fout<<"are the vertices of a quadrilateral"<<endl;
	}
	else{
		fout<<"are not the vertices of an acceptable figure"<<endl;
	}
	cout<<endl;
}

//////////////////////////////////////          HEXAAAAAAAAAAAAAGONN         //////////////////////////////////////////////

void Hex(int i, int num[]){
	
	int row[i];
	int dif, dif2, different;
	int confirm = 0;
	int multiple = 0;
	
	for(int z = 0; z<i; z++){
		
		fout<<num[z]<<" ";
	}
	
	cout<<"Hexagon"<<endl;
	Ascending(i,num);
	findRow(i,num,row);
	
    if(row[0] == row[1] && row[2] == row[3] && row[4] == row[5]){
    	
    	dif=num[1] - num[0];
    	dif2=num[5] - num[4];
    	different=num[3] - num[2];
    	multiple = (dif2*2);
    	
    	if(dif == dif2 && multiple == different){
    		
    	int r = row[0];
       	int first = num[0];
       	
       	for(int u = 0;   u<dif  ; u++){
       		
       		first = first + r;
       		r++;
		   }
		   
		   if(first == num[2]){
		   	
		   	  r = row[2] + 1;
              int second = num[2];
       	
       	      for(int u = 0;   u<dif  ; u++){
       		
       		   second = second + r;
       		    r++;
		     }
		     
		     if(second == num[4] ){
		     	confirm = 1;
			 }
		   }
		   
		}
}
	cout<<endl;
	if(confirm == 1){
		
		fout<<"are the vertices of a hexagon"<<endl;
	}
	else{
		
		fout<<"are not the vertices of an acceptable figure"<<endl;
	}
	
}




