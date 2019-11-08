#include <iostream>
#include <fstream>
#include "myFunctions.h"
#include <iomanip>
using namespace std;

int main() {
   //combinations
    //use functions from wednesday's hw
    int numRows;
    ofstream outFS;
    
    outFS.open("Pascal.txt");
    
    cout << "Please Enter The Number of Rows: ";
    cin >> numRows;
    cout << numRows << endl;
    cout << endl;
    
    
    for (int i = 0; i < numRows; i++) {
       
        for (int space = 0; space < numRows - i; space++) {
            cout << "    ";
            outFS << "    ";
        }
        for (int j = 0; j <= i; j++) {
            cout << setw(5) << right << combination(i, j) << setw(5) << " ";
            outFS << combination(i, j) << " ";
        }
        cout << endl;
    }
    outFS.close();
    
    cout << endl;
    cout << "*** Start Extra Credit ***" << endl;
    cout << endl;
    
    for (int i = numRows - 1 ; i >= 0; i--) {
        for (int space = 0; space < numRows - i; space++) {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++) {
            cout << combination(i, j) << " ";
        }
        cout << endl;
    }
    
    cout << endl;
    cout << "*** End Extra Credit ***" << endl;
    return 0;
}