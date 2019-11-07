#include <iostream>
#include "myFunctions.h"

using namespace std;

int main() {
   int a1=14, a1_n=24, b1=-1, c1=5;
   double a2=1.4, a2_n=2.4, b2=-1.1;
   int arrayInt[5] = {1,2,3,4,5};
   double arrayDouble[5] = {1.1,2.2,3.3,4.4,5.5};

   // Min functions
   assert(min(a1,a1_n) == 14);
   assert(min(a2,a2_n) == 1.4);
   cout << "Pass - min functions\n";
   // Max Functions
   assert(max(a1,a1_n) == 24);
   assert(max(a2,a2_n) == 2.4);
   cout << "Pass - max functions\n";
   // Array min and max
   assert(min(arrayInt,5) == 1);
   assert(max(arrayInt,5) == 5);
   assert(min(arrayDouble,5) == 1.1);
   assert(max(arrayDouble,5) == 5.5);
   cout << "Pass - array functions\n";
   // Absolute value for int and double
   assert(absoluteVal(b1) == 1);
   assert(absoluteVal(b2) == 1.1);
   cout << "Pass - absolute value functions\n";
   // Factorial
   assert(factorial(c1) == 120);
   cout << "Pass - factorial function\n";
   // Combination
   assert(combination(3,5) == 720);
   // Permutation
   assert(permutation(3,5) == 6);

   return 0;
}