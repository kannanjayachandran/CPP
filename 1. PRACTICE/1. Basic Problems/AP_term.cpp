/*
Given three integer, a,d and n. Where a is the first term, d is the common difference of an A.P.  
Calculate the nth term of A.P.  The nth term is given by an = a + (n-1)d
*/

#include <iostream>
using namespace std;

int main(void){

    int a=0, d=0, n=0;

    cout << "Enter the first term: ";
    cin >> a;
    cout << "Enter the common difference: ";
    cin >> d;
    cout << "Enter n: ";
    cin >> n;

    auto nterm = a + (n-1) * d;

    cout << "N-th term is " <<nterm; 

return 0;
}