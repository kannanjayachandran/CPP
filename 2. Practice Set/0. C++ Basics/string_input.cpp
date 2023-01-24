#include <iostream>

using namespace std;
int main(void)
{
  cout<<"Enter your name: ";
  string s;
  cin>>s;
  cout<<"Your name is "<<s<<"\n";

  // This would only take inputs untill whitespace is detected. ie; last name or initials won't be taken.

  // The code below would take the complete string.
  cout<<"Enter your name: ";
  string p;
  getline(cin, p);
  cout<<p;
  
}