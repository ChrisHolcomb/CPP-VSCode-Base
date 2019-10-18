#include <iostream>
#include <limits>
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

      string strFibNum;
      if (numFib < 94) {
         for (int i = 2; i <= numFib; i++) 
         { 
            fib[i] = fib[i-1] + fib[i-2]; 
         }
         strFibNum = to_string(fib[numFib]);
      } else if (numFib == 94) {
         strFibNum = "19740274219868223167";      
      } else if (numFib == 95) {
         strFibNum = "31940434634990099905";
      } else if (numFib == 96) {
         strFibNum = "51680708854858323072";
      } else if (numFib == 97) {
         strFibNum = "83621143489848422977";
      } else if (numFib == 98) {
         strFibNum = "135301852344706746049";
      } else if (numFib == 99) {
         strFibNum = "218922995834555169026";
      }

      result += "Case " + to_string(testCase + 1);
      result += ": fib(" + to_string(numFib);
      result += ") = " + strFibNum;
      result +=  "\n";
   }

   cout << result;
   
   return 0;
}