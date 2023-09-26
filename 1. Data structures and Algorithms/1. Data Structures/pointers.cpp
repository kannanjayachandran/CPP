#include <iostream>
using namespace std;

void change_value(int *ptr);

int main(void)
{

    int number = 125;
    int *ptr = &number;
    cout << number << endl;

    change_value(ptr);

    cout << number << endl;

    // null ptr
    int *ptr1 = nullptr;
    cout << ptr1 << endl;

    // witchery {Pointer arithmetic}
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr_arr = arr; // int *ptr =  &arr[0];

    *(ptr_arr + 3) = 10000;

    for (int num : arr)
    {
        cout << num << " ";
    }

    return 0;
}

void change_value(int *ptr)
{
    *ptr = 521;
}