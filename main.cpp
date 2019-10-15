#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
   vector<char> vConsonants {'p','k','h','l','m','n'};
   string userInput;
   bool hawaiian=false;

   cout << "Enter a Hawaiian word: ";
   getline(cin, userInput);

   for (int i=0; i<userInput.length(); i++) {
      if (find(vConsonants.begin(), vConsonants.end(), userInput[i]) != vConsonants.end()){
         hawaiian = true;
      }
   }

   string isHawaiian = hawaiian ? "Yes" : "No";
   cout << "Hawaiian Word: " << isHawaiian;
   cout << endl;

   return 0;
}