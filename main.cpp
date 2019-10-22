#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void printArray(int n) {
   int myArray[n][n];

   // Build it
   // Row
   for (int r=0; r < n; r++) {
      // Column
      for (int c=0; c < n; c++) {
         int y = 0;
         if (r == 0 || c == 0 || r + 1 == n || c + 1 == n) {
            y = 1;
         } else if (r == c && r + c == n -1) {
            y = 3;
         } else {
            y = 2;
         }
         myArray[r][c] = y;
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
      printArray(userInputArray[i]);
   }
   cout << "\n";

   return 0;
}
