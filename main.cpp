#include <iostream>
#include <string>
using namespace std;

string PrintMenu(string);
int GetNumOfNonWSCharacters(string);
int GetNumOfWords(const string);
int FindText(string, string);
string ReplaceExclamation(const string);
string ShortenSpaces(const string);

int main() {
   string userText, result;

   cout << "Enter a sample text: \n";
   getline(cin, userText);
   cout << "You entered: ";
   cout << userText;

   while(1) {
      cout << PrintMenu(userText);
   }
   cout << endl;

   return 0;
}

string PrintMenu(const string userText) {
   string results = "INVALID", userInput;
   char option;
   bool done = false;

   cout << "\n\nMENU\n";
   cout << "c - Number of non-whitespace characters\n";
   cout << "w - Number of Words\n";
   cout << "f - Find text\n";
   cout << "r - Replace all !'s\n";
   cout << "s - Shorten spaces\n";
   cout << "q - Quit\n";

   while(!done) {
      cout << "\nChoose an option: ";
      cin >> option;

      switch(option) {
         case 'c':
            results = "Number of non-whitespace charaters: ";
            results += to_string(GetNumOfNonWSCharacters(userText));
            done = true;
            break;
         case 'w':
            results = "Number of words: ";
            results += to_string(GetNumOfWords(userText));
            done = true;
            break;
         case 'f':
            cout << "Enter a word or phrase to be found: ";
            cin.ignore();
            getline(cin, userInput);
            results = "\"" + userInput + "\" instances: ";
            results += to_string(FindText(userInput, userText));
            done = true;
            break;
         case 'r':
            results = ReplaceExclamation(userText);
            done = true;
            break;
         case 's':
            results = ShortenSpaces(userText);
            done = true;
            break;
         case 'q':
            exit(1);
            break;
         default:
            break;
      }
   }

   return results;
}

int GetNumOfNonWSCharacters(string userText) {
   int counter=0;

   for (int i=0; i < userText.length(); i++) {
      if (userText[i] != ' ') {
         counter++;
      }
   }

   return counter;
}

int GetNumOfWords(const string userText) {
   int counter=1;

   for (int i=0; i< userText.length(); i++) {
      if (userText[i] == ' ') {
         counter++;
      }
   }

   return counter;
}

int FindText(string word, string userText) {
   int counter=0;
   bool found = true;

   // Check each letter of the user text
   for (int i=0; i < userText.length(); i++) {
      // Starting at each letter, see if the word or phrase matches
      for (int j=0; j < word.length(); j++) {
         if (userText[i + j] != word[j]) {
            found = false;
         }
      }
      // we found a match starting at userText[i] for a length of word
      if (found) {
         counter++;
      }
      // reset found to true
      found = true;
   }
   
   return counter;
}

string ReplaceExclamation(const string userText) {
   string newString(userText);

   for (int i=0; i < userText.length(); i++) {
      if (userText[i] == '!') {
         newString[i] = '.';
      }
   }
   
   return newString;
}

string ShortenSpaces(const string userText) {
   string newString;

   for (int i=0; i < userText.length(); i++) {
      if (!(userText[i] == ' ' && userText[i + 1] == ' ')) {
         newString += userText[i];         
      }
   }
   
   return newString;
}