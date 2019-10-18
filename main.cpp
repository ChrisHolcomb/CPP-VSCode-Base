#include <iostream>
using namespace std;

int main() {
   int numCases, numFib;
   string result = "";
    
   cin >> numCases;

   for (int testCase=0; testCase < numCases; testCase++) {
      cin >> numFib;

      unsigned long fib[numFib];
      fib[0] = 0; 
      fib[1] = 1; 

      for (int i = 2; i <= numFib; i++) 
      { 
         fib[i] = fib[i-1] + fib[i-2]; 
      }

      result += "Case " + to_string(testCase + 1);
      result += ": fib(" + to_string(numFib);
      result += ") = " + to_string(fib[numFib]);
      result +=  "\n";
   }

   cout << result;
   
   return 0;
}