#include <iostream>

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

std::string piglatinify(std::string word){
  std::string result="";


  return result;
}

TEST_CASE("Testing piglatinify"){
  std::string s="hello";

  // edge cases

  CHECK(piglatinify("")=="");

  CHECK(piglatinify(" hello")=="ellohay");

  // normal casses
  CHECK(piglatinify("hello")=="ellohay");
  CHECK(piglatinify("pig")=="igpay");
  CHECK(piglatinify("stop")=="opstay");
  
  // special stuff

  
  
  //punctiation

  // numbers
  
  
}
