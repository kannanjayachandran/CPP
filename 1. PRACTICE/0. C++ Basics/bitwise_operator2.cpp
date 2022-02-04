#include <iostream>
using namespace std;

int main(void){

  // Left shift operator
  int a = 10, y = 3;
  cout<<(a<<2);
  cout<<"\n"<<(a << y);


  // Right shift operator 
  int p = 100;
  int q = 4;
  cout<<"\n"<<(p>>2);
  cout<<"\n"<<(p>>q);
 

  // Bitwise not operator.
  int f = 20;
  cout<<"\n"<<(~f);
  cout<<"\n"<<(~0);
  
return 0;
}


/*
  << is the left shift operator 
  when we left shift a number by i (here 2) i number of zeros are added at the end and i number of zeros 
  at the begining are ignored. (in the binary representation)

  If the leading x bits are zeros then the result of left shifting is multiplication 'a' with (a * 2^x).
  ie; 10 * 2^2  == 10 * 4 == 40
  10 * 2^3 == 10 * 8 == 80


  >> is the right shift operator
  (opposite of left shift operator.)
  i number of zeros are added at the begining and i number of values at the end are ignored.
  Right shift is equal to p / 2^x ; where x is number which we shifted here 2 and 4.

  Bitwise NOT operator
  bitwise operator just inverts all the bits (1 becomes 0 and 0 becomes 1).

*/