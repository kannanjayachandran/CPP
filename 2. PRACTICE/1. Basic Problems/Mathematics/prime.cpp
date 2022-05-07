// Given a number print all the prime numbers below that number

#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{

    int num;
    cout << "Enter the number: ";
    cin >> num;

    int flag, i;
    for (i = 2; i <= num; i++)
    {
        if (num == 1 || num == 0)
            continue;

        flag = 1;
        for (int j = 2; i <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        } // inner for loop
        if (flag == 1)
            cout << i << "\n";

    } // outer for loop

    return 0;
}
