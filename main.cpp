#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>

using namespace std;

int main() {
   vector<int> userInputArray;
   int userInput = -1;

   while (userInput != 0) {
      cin >> userInput;
      if (userInput == 0)
      {
         break;
      }
      else {
         userInputArray.push_back(userInput);
      }
   }

   for (int i=0; i < userInputArray.size(); i++) {
      //printArray(userInputArray[i]);
      int n = userInputArray[i];
      int myArray[n][n];

      // Build it
      for (int i = 1; i <= ceil(n / 2.0); i++) {
         for (int j = i-1; j < n-i; j++) {
            myArray[i-1][j] = i;
         }
         for (int k = i-1; k <= n-i; k++) {
            myArray[k][n - i] = i;
         }
         for (int x = n-i; x >= i-1; x--) {
            myArray[n-i][x] = i;
         }
         for (int y = n-i; y >= i-1; y--) {
            myArray[y][i - 1] = i;
         }
      }

      // Print it
      // Row
      for (int r=0; r < n; r++) {
         // Column
         for (int c=0; c < n; c++) {
            cout << setw(3) << right << myArray[r][c];
            if (c + 1 < n) {
               cout << " ";
            }
         }
         cout << "\n";
      }
      cout << "\n";
   }
   cout << "\n";

   return 0;
}
