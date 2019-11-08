#include <iostream>
#include <string>
using namespace std;

string RemoveSpaces(string userString) {
   userString.erase(remove(userString.begin(), userString.end(), ' '), userString.end());
   return userString;
}

int main() {
   string userInput;

   getline(cin, userInput);

   cout << RemoveSpaces(userInput) << endl;

   return 0;
}