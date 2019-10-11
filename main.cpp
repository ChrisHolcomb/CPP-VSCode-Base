#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
   string fileName, fileContent, strR, strL, strJ;
   int intR, intL, intJ;
   ifstream inputFile;

   cout << "Enter file name: ";
   cin >> fileName;
   
   inputFile.open(fileName);
   if (!inputFile) {
      cout << "Error: Could not open file.\n";
   }
   else 
   {
      while(getline(inputFile, fileContent)) {
         size_t posPlus = 0, posEqual=0;
         posPlus = fileContent.find("+");
         posEqual = fileContent.find("=");
         strR = fileContent.substr(0, posPlus);
         strL = fileContent.substr(posPlus + 1, (posEqual - 1) - posPlus);
         strJ = fileContent.substr(posEqual + 1, posEqual - fileContent.length());

         if (strR == "R") {
            intR = stoi(strJ) - stoi(strL);
            cout << intR << endl;
         } else if (strL == "L") {
            intL = stoi(strJ) - stoi(strR);
            cout << intL << endl;
         } else if (strJ == "J") {
            intJ = stoi(strR) + stoi(strL);
            cout << intJ << endl;
         }
      }
   }

   return 0;
}