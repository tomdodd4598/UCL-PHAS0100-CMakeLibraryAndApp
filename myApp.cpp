#include <iostream>
#include "mpAdding.h"
#include "mpPrinting.h"
int main(int argc, char** argv)
{
  std::cout << "Hello!" << std::endl;

  int a = 4;
  int b = 6;
  int c = mp::AddTwoNumbers(a, b);

  mp::PrintTwoNumbers(a, b);
  std::cout << "Sum of two numbers:" << c << std::endl;
  mp::PrintProduct(a, b);

  return 0;
}
