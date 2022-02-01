#include <iostream>
using namespace std;

int main(void){

  //compound assignment operators.
  int a = 10;

  cout<<a<<"\n";
  a += 10;
  cout<<a<<"\n";
  a-=5;
  cout<<a<<"\n";
   a*= 2;
  cout<<a<<"\n";
  a/= 2;
  cout<<a<<"\n";
  a%= 2;
  cout<<a<<"\n";  

  //compound assignment bitwise operators.
  int b = 200;

   cout<<b<<"\n";
  b &= 10;
  cout<<b<<"\n";
  b|=5;
  cout<<b<<"\n";
   b^= 2;
  cout<<b<<"\n";
  b<<= 2;
  cout<<b<<"\n";
  a>>= 2;
  cout<<b<<"\n"; 
  
return 0;  
}