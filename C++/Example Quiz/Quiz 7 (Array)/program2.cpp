#include <iostream>
//#include <iomanip>

using namespace std;

/* Function prototypes */
void read(string[], int[], int);
int print(const string[], const int[], int);
int indexOfHighest(const int[], int);
//double average(const int[], int);

#define MAX  100

int main()
{
   string students[MAX];
   int marks[MAX];
   int count;
   
   cout << "Enter the number of student: ";
   cin >> count;
   cout << endl;
   
   read(students,marks,count);
   system("cls");
   
   print(students,marks,count);
   
   /*
   cout << showpoint << fixed << setprecision(2)
        << "Average score: " << average(marks,count) << endl << endl;
   */
   
   int index = indexOfHighest(marks,count);
   cout << "Index of the highest score: " << index << endl 
        << "Highest score: " << marks[index] << "\t" << "Name: " << students[index] << endl << endl << endl;
   
    
   system("pause");
   return 0;
}

void read(string names[], int scores[], int size)
{
     for (int i=0; i<size; i++)
     {
         cout << "Name: ";
         cin >> names[i];
         
         cout <<"Score: ";
         cin >> scores[i];
         
         cout << endl;
     }
}

int print(const string names[], const int scores[], int size)
{
    cout << "Student\tScore" << endl
         << "-------\t-----" << endl;
    
    for (int i=0; i<size; i++)
        cout << names[i] <<"\t" << scores[i] << endl;
        
    cout << endl << endl;
}


int indexOfHighest(const int scores[], int size)
{
    int index = 0;
    
    for (int i=1; i<size; i++)
        if (scores[i] > scores[index]) index = i;

    return index;
}

/*
double average(const int scores[], int size)
{
       double sum = 0.0;
       for (int i=0; i<size; i++)
           sum += scores[i];
       
       return sum/size;
}
*/
