#include <iostream>
#include <conio.h>
using namespace std;


int main()
{
    const int ARRAY_SIZE = 3; // size of array a
    int a[ARRAY_SIZE];

    int temp; // temporary location used to swap array elements

    for (int i = 0; i < ARRAY_SIZE; ++i)
    {
        cout << "Enter value #" << (i + 1) << " ";
        cin >> a[i];
    }
   
    // bubble sort
    // loop to control number of passes
    for (int k = 0; k < ARRAY_SIZE - 1; ++k)
        // loop to control number of comparisons per pass
        for(int j = 0; j < ARRAY_SIZE - 1; ++j)

            // compare side-by-side elements and swap item

            // if first element is greater than second element

            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];

                a[j+1] = temp;

            }

    cout << "The sorted array in ascending order\n";

    // output sorted array

for (int p = 0; p < ARRAY_SIZE; ++p)

 cout << "  " << a[p];
  cout << endl;

    _getch ();

      return 0;

}

