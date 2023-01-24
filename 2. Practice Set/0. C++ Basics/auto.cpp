#include <iostream>
#include <typeinfo>

int main(void)
{
  // typeid and auto keyword.
  auto a = 25;
  auto b = 7.123;
  auto c = "India";

  std::cout<< "types are a: ";
  std::cout<< typeid(a).name()<<"\n"
              <<" b: "<<typeid(b).name()<<"\n"<<" c: "<<
              typeid(c).name();
}

// PKc pointer constant char.
// auto can super useful.