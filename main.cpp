#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

void FindPair(string* d, int* count, string pair, int arraySize);
void SortPair(string* d, int* count, int arraySize);
void DisplayResults(string d[], int count[], string testContent);
void ReadInput(int numLines);

int main() {
    int numLines = -1;
    
    while (numLines != 0) {
        cin >> numLines;
        cin.ignore();
        if (numLines > 0){
            ReadInput(numLines);
        }
    } 

    return 0;
}

void ReadInput(int numLines) {
    const int arraySize = 1000;
    string d[arraySize];
    int count[arraySize] = {0};
    string lineContent, testContent;
    for (int i = 0; i < numLines; i++) {
        getline(cin, lineContent);
        testContent += lineContent;
    }
    for (unsigned int i = 0; i < (testContent.length() - 1); i++) {
        FindPair(d, count, testContent.substr(i, 2), arraySize);
    }
    SortPair(d, count, arraySize);
    DisplayResults(d, count, testContent);
}

void FindPair(string* d, int* count, string pair, int arraySize) {
    bool found = false;
    
    for (int i = 0; i < arraySize; i++) {
        if (pair == d[i]) {
            count[i]++;
            found = true;
            break;
        }
    }
    if (!found) {
        for (int i = 0; i < arraySize; i++) {
            if (d[i].length() == 0) {
                d[i] = pair;
                count[i]++;
                break;
            }
        }
    }
}

void SortPair(string* d, int* count, int arraySize) {
    for (int i = 0; i < (arraySize - 1); i++) {
        for (int j = 0; j < (arraySize - 1); j++) {
            if (count[j] < count[j + 1]) {
                swap(count[j], count[j + 1]);
                swap(d[j], d[j + 1]);
            }
        }
    }

    for (int i = 0; i < (arraySize - 1); i++) {
        for (int j = 0; j < (arraySize - 1); j++) {
            if (count[j] == count[j + 1]) {
                if (d[j] > d[j + 1]) {
                    swap(count[j], count[j + 1]);
                    swap(d[j], d[j + 1]);
                }
            }
        }
    }
}

void DisplayResults(string d[], int count[], string testContent) {
    double frequency = 0.0;    
    for (int i = 0; i < 5; i++) {
        frequency = (double)count[i] / (testContent.length() - 1);
        cout << d[i] << " " << count[i] << " "
        << fixed << setprecision(6) << frequency << endl;
    }
}