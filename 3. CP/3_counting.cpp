#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    freopen("countin.txt", "r", stdin);
    freopen("countout.txt", "w", stdout);

    int n = 0, i = 1;
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        cout << i << endl;
    }
    return 0;
}

/*
    Given an integer n count from 1 to that integer.
*/