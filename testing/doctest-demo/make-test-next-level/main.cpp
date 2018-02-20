#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include "fact.h"

int main()
{
  int n = fact(5);
  std::cout << "fact 5 is " << n << std::endl;
  return 0;
}
