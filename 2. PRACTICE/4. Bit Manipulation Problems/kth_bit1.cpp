#include <iostream>
using namespace std;

void kbit(int, int);

int main(void)
{
    kbit(5, 3);

    return 0;
}

void kbit(int num, int k)
{
    if (num & (1 << k)) cout << "🥳bit is set.";
    else cout << "👎bit is not set.";
}

// A program to find whether the k-th bit of a number n is set or not; using left shift operator.
