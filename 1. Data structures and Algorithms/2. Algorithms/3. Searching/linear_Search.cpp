#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int key);

int main()
{
    int arr[] = {20, 7, 3, 90, 20, 12, 52};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 5;
    int index = linearSearch(arr, n, key);

    int output = (index != -1) ? index : -1;

    cout << output << endl;

    return 0;
}

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}