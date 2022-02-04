#include <iostream>
using namespace std;

int main(void){

  int a = 1, b = 2, c = 3;
  int x = (a, b, c);

  cout<<x;  // x = 3

  x = a, b, c;  

  cout<<"\n"<<x; // x = 1
}

/*
  Coma operator has the least precedence. It is a binary operator and returns the second value as output
  when more than one coma operator is present assosiativity comes into place.(from left to right) 
*/