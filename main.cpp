#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {
   string inputString;
   int matrixSize=0, inputReadCount=0;

   // get our input string
   getline(cin, inputString);
   // convert string to a charactor array
   vector<char> inputMessage(inputString.begin(), inputString.end());
   // get our matrix square size
   // TODO: come back and make sure this is an odd square
   matrixSize = ceil(sqrt(inputMessage.size()));
   // set our messageArray
   char messageArray[matrixSize][matrixSize];

   // fill our message array
   for (int i=0; i < matrixSize; i++) {
      for (int j=0; j < matrixSize; j++) {
         if (inputReadCount < inputMessage.size()) {
            messageArray[i][j] = inputMessage[inputReadCount];
         } else {
            messageArray[i][j] = '*';
         }
         inputReadCount++;
      }
   }

   // TESTING - print out to test results of matrix
   for (int i=0; i < matrixSize; i++) {
      for (int j=0; j < matrixSize; j++) {
         cout << messageArray[i][j] << " ";
      }
      cout << "\n";
   }
   cout << "\n";

   return 0;
}