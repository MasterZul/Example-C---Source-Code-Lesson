#include <iostream>
#include <iomanip>

using namespace std;

char grade(int);

int main()
{
    int count;
    int score;
    float sum = 0.0, average;
    
    cout << "Enter the number of students => ";
    cin >> count;
    
    for (int i=0; i<count; i++)
    {
        cout << endl << "Enter the score => ";
        cin >> score;
        
        cout << "The grade is " << grade(score) << endl;  

        sum += score;        
    }

    average = sum / count;
           
    cout << fixed << showpoint << setprecision(0);
    cout << endl << "The average score : " << average << endl;
    cout << endl << "The overall grade : " << grade(average) << endl;
    
    system ("PAUSE");
    return 0;
}

char grade(int score)
{
     if (score >=80) return 'A';
     if ( (70 <= score) && (score <80) ) return 'B';
     if ( (50 <= score) && (score <70) ) return 'C';
     
     return 'F';
}
