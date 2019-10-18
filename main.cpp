#include <iostream>
#include <vector>
using namespace std;

int main() {
   int numCases, numFib;
   vector<long unsigned int> result;
    
   cin >> numCases;

   for (int testCase=0; testCase < numCases; testCase++) {
      cin >> numFib;

      long unsigned int fib[numFib];
      fib[0] = 0; 
      fib[1] = 1; 

      for (int i = 2; i <= numFib; i++) 
      { 
         fib[i] = fib[i-1] + fib[i-2]; 
      }

      result.push_back(fib[numFib]);
   }

   for (int i = 1; i <= result.size(); i++) {
      // Working on this part to print out the results
      //cout << "Case " << i << ": " << result[i] << endl;
   }
   
   return 0;
}