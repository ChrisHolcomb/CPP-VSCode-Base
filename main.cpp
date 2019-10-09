#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main() {
   string mixDataFileName, mixDataContent, companyAContent, companyBContent, companyCContent;
   ifstream mixDataFile;
   ofstream companyAFile, companyBFile, companyCFile;


   cout << "Enter file name: ";
   getline(cin, mixDataFileName);
   cout << mixDataFileName << endl;

   mixDataFile.open(mixDataFileName);
   if (!mixDataFile) {
      cout << "Error: File Not Open.\n";
   }
   else
   {
      int lineCounter = 1, accountNumber;
      string strHeader1, strHeader2;
      while(getline(mixDataFile, mixDataContent)) {
         if (lineCounter == 1) {
            strHeader1 = mixDataContent;
            companyAContent = strHeader1 + "\n";
            companyBContent = strHeader1 + "\n";
            companyCContent = strHeader1 + "\n";
         } else if (lineCounter == 2) {
            strHeader2 = mixDataContent;
            companyAContent += strHeader2 + "\n";
            companyBContent += strHeader2 + "\n";
            companyCContent += strHeader2 + "\n";
         } else {
            istringstream issLine(mixDataContent);
            issLine >> accountNumber;
            cout << accountNumber;

            if (accountNumber >= 0 && accountNumber <= 400) {
               if (accountNumber >= 300){
                  companyBContent += mixDataContent + "\n";
               } else if (accountNumber >= 200) {
                  companyCContent += mixDataContent + "\n";
               } else {
                  companyAContent += mixDataContent + "\n";
               }
            }
         }
         lineCounter++;
      }
      mixDataFile.close();

      companyAFile.open("Company_A.txt");
      companyAFile << companyAContent;
      companyAFile.close();

      companyBFile.open("Company_B.txt");
      companyBFile << companyBContent;
      companyBFile.close();

      companyCFile.open("Company_C.txt");
      companyCFile << companyCContent;
      companyCFile.close();
   }

   return 0;
}