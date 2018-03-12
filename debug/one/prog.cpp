#include <iostream>
#include <vector>
#include "doctest.h"
using namespace std;

// Computes the number of digits in num
// (assuming num >= 0)
int numDigits(int number) {
    int count = 1;

    while (number > 10) {
        number = number / 10;
        count += 1;
    }

    return count;
}


TEST_CASE("testing"){
  int i;
  for (i = 1000; i < 10000; ++i) {
    CHECK_MESSAGE(numDigits(i)==4,"i was "<<i);  
  }
  
}
