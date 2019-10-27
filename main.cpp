#include <iostream>
#include <vector>
using namespace std;

int main() {
    int testCaseCount, num, matrixSize, matrixSum;
    string message;
    vector<int> numArray;
    bool isMagic = true;

    cout << "Enter number of Test: ";
    cin >> testCaseCount;

    for (int i =0; i < testCaseCount; i++) {
        cin >> matrixSize;

        int matrixArray[matrixSize][matrixSize];
        isMagic = true;
        int rowSum = 0;

        // Get matrix data and check Rows
        for (int row = 0; row < matrixSize; row++) {
            int rowSum = 0;

            for(int col = 0; col < matrixSize; col++) {
                cin >> num;
                matrixArray[row][col] = num;
                numArray.push_back(num);
                rowSum += num;
            }

            if (row == 0) {
                matrixSum = rowSum;
            } else if (isMagic) {
                isMagic = (matrixSum == rowSum);
            }
        }

        // Check Columns
        if (isMagic) {
            for (int col = 0; col < matrixSize; col++) {
                int colSum = 0;

                for (int row = 0; row < matrixSize; row++) {
                    colSum += matrixArray[row][col];
                }

                if (matrixSum != colSum && isMagic) {
                    isMagic = false;
                    //break;
                }
            }
        }

        // Check diag
        if (isMagic) {
            int diagSum = 0;
            for (int d = 0; d < matrixSize; d++) {
                diagSum += matrixArray[d][d];
            }

            isMagic = matrixSum == diagSum;
            diagSum = 0;

            if (isMagic) {
                for (int d = 0; d < matrixSize; d++) {
                    diagSum += matrixArray[d][(matrixSize - 1) - d];
                }
            }
            isMagic = matrixSum == diagSum;

            if (isMagic) {
                sort(numArray.begin(), numArray.end());
                for (int n = 0; n < (int)numArray.size() - 1; n++) {
                    if (numArray[n] == numArray[n+1])
                    {
                        isMagic = false;
                        break;
                    }
                }
            }
        }
        
        cout << (isMagic ? "Magic Square" : "Not Magic Square") << "\n";
    }

    return 0;
}
