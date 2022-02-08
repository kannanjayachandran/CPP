#include <iostream>
using namespace std;

int main(void){

  int a = 10, b = 20, c = 30;
  if (c>b>a){
    cout<<"yes";
  }
  else {
    cout<<"NO🤪";
  }

return 0;
}

/*
 The expression  c>b>a is evaluated according to associativity. c>b is evaluated first; It returns true.
 then value of c>b is changed from boolean to integer and it becomes 1 then >a is evaluated and 1 is not 
 greater than 10 so "NO" is printed.
*/