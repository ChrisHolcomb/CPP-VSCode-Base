#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows, num=0;

    cout << "Enter number of rows: ";
    cin >> rows;

    // for (int i = 0; i < rows * 2; i += 2) {
    //     for (int j = 0; j <= i; j += 2) {
    //         cout << j << " ";
    //     }
    //     cout << "\n";
    // }
    // cout << "\n";

    for (int i = 1; i <= rows; i++) {
        // print spaces
        for (int j = 0; j < i - 1; j++) {
            cout << " ";
        }
        // print "*"
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << "\n";

    }
    cout << "\n";

    return 0;
}
