#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    ifstream file1, file2;
    string fileName1, fileName2;
    string operation;
    int r1, c1, r2, c2, nums;
    int matrix2[r2][c2];
    int matrix1[r1][c1];
    
    getline(cin, fileName1);
    getline(cin, fileName2);
    getline(cin, operation);
    
    for (unsigned int i = 0; i < operation.size(); i++){
        operation[i] = toupper(operation[i]);
    }

    
    file1.open(fileName1);
    if (!file1) {
        cout << "Error: File " << fileName1 << " did not open." << endl;
    }
    else {
        while (!file1.eof()) {
            cin >> r1;
            cin >> c1;
            int matrixNums;
            matrixNums = r1 * c1;
            int numCount = 0;
            while (numCount <= matrixNums) {
                for (int i = 0; i < r1; i++) {
                    for (int j = 0; j < c1; j++) {
                        cin >> nums;
                        matrix1[i][j] = nums;
                        numCount++;
                    }
                }
            }
        }
    }
    
    file2.open(fileName2);
    if (!file2) {
        cout << "Error: File " << fileName2 << " did not open." << endl;
    }
    else {
        while (!file2.eof()) {
            cin >> r2;
            cin >> c2;
            
            int matrixNums;
            matrixNums = r2 * c2;
            int numCount = 0;
            while (numCount <= matrixNums){
                for (int i = 0; i < r2; i++) {
                    for (int j = 0; j < c2; j++) {
                        cin >> nums;
                        matrix2[i][j] = nums;
                        numCount++;
                    }
                }
            }
        }
    }
    
    if (r1 != r2 || c1 != c2) {
        cout << "Two matrices are not " << operation << " comparable." << endl;
    }
    else {
        int outputMatrix[r1][c2];
        if (operation == "add") {
            for (int i = 0; i < r1; i++) {
                for (int j = 0; j < c1; j++) {
                    outputMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
                    cout << outputMatrix[i][j] << " ";
                }
                cout << endl;
            }
        }
        else if (operation == "subtract") {
            for (int i = 0; i < r1; i++) {
                for (int j = 0; j < c1; j++) {
                    outputMatrix[i][j] = matrix1[i][j] - matrix2[i][j];
                    cout << outputMatrix[i][j] << " ";
                }
                cout << endl;
            }
        }
        else if (operation == "multiply") {
            for (int i = 0; i < r1; i++) {
                for (int j = 0; j < c1; j++) {
                    outputMatrix[i][j] = matrix1[i][j] * matrix2[i][j];
                    cout << outputMatrix[i][j] << " ";
                }
                cout << endl;
            }
        }
    }
    
    
    
    
    
    file1.close();
    file2.close();
    return 0;
}