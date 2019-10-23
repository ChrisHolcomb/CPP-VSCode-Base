
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

const int NUM_ELEMENTS = 12;
int main() {
    int l, num;
    char t;
    double array[NUM_ELEMENTS][NUM_ELEMENTS];
    double sum = 0.0, avg = 0.0;    
    
    cin >> l;
    cin >> t;
    
    for (int i = 0; i < NUM_ELEMENTS; i++) {
        for (int j = 0; j < NUM_ELEMENTS; j++) {
            cin >> num;
            array[i][j] = num;
        }
    }

    for (int i = 0; i < NUM_ELEMENTS; i++) {
        for (int j = 0; j < NUM_ELEMENTS; j++) {
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
    
    int count = 0;
    for (int j = 0; j < NUM_ELEMENTS; j++) {
        sum += array[l][j];
        count++;
    }
    
    avg = sum / count;
    
    if (t == 'S') {
        cout << fixed << setprecision(1);
        cout << sum << endl;
    }
    else if (t == 'M') {
        cout << fixed << setprecision(1);
        cout << avg << endl;
        
    }     
    
    return 0;
}