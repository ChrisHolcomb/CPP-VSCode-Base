#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

vector<vector<int>> getArrayForFile(string fileName) {
   ifstream myFile;
   string line;
   vector<vector<int>> myVector;
   int r=0, c=0, n=0;
   istringstream iss;

   myFile.open(fileName);
   if (!myFile){
      cout << "Could not open file " << fileName << "\n";
      return myVector;
   }
   getline(myFile, line);
   iss.str(line);
   iss >> r >> c;
   for (int i=0; i < r; i++) {
      vector<int> tmp;
      for (int j=0; j < c; j++) {
         getline(myFile, line);
         iss.clear();
         iss.str(line);
         iss >> n;
         tmp.push_back(n);
      }
      myVector.push_back(tmp);
   }

   myFile.close();

   return myVector;
}

void showMatrix(vector<vector<int>> myVector) {
   for (int i=0; i < (int)myVector.size(); i++) {
      for (int j=0; j < (int)myVector[i].size(); j++) {
         cout << myVector[i][j] << " ";
      }
      cout << "\n";
   }
   cout << "\n";
}

vector<vector<int>> outWithOperator(vector<vector<int>> matrix1, vector<vector<int>> matrix2, string myOperator) {
   vector<vector<int>> outputVector;
   if (myOperator == "MULTIPLY") {
      if (matrix1[0].size() != matrix2.size()) {
         cout << "Two matrices are not " << myOperator << " comparable.\n";
         return outputVector;
      }
   } else if (matrix1.size() != matrix2.size()) {
      cout << "Two matrices are not " << myOperator << " comparable.\n";
      return outputVector;
   }

   for (int i=0; i < (int)matrix1.size(); i++) {
      vector<int> tmp;
      for (int j=0; j < (int)matrix1[i].size(); j++) {
         if (myOperator == "ADD") tmp.push_back(matrix1[i][j] + matrix2[i][j]);
         if (myOperator == "SUBTRACT") tmp.push_back(matrix1[i][j] - matrix2[i][j]);
         if (myOperator == "MULTIPLY") tmp.push_back(matrix1[i][j] * matrix2[i][j]);         
      }
      outputVector.push_back(tmp);
   }

   return outputVector;
}

// For debuging data file
void showDataFile(string fileName) {
   ifstream myFile;
   string line;

   myFile.open(fileName);
   if (!myFile){
      cout << "Could not open file " << fileName << "\n";
   }
   while(getline(myFile, line)) {
      cout << line << "\n";
   }

   myFile.close();
}

int main() {
   string fileName1, fileName2, operation;
   vector<vector<int>> matrix1Array;
   vector<vector<int>> matrix2Array;
   vector<vector<int>> outputArray;

   cout << "Enter file 1 name: ";
   cin >> fileName1;
   cout << "Enter file 2 name: ";
   cin >> fileName2;
   cout << "Enter operator: ";
   cin >> operation;

   for (int w = 0; w < (int)operation.length(); w++) {
      operation[w] = toupper(operation[w]);
   }

   matrix1Array = getArrayForFile(fileName1);
   matrix2Array = getArrayForFile(fileName2);

   outputArray = outWithOperator(matrix1Array, matrix2Array, operation);
   showMatrix(outputArray);

   // DEBUG - Show matrix for file 1 and 2
   // showMatrix(matrix1Array);   
   // showMatrix(matrix2Array);

   // DEBUG - Show format of input file
   //showDataFile(fileName1);

   // DEBUG - Test restuls for each operator
   // outputArray = outWithOperator(matrix1Array, matrix2Array, "ADD");
   // cout << "ADD" << "\n";
   // showMatrix(outputArray);
   // outputArray = outWithOperator(matrix1Array, matrix2Array, "SUBTRACT");
   // cout << "SUBTRACT" << "\n";
   // showMatrix(outputArray);
   // outputArray = outWithOperator(matrix1Array, matrix2Array, "MULTIPLY");
   // cout << "MULTIPLY" << "\n";
   // showMatrix(outputArray);
   
   return 0;
}