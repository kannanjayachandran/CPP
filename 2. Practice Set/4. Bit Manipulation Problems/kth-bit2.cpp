#include <iostream>
using namespace std;

void kbit(int, int);

int main(void){

    kbit(5, 3);

    return 0;
}

void kbit(int num, int k)
{
    if ((num >> (k-1)) & 1)  cout << "🥳set.";
    else cout << "👎 not set.";
}

// A program to find whether the k-th bit is set or not using right shift operator.