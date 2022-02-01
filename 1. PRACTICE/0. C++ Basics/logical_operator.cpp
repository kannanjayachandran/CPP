#include <iostream>
using namespace std;

int main(void){

// Logical operators.
// in c++ we can use both the symbol of the operators and the words also.
int a = 10, b = 20;
  if (a > b or b > a){
  cout<<"no";
  }
if (a < b && b > a){
  cout<<"Yes";
}

// Short circuiting the logical operators.
// In the and operator if the first expression is false we don't need to evaluate the remaining; 
//as the final expression is always going to be false.
// Similarly in the Or operator if the first part is true we don't need to evaluate the remaining part.
// OR ---> first result : TRUE ----> Short circuiting.
//AND ----> first result : FALSE ---> Short circuiting.

  int q = 10;
  bool result = (q>20) && (q++);

  cout<<"result is: "<<result<<"\n";

  cout<<"q is still "<<q;

return 0;
}