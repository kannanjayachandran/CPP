// Check whether the given number is prime or not.

#include <iostream>
#include <cmath>


using namespace std;

int main(void)
{
    cout<<"Enter the number: ";
    int num;
    cin>>num;

    if (num == 0 || num ==1) cout<<"Neither prime nor composite.";
    int flag = 1;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0){
            cout<<"Not prime.👎";
            flag = 0;
            break;
        }   
    }
    if (flag == 1) cout<<"Prime number👑";

    return 0;
}