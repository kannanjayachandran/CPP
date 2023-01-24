#include <iostream>
#include <iomanip>

using namespace std;

int main(void){

//Boolean values.
  bool a = true;
  cout<<a;
  cout<<boolalpha;
  cout<<a;
  cout<<noboolalpha;
  cout<<a<<"\n";

  // By default the values of true and false is 1 and 0 
  // boolapha would change that to True and False.

// Integers
  int p = 20, q = 40;
  cout<<p<<", "<<q<<"\n";
  cout<<hex;
  cout<<p<<", "<<q<<"\n";
  cout<<oct;
  cout<<p<<", "<<q<<"\n";
  cout<<dec;
  cout<<p<<", "<<q<<"\n";
  
// These shows the hexadecimal, octal, and decimal equivalent of the inputs provided.
// Other such flags on integers are showbase, showpos, uppercase, etc.

// Formating manipulations of output.
  int h = 10;
  cout<<setw(10);
  cout<<setfill('*');
  cout<<h<<"\n";
// The setw() would create a sequence of 10 characters and the fill the value of variable h from right to left.
// setfill() put the passed value to the remaining characters.
// setw() would only be available for the first printing after its written.
  
  return 0;
}