// Celcius to fahrenheit converter. 

#include <iostream>

int main(void){
  
  int cel;
  std::cout<< "Enter the temperature in celcius: ";
  std::cin>>cel;

  float fahren = cel * (9/5) + 32;

  std::cout<< "The temp in fahrenheit is: "<<fahren<<"\n";
  return 0;
}