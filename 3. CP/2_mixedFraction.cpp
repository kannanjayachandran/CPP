#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    freopen("mixin.txt", "r", stdin);
    freopen("mixout.txt", "w", stdout);

    int n, d;
    cin >> n >> d;

    int a = n / d;
    int b = n % d;

    if (b == 0)
    {
        cout << a << " " << endl;
    }
    else
    {
        cout << a << " " << b << "/" << d << endl;
    }
    return 0;
}
/*  Given a fraction in the form n/d, find the two integers a and b,
    where 0 <= b < d and ad + b = n.
*/
