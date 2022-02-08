#include <iostream>

using namespace std;

int main(void)
{
  int a = 10;
  int b = 0x1A;
  int c = 016;
  int d = 0b11;

  cout<<a<<"\n"
      <<b<<"\n"
      <<c<<"\n"
      <<d<<"\n";
}
// if we place a 0x infront the value would become hexadecimal.
// if we place a 0 infront the value becomes octal.
// if we place a 0b infront the value becomes binary.