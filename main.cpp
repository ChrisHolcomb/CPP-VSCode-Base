#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main() {
   string dataTitle, headerColumn1, headerColumn2, userData="", strDataPoint1, strDataPoint2;
   int intDataPoint;
   vector<string> strDataPoints;
   vector<int> intDataPoints;
   istringstream iss;
   bool foundError = false;
   

   // Promt the user for a title for the data. Output the title
   cout << "Enter a title for the data: ";
   getline(cin, dataTitle);
   cout << "You entered: " << dataTitle << endl;

   // Prompt the user for the headers of two columns of a table. Output the column headers
   cout << "\nEnter the column 1 header: ";
   getline(cin, headerColumn1);
   cout << "You entered: " << headerColumn1 << endl;
   cout << "\nEnter the column 2 header: ";
   getline(cin, headerColumn2);
   cout << "You entered: " << headerColumn2 << endl;

   while (userData != "-1") {
      // Promt the user for data points
      cout << "\nEnter a data point (-1 to stop input)\n";
      getline(cin, userData);
      if (userData != "-1") {                   // check to see if the user is done
         strDataPoint1 = "";
         strDataPoint2 = "";
         intDataPoint = 0;
         size_t pos = userData.find(',');       // get the position of the comma
         if (pos == string::npos) {             // check for a comma in the string
            cout << "Error: No comma in string.\n";
            foundError = true;
         } else if (count(userData.begin(),userData.end(),',') > 1) {   // make sure the isn't more
            cout << "Too many commas in input\n";                       // than one comma in the string
            foundError = true;
         } else {
            size_t posComma = userData.find(',');
            strDataPoint1 = userData.substr(0, posComma);
            strDataPoint2 = userData.substr(strDataPoint1.length() + 1, userData.length() - posComma);
            try {
               intDataPoint = stoi(strDataPoint2);
            } catch (exception e) {
               cout << "Error: Comma not followed by an integer.\n";
               foundError = true;
            }
         }

         if (!foundError) {
            cout << "Data string: " << strDataPoint1 << endl;
            cout << "Data integer: " << intDataPoint << endl;
            strDataPoints.push_back(strDataPoint1);
            intDataPoints.push_back(intDataPoint);
         }
      }
   }

   cout << setw(33) << right << dataTitle << endl;
   cout << setw(20) << left << headerColumn1 << "|";
   cout << setw(23) << right << headerColumn2 << endl;
   cout << setfill('-') << setw(43) <<  "" << setfill(' ') << endl;

   for (int i=0; i < strDataPoints.size(); i++) {
      cout << setw(20) << left << strDataPoints[i] << "|";
      cout << setw(23) << right << intDataPoints[i] << endl;
   }

   return 0;
}