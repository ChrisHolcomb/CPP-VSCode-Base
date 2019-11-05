/*
* Author: Sammy Pedraza
* Assignment Title: Square Matrix 2
* Assignment Description: Program will read an integer that
*     is greater or equal to 0 and less than or equal to 15.
*     The number will correspond to the order of a bidimentional
*     array of integers. The program will build the array
*     following the pattern of 2 the power of the temp value.
* Due Date: 11/4/2019
* Date Created: 11/2/2019
* Date Last Modified: 11/2/2019
*/
/*
* Data Abstraction:
*         num - user's integer indicated array dimensions
*         matrix - vector that will be built to indicate the
*                  different matrices and their dimensions.
* Input:
*         The input will consits over several integers (num), one per
*         line. The integers correspond to orders from arrays to
*         be built. The end of the input will be indicated by 0.
* Process:
*         Program will read integers until the user enters 0. Each
*         integer will be added to a vector. The integer will give
*         the dimensions
*         until the quantity of fibNums is equal to the amount
*         of numCases. The program will assign the first elements
*         of the Fibonacci series as 0 and 1 and find the desired
*         fibonnaci number by calculating the sum of the two numbers
*         preceding it. This calculation will be done using a loop.
* Output:
*         For each integer inputted by the user, the program will
*         print the corresponding array.
* Assumptions:
*         The user will enter an integer not a double. They will
*         eventually enter 0 to stop the program. The program will
*         print a 1 when the row and column are equal to 1.
*/

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <iomanip>

using namespace std;

int numCount(int num) {
    int n = 0;
    while (num > 0) {
        num = num /10;
        n++;
    }
    return n;
}

int main() {
    int num;
    
    while (num != 0) {
        cin >> num;
        if (num == 0) {
            break;
        }
        else {
            int n = num, row, col;
            int sqMatrix[n][n];
            //build matrix
            int temp;
            for (row = 0; row < n; row++) {
               temp = row;
               for (col = 0; col < n; col++) {
                     int x = pow(2, temp);
                     sqMatrix[row][col] = x;
                     temp++;
               }
            }
            int width = numCount(sqMatrix[n-1][n-1]);

            for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                  cout << setw(width) << right << sqMatrix[i][j];
                  if (j + 1 < n) {
                  cout << " ";
                  }                               
            }
            cout << endl;
            }
            cout << endl;
        }
    }
    
    return 0;
}
