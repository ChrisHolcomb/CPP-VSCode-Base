#include <iostream>
#include <string>
using namespace std;

int main() {
   string userInput=" ", strR, strL, strJ;
   int intR, intL, intJ;

   while(1) {
      getline(cin, userInput);
      if (userInput == "EOF" || userInput.length() < 1) {
         exit(1);
      }
      else
      {
         size_t posPlus=0, posEqual=0;
         posPlus = userInput.find("+");
         posEqual = userInput.find("=");
         strR = userInput.substr(0, posPlus);
         strL = userInput.substr(posPlus + 1, (posEqual - 1) - posPlus);
         strJ = userInput.substr(posEqual + 1, posEqual - userInput.length());

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