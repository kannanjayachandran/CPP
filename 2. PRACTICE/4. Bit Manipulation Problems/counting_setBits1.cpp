#include <iostream>
using namespace std;

int setBit(int);

int main(void){

    setBit(40);

    return 0;
}

int setBit(int num){

    int result = 0;

    while (num > 0) 
    {
        result += num & 1;
        num >>= 1;
    }

    cout << "Number of set bits = " << result << " 🎉";
}

/*
A program to find the total number of set bits in a given number, Using the naive method.
The while loop can be replaced by :
    while(n>0)
    {
         if (n%2 != 0){
            result++;
        }
    n=n/2;
    }
Time complexity : Θ (Total number of bits in the number)
*/