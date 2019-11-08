#include <iostream>
#include <string>
using namespace std;

string PrintMenu(string);

int main() {
   string userText, result;

   cout << "Enter a sample text: \n";
   getline(cin, userText);
   cout << "You entered: ";
   cout << userText;

   cout << PrintMenu(userText);

   return 0;
}

string PrintMenu(const string userText) {
   string results = "INVALID";
   char option;

   cout << "\n\nMENU\n";
   cout << "c - Number of non-whitespace characters\n";
   cout << "w - Number of Words\n";
   cout << "f - Find text\n";
   cout << "r - Replace all !;s\n";
   cout << "s -Shorten spaces\n";
   cout << "q - Quit\n";

   while(1) {
      cout << "\nChoose an option: ";
      cin >> option;

      switch(option) {
         case 'q':
            exit(1);
            break;
         default:
            break;
      }
   }

   return results;
}