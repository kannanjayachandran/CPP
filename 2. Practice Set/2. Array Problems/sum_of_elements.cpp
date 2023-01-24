#include <iostream>
using namespace std;

void adder(int [], int n);

int main(void)
{
    int n = 5;
    int array[n];
    cout << "Enter 5 numbers : "<<endl;

    for (int i=0; i<n; ++i)
    {
        cout << "Enter " << i <<" element: ";
        cin >> array[i];
        cout << endl;
     }

   adder(array, n);

    return 0;
} // end of main.

void adder (int arr[], int n){

        int sum=0;
        for  (int j=0; j<n; ++j){
        sum =sum + arr[j] ;
         }
        cout << "Sum of the elements is : " << sum << endl;
}