#include <iostream>
using namespace std;

void getId(int=0, int=0, string name="Na");

int main(void){

  getId(10, 20);
  getId(10);
  getId(10, 0, "hello");

return 0;
}

void getId(int a, int b, string name){

  cout << a << " " << b << " " << name << "\n";
}

// All default arguments must be at the end or the compiler will throw an error.
// Default arguments can be provided either in the declaration or in the definition.
// Good practice is to provide the default argument in the declaration.