#include <iostream>

using namespace std;
int main()
{
  char c = 'H';
  const char *p = "Hello world.";
  string q = "This is a string in c++";

  cout<<p<<"\n";
  cout<<q;
  
  return 0;
}

// const char because the String literal would be stored in the static area of the memory. so it cannot be changed.
// The string q is actually a string object. when we assign the value the value is actually copied.