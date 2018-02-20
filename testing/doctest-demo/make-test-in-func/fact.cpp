#include "doctest.h"
#include <iostream>

int fact(int n){
  int p = 1;
  for (int i = 1; i <= n; i++){
    p=p*i;
  }
  return p;
}


TEST_CASE("Testing Factorial"){
  std::cout << "HELLO WORLD\n";
  CHECK(fact(5)==120);
  CHECK(fact(2)==2);
  CHECK(fact(0)==1);
}

TEST_CASE("Testing Case 2Factorial"){
  std::cout << "HELLO WORLD\n";
  CHECK(fact(5)==120);
  CHECK(fact(2)==2);
  CHECK(fact(0)==1);
}

