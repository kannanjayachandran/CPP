// cin would only take input untill it encounters a space. we can use getline to take a whole string input.

#include <iostream>
using namespace std;

int main(void){
    
  string name;
  cout<<"Enter your name: \n";
  getline(cin, name);
  cout<<"Your name is : "<<name;

  return 0;
}