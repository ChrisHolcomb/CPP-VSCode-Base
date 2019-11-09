#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>
#include "triangle.h"

using namespace std;

int main() {
   string fileName, fileContent;
   ifstream myFile;
   istringstream iss;
   double a, b, c;
   double x1, y1, x2, y2, x3, y3, area;
   vector<double> areaArray;

   cout << "Enter name of data file : ";
   getline(cin, fileName);

   myFile.open(fileName);
   if (!myFile) {
      cout << "Error, Try again.";
   } else {
      // get the header out of the way
      getline(myFile, fileContent);
      // Now get the data
      while(getline(myFile, fileContent)) {
         iss.clear();
         iss.str(fileContent);
         iss >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
         cout << "(" << setw(6) << right << x1 << ", " << setw(6) << right << y1 << ")  ";
         cout << "(" << setw(6) << right << x2 << ", " << setw(6) << right << y2 << ")  ";
         cout << "(" << setw(6) << right << x3<< ", " << setw(6) << right << y3 << ")  ";
         a = lengthOfSide(x2, y2, x1, y1);
         b = lengthOfSide(x3, y3, x2, y2);
         c = lengthOfSide(x1, y1, x3, y3);
         area = triangleArea(a,b,c);

         cout << fixed << setprecision(2);
         cout << "    area = " << setw(8) << right << area << endl;

         areaArray.push_back(area);
      }

   }
   myFile.close();
   cout << endl;

   return 0;
}