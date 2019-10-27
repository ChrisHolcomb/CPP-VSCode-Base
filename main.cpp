#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows, num=0;
    string results = "";

    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows * 2; i += 2) {
        for (int j = 0; j <= i; j += 2) {
            cout << j << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    return 0;
}
