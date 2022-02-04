#include <iostream>
using namespace std;

int main(void){

    int num = 0;
    cout << "Enter the number: ";
    cin>>num;

    int sum = (num*(num+1)) / 2;
    
    cout<<"Sum of first n natural numbers till "
        <<num<<" is "<<sum;

return 0;
}