// Given a number right and left shift it by 2.

#include <iostream>
using namespace std;

int main(void){

    int num = 0;
    cout << "Enter the number: ";
    cin >> num;

    int num1 = num;
    auto rightShift = (num>>2);
    auto leftShift = (num1<<2);

    cout << "Right shifted value is " << rightShift << "\n"
         << " Left shifted value is " << leftShift << "\n";

return 0;
}