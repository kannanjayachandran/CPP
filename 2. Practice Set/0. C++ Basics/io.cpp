// << is the insertion operator in c++
// we can use << multiple times in cout or cin.
// \n and endl would insert a newline but endl would flush the buffer. Hence endl is slower than the \n.
// In C++ we can treat the operators as functions. (Operator overloading)

#include <iostream>

using namespace std;

int main(void)
{
  cout<<(10*20)<<endl;
  cout<<'K'<<"\n";

  int a, b;
  cin>>a>>b;
  cout<<a<<b;

  return 0;
}