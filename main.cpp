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
        cout << "Enter Matrix Size: ";
        cin >> matrixSize;
        cout << "Enter Row Data: ";

        int matrixArray[matrixSize][matrixSize];
        isMagic = true;
        numArray.clear();
        int rowSum = 0;

        

        // Get matrix data and check Rows
        for (int row = 0; row < matrixSize; row++) {
            rowSum = 0;

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
            //cout << "\nMatrixSum = " << matrixSum << " rowSum = " << rowSum << " isMagic = " << (isMagic ? "yes" : "no") << "\n";
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
                    break;
                }
                //cout << "\nMatrixSum = " << matrixSum << " colSum = " << colSum << " isMagic = " << (isMagic ? "yes" : "no") << "\n";
            }
        }

        // Check diag
        if (isMagic) {
            int diagSum = 0;
            for (int d = 0; d < matrixSize; d++) {
                diagSum += matrixArray[d][d];
            }

            isMagic = matrixSum == diagSum;
            //cout << "\nMatrixSum = " << matrixSum << " diagSum1 = " << diagSum << " isMagic = " << (isMagic ? "yes" : "no") << "\n";
            diagSum = 0;

            if (isMagic) {
                for (int d = 0; d < matrixSize; d++) {
                    diagSum += matrixArray[d][(matrixSize - 1) - d];
                }
            }
            isMagic = matrixSum == diagSum;
            //cout << "\nMatrixSum = " << matrixSum << " diagSum2 = " << diagSum << " isMagic = " << (isMagic ? "yes" : "no") << "\n";

            if (isMagic) {
                std::sort(numArray.begin(), numArray.end());
                for (int n = 0; n < (int)numArray.size() - 1; n++) {
                    if (numArray[n] == numArray[n+1])
                    {
                        isMagic = false;
                        break;
                    }
                }
                //cout << "\nMatrixSum = " << matrixSum << " isMagic = " << (isMagic ? "yes" : "no") << " - dup check\n";
            }
        }
        message += (isMagic ? "Magic Square" : "Not Magic Square");
        message += "\n";
    }
    cout << message << "\n";

    return 0;
}
