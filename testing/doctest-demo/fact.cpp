#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

int fact(int n){
  int p = 1;
  for (int i = 1; i <= n; i++){
    p=p*i;
  }
  return p;
}


TEST_CASE("Testing Factorial"){
  CHECK(fact(5)==120);
  CHECK(fact(2)==2);
  CHECK(fact(0)==1);
}

