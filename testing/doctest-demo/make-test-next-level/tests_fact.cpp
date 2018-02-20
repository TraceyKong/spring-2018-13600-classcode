
#include "doctest.h"
#include "fact.h"

TEST_CASE("Testing Factorial"){
  CHECK(fact(5)==120);
  CHECK(fact(2)==2);
  CHECK(fact(0)==1);
}

TEST_CASE("Testing Case 2Factorial"){
  CHECK(fact(5)==120);
  CHECK(fact(2)==2);
  CHECK(fact(0)==1);
}




