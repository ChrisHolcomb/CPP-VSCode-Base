#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void printArray(int n) {
   int myArray[n][n];

   // Build it
   // Row
   for (int i=0; i < n; i++) {
      // Column
      for (int j=0; j < n; j++) {
         myArray[i][j] = 1;
      }
   }

   // Print it
   // Row
   for (int i=0; i < n; i++) {
      // Column
      for (int j=0; j < n; j++) {
         cout << setw(3) << right << myArray[i][j];
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
