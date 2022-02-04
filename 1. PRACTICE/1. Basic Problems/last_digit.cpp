// Given a number find the last digit.

#include <iostream>
using namespace std;

int main(void){

    int num = 0;

    cout << "Enter the number to check: ";
    cin >> num;

    auto last = abs(num) % 10;

    cout << "Last digit is: " << last;

return 0;
}