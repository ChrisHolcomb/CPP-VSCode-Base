#include <iostream>
#include <fstream>
#include "myFunctions.h"
#include <iomanip>
#include <sstream>

using namespace std;

const int WIDTH = 5;

string CreateTriangle(int numRows) {
   ostringstream oss;
    for (int i = 0; i < numRows; i++) {       
        for (int space = 0; space < numRows - i; space++) {
            oss <<  setw(WIDTH) << " ";
        }
        for (int j = 0; j <= i; j++) {
            oss << setw(WIDTH) << right << combination(i, j);
            oss << setw(WIDTH) << " ";
        }
        oss << endl;
    }

    return oss.str();
}

string CreateTriangleUpsideDown(int numRows) {
   ostringstream oss;
    for (int i = numRows - 1 ; i >= 0; i--) {
        for (int space = 0; space < numRows - i; space++) {
            oss << setw(WIDTH) << " ";
        }
        for (int j = 0; j <= i; j++) {
            oss << setw(WIDTH) << right << combination(i, j);
            oss << setw(WIDTH) << " ";
        }
        oss << endl;
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
   triangleString = CreateTriangle(numRows);
   cout << triangleString;
   // Open the file, output the results to the file and close it
   outFS.open("Pascal.txt");
   outFS << triangleString;
   outFS.close();
   
   cout << endl;
   cout << "*** Start Extra Credit ***" << endl;
   cout << endl;
   
   cout << CreateTriangleUpsideDown(numRows);
   
   cout << endl;
   cout << "*** End Extra Credit ***" << endl;

   return 0;
}