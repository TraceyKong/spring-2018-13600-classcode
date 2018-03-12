
#include <iostream>
#include <vector>
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
using std::cout;
using std::endl;
#include "prog.h"
int main() {

    // Printing a sequence of numbers and reporting
    // the number of digits in them

    int n = 110;
    int digits;

    while (n < 100000) {

        digits = numDigits(n);

        cout << n;
        cout << " ";
        cout << digits;
        cout << endl;

        n = n * 3 + n/10;
    }

    return 0;
}
