
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

int main() {
    string fileName, madLibsContent;
    ifstream madLibsFile;
    int count = 0, x, y;
    
    do {
        count ++;
        cout << "Enter File Name: ";
        getline(cin, fileName);
        cout << fileName << endl;
        
        madLibsFile.open(fileName);
    } while (!madLibsFile && count < 3);
    
    if (!madLibsFile) {
        cout << "Error: File Failed to open after 3 tries." << endl;
        exit(1);
    }
    getline(madLibsFile, madLibsContent);
    getline(madLibsFile, madLibsContent);
    
    while (madLibsFile >> x >> y) {
        size_t found = madLibsContent.find('*');
        if (found != string::npos) {
            
        }
    }
    
    
    
    
    return 0;
}