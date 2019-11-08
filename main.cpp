#include <iostream>
#include <fstream>
#include "myFunctions.h"
#include <iomanip>
#include <sstream>

using namespace std;

const int WIDTH = 5;

void CreateTriangleLine(ostringstream &oss, int numRows, int i) {
   // Print the Spaces before the numbers
   for (int space = 1; space < numRows - i; space++) {
      oss <<  setw(WIDTH) << " ";
   }
   // Print the number
   for (int j = 0; j <= i; j++) {
      oss << setw(WIDTH) << right << combination(i, j);
      oss << setw(WIDTH) << " ";
   }
   oss << endl;
}

string CreateTriangle(int numRows, char direction) {
   ostringstream oss;

   switch(direction) {
      case 'U':
         for (int i = 0; i < numRows; i++) {
            CreateTriangleLine(oss, numRows, i);
         }
         break;
      case 'D':
         for (int i = numRows - 1 ; i >= 0; i--) {
            CreateTriangleLine(oss, numRows, i);
         }
         break;
      default:
         break;
   }

   return oss.str();
}

int main() {
   //combinations
   //use functions from wednesday's hw
   int numRows;
   ofstream outFS;
   string triangleString;
   
   cout << "Please Enter The Number of Rows: ";
   cin >> numRows;
   cout << numRows << endl;
   cout << endl;
   
   // Create the Triangle
   triangleString = CreateTriangle(numRows, 'U');
   cout << triangleString;
   // Open the file, output the results to the file and close it
   outFS.open("Pascal.txt");
   outFS << triangleString;
   outFS.close();
   
   cout << endl;
   cout << "*** Start Extra Credit ***" << endl;
   cout << endl;
   
   cout << CreateTriangle(numRows, 'D');
   
   cout << endl;
   cout << "*** End Extra Credit ***" << endl;

   return 0;
}