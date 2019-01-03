#include "mpPrinting.h"
#include "mpMultiplying.h"
#include <iostream>

namespace mp
{

//-----------------------------------------------------------------------------
void PrintTwoNumbers(int a, int b)
{
  std::cout << "PrintTwoNumbers:" << a << ", " << b << std::endl;
}


//-----------------------------------------------------------------------------
void PrintProduct(int a, int b)
{
  std::cout << "PrintProduct:" << mp::MultiplyTwoNumbers(a, b) << std::endl;
}

} // end namespace