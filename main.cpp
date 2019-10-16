#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <algorithm>
using namespace std;

int main() {
   vector<char> constants {'p','k','h','l','m','n'};
   vector<vector<string>> vowels {
         vector<string>{"a","ah"},
         vector<string>{"e","eh"},
         vector<string>{"i","ee"},
         vector<string>{"o","oh"},
         vector<string>{"u","oo"}
      }; 
   string userInput;
   bool hawaiian=false;

   cout << "Enter a Hawaiian word: ";
   getline(cin, userInput);

   for (int i=0; i<userInput.length(); i++) {
      if (find(constants.begin(), constants.end(), userInput[i]) != constants.end()){
         hawaiian = true;
      }

      for (int j=0; j<vowels.size(); j++) {
         if (userInput[i] == vowels[j][0].at(0)) {
               cout << "replacing: " << userInput[i] << " with " << vowels[j][1] << "\n";
         }
      }
   }


   string isHawaiian = hawaiian ? "Yes" : "No";
   cout << "Hawaiian Word: " << isHawaiian;
   cout << endl;

   return 0;
}