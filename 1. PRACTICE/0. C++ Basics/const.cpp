#include <iostream>

int main(void)
{
  std::cout<<"Enter the radius: ";
  int radius;
  std::cin>>radius;

  const double Pi = 3.1415;
  double area = Pi * (radius*radius);

  std::cout<<"The area is "<<area;
}

// Area of a circle. Here value of pi cannot be altered later.