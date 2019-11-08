#include <iostream>
#include <string>
using namespace std;

string RemoveSpaces(string userString) {
   string newString;

   for (int i=0; i < (int)userString.length(); i++){
      if (userString[i] != ' ') {
         newString += userString[i];
      }
   }
   
   return newString;
}

int main() {
   string userInput;

   getline(cin, userInput);

   cout << RemoveSpaces(userInput) << endl;

   return 0;
}