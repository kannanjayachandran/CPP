#include <iostream>
#include <array>
using namespace std;

int main(void)
{

    // declaring an array
    int arr[10];

    // printing out the values of the array (By default garbage values)
    cout << "Original array is ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // adding items to the array
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 1;
    }
    cout << "New array is: ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // declaring and adding value in the same line
    double marks[5]{10.2, 3.5, 6.4, 11.5, 5.1};
    for (size_t i = 0; i < 5; i++)
    {
        cout << marks[i] << " ";
    }
    cout << endl;

    // we can omit the size if we are declaring the array
    int new_arr[]{1, 2, 3, 4, 5};
    for (auto value : new_arr)
    {
        cout << value << " ";
    }
    cout << endl;

    // const array
    const int const_arr[]{1, 2, 3, 4, 5, 6, 7};
    cout << "The const array is: ";
    for (int num : const_arr)
    {
        cout << num << " ";
    }
    cout << endl;
}