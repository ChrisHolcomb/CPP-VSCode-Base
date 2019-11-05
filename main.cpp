#include <iostream>
#include "myCustomCalc.h"
using namespace std;

int main() {

   int a, b, result;
   string operation;

   cout << "Enter 2 integers: ";
   cin >> a >> b;
   cout << "Enter an operator (add/subtract/multiply): ";
   cin >> operation;

   if (operation == "add") {
      result = add(a,b);
   } else if (operation == "subtract") {
      result = subtract(a,b);
   } else if (operation == "multiply") {
      result = mulitply(a,b);
   } else {
      cout << "wrong operator.";
      return -1;
   }

   cout << "Result: " << result << "\n";

   return 0;
}