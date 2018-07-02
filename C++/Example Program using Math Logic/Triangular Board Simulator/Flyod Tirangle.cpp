#include<iostream>
using namespace std;



int num[3] = {2,4,7};
int row[3];

int main()
{
    int  z,  c, n=3;
    
for(z = 0; z<n;z++){
cout<<num[z]<<endl;
    
    int i = 1;
    int a=1;
    int habis = 9;
    
    do{
    	
        for (c = 1; c <= i; c++)
        {        
           
            
            if(num[z] == a){
            	habis = 1;
            cout<<"meow"<<endl;
            break;
			}
            
            a++; 
           
        }
        cout << endl;
       
       
    i++;
    
    
 }while(habis == 9);
 i--;

row[z] = i;
cout<<row[z]<<endl;

}
    return 0;
}
