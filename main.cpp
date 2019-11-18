#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <vector>
#include "sphere.h"

using namespace std;

struct SphereData {
   int Number;
   double Radius, Area, Volume;
   string Color;

   SphereData(int number, double radius, double area, double volume, string color) {
      Number = number;
      Radius = radius;
      Area = area;
      Volume = volume;
      Color = color;
   }
};

void PrintReport(vector<SphereData> sphereData) {

   // Print the Header
   cout << setw(10) << right << "Number";
   cout << setw(10) << right << "Radius";
   cout << setw(10) << right << "Color";
   cout << setw(10) << right << "Area";
   cout << setw(10) << right << "Volume" << endl;

   // Print Data
   for (int i=0; i < (int)sphereData.size(); i++) {
      cout << fixed << setprecision(2);
      cout << setw(10) << right << sphereData[i].Number;
      cout << setw(10) << right << sphereData[i].Radius;
      cout << setw(10) << right << sphereData[i].Color;
      cout << setw(10) << right << sphereData[i].Area;
      cout << setw(10) << right << sphereData[i].Volume << endl;
   }
}

void PrintStats(vector<SphereData> sphereData) {
   int redCount=0, volNum=0;
   double redPerc=0, areaSum=0, avgArea=0;

   for (int i=0; i < (int)sphereData.size(); i++) {
      // Count Red Spheres
      if (sphereData[i].Color == "red") {
         redCount++;
      }
      // Count Spheres with Volumne greater then 215
      if (sphereData[i].Volume > 215) {
         volNum++;
      }
      areaSum += sphereData[i].Area;
   }
   cout << "Red Count: " << redCount << endl;

   redPerc = (redCount / (int)sphereData.size()) * 100.0;   
   avgArea = areaSum / (int)sphereData.size();

   cout << fixed << setprecision(2);
   cout << "Total Number of Spheres = " << (int)sphereData.size() << "." << endl;
   cout << redPerc << "% of Spheres are red." << endl;
   cout << volNum << " Spheres have a volume over 215." << endl;
   cout << "Average Area = " << avgArea << endl;
}

int main() {
    //DATA ABSTRACTION
    //double sphereRArray[100];
    vector<double> areaArray;
    vector<SphereData> sphereDataArray;
    //string sphereCArray[100];
    double r;
    string color;
    string fileName, fileContent;
    ifstream userFile;
    istringstream issLine;
    bool stop = false;
    
    do {
        cout << "Enter file name: ";
        //INPUT
        getline(cin, fileName);
        cout << fileName << endl;
        
        //PROCESS
        userFile.open(fileName);
        if(!userFile) {
            cout << "ERROR: File Not Open." << endl;
        }
        else {
            getline(userFile, fileContent);
            int i = 0;
            while (getline(userFile, fileContent)) {
               i++;
                issLine.clear();
                issLine.str(fileContent);
                Sphere currSphere;
                issLine >> r >> color;
                currSphere.setRadius(r);
                currSphere.setColor(color);

                // Add to our SphereData Struct
               SphereData sdata(i, 
                  currSphere.getRadius(), 
                  currSphere.area(), 
                  currSphere.volume(), 
                  currSphere.getColor());

               sphereDataArray.push_back(sdata);
            }
            stop = true;

            PrintReport(sphereDataArray);
            PrintStats(sphereDataArray);
            
            cout << "*** Start Extra Credit ***" << endl;
            cout << endl;
            
            cout << endl;
            cout << "*** End Extra Credit ***" << endl;
        }
        userFile.close();
    } while (!stop);
    
    return 0;
}