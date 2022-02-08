#include <iostream>
using namespace std;

int main(void)
{

    int result = 0, num = 40;

    while (num > 0)
    {
        num &= (num - 1);
        result++;
    }

    cout << "Number of set bits: " << result;

    return 0;
}

// counting the set bits using Brian kernighan algorithm.
// Time complexity : Θ(number of set bits)