#include <iostream>
using namespace std;

int main(void){

  // Binary operations
  int a=10, b=2;
  cout<<a+b<<"\n"
      <<a-b<<"\n"
      <<a*b<<"\n"
      <<a/b<<"\n"
      <<a%b<<"\n";

  //unary operations
  int c = 10, d = 5;
  int p = c++;   // first p = c then increment c to c+1
  int q = ++c;   // first increment c to c+1 then q = c
  cout<<p<<"\n"
      <<q<<"\n";

return 0;
}

// The sign of a%b is same as the sign of a.  