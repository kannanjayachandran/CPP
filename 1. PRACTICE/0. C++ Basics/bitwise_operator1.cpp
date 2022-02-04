#include <iostream>
using namespace std;

int main(void){

int a = 10, b = 20;
int c = (a & b);
  cout<<c<<"\n";
  c = (a | b);
  cout<<c<<"\n";
  c = (a ^ b);
  cout<<c<<"\n";
  
}

/*
There are 6 bit-wise operators in c++
1. AND : Bit-wise AND operation of binary representation of two numbers.
2. OR  : Bit-wise OR operation of binary representation of two numbers.
3. XOR : Bit-wise XOR operation of binary representation of two numbers.
XOR gate gives 1 if both inputs are different(0,1 or 1, 0).

Although they internally work on the bits, the output is presented as integers.
*/