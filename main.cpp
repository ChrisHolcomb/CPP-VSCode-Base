#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
   int numCases, numFib;
   vector<int> fibNumbers;

   cin >> numCases;

   for (int i=0; i < numCases; i++) {
      cin >> numFib;
      fibNumbers.push_back(numFib);
   }

   for (int testCase=0; testCase < fibNumbers.size(); testCase++) {
      int calcFibNum = fibNumbers[testCase];
      long double fib[calcFibNum];
      fib[0] = 0; 
      fib[1] = 1; 

      for (int i = 2; i <= calcFibNum; i++) 
      { 
         fib[i] = fib[i-1] + fib[i-2]; 
      }
      cout << setprecision(20);
      cout << "Case " << (testCase + 1) << ": fib(" << calcFibNum << ") = ";
      cout << fib[calcFibNum] << endl;
   }
   
   return 0;
}