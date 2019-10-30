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

   if (matrix1.size() != matrix2.size()) {
      cout << "NOT COMPATIBLE\n";
      return outputVector;
   }

   for (int i=0; i < (int)matrix1.size(); i++) {
      vector<int> tmp;
      for (int j=0; j < (int)matrix1[i].size(); j++) {
         if (myOperator == "add") tmp.push_back(matrix1[i][j] + matrix2[i][j]);
         if (myOperator == "subtract") tmp.push_back(matrix1[i][j] - matrix2[i][j]);
         if (myOperator == "multiply") tmp.push_back(matrix1[i][j] * matrix2[i][j]);
         
      }
      outputVector.push_back(tmp);
   }

   return outputVector;
}

int main() {
   string fileName1, fileName2;
   vector<vector<int>> matrix1Array;
   vector<vector<int>> matrix2Array;
   vector<vector<int>> outputArray;

   cout << "Enter file 1 name: ";
   cin >> fileName1;
   cout << "Enter file 2 name: ";
   cin >> fileName2;

   matrix1Array = getArrayForFile(fileName1);
   matrix2Array = getArrayForFile(fileName2);

   showMatrix(matrix1Array);   
   showMatrix(matrix2Array);

   outputArray = outWithOperator(matrix1Array, matrix2Array, "add");
   cout << "ADD" << "\n";
   showMatrix(outputArray);
   outputArray = outWithOperator(matrix1Array, matrix2Array, "subtract");
   cout << "SUBTRACT" << "\n";
   showMatrix(outputArray);
   outputArray = outWithOperator(matrix1Array, matrix2Array, "multiply");
   cout << "MULTIPLY" << "\n";
   showMatrix(outputArray);
   
   return 0;
}