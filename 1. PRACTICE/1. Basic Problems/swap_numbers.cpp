#include <iostream>
using namespace std;

int main(void){
    
    int a = 10, b = 20;

    cout<<"a is "<<a<<" b is "<<b;

    // Swapping using temp variable
    int temp = a;
    a = b;
    b = temp;

    // Swapping using multiplication
    a = a+b;
    b = a-b;
    a = a-b;

    // Swapping by multiplication (if one of the number is 0 then it won't work)
    a = a*b;
    b = a/b;
    a = a/b;

    cout<<"\n"<<a<<"\n"<<b;

return 0;
}