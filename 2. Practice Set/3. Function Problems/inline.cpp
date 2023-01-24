#include <iostream>
using namespace std;

inline int summer(int x, int y){

  return x>y ? x : y;
}

int main(void){

  int x = 10;
  int y = 20;

  cout<<summer(x, y);

  return 0;
}

/*
Inline functions are a way of optimizing the program by reducing the function overheads.

instead calling stack and loading the function into stack frames the body of the function 
is simply copied to the place where the function has been called. 

It is useful when the function is simple and we can optimize the overall program by making 
the function inline.

It is up to the compiler to make a function inline as modern compilers would even make some 
functions inline even if we didn't use the word inline using inline too much may increase the 
binary file size.

It is better than macros 

when we define a method inside a class it is automatically treated as a inline suggestion to compiler.
*/