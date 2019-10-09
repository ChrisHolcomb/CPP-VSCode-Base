
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

int main() {
   string fileName, madLibsContent, madLibsStory, lineWord, replaceWord, postfix;
   ifstream madLibsFile;
   istringstream lineStream;
   int count = 1;
   bool stop=false;

   do {
      cout << "Enter File Name: ";
      getline(cin, fileName);
      cout << fileName << endl;

      madLibsFile.open(fileName);
      if (!madLibsFile) {
         count++;
         if (count == 3) {
            cout << "Error: File Not Open after 3 attempts.\n";
            stop=true;
            return -1;
         }
      } 
      else 
      {
         while(getline(madLibsFile, madLibsContent)){
            lineStream.clear();
            lineStream.str(madLibsContent);
            while(lineStream >> lineWord) {
               // go through each word looking for the *
               if (lineWord.find('*') != string::npos) {
                  // catch 's and . in the words and add them back in or 
                  // just add a space at the end of this word.
                  postfix = (lineWord.find("'s") != string::npos) ? "'s " : 
                     (lineWord.find('.') != string::npos) ? "." : " ";
                  // remove the "*" from the output
                  if (lineWord.find('*') != string::npos) {
                     lineWord.erase(lineWord.find('*'), 1);
                  }
                  // remove the periods at the end for output
                  if (lineWord.find(".") != string::npos) {
                     lineWord.erase(lineWord.find('.'), 1);
                  }
                  // replace the under scores with a space
                  if (lineWord.find("_") != string::npos) {
                     lineWord.replace(lineWord.find("_"),1,1,' ');
                  }
                  cout << "give me a " << lineWord << ": ";
                  cin >> replaceWord;
                  madLibsStory += replaceWord + postfix;

               } else {
                  madLibsStory += lineWord + " ";
               }
            }
            madLibsStory += "\n";
         }
         madLibsFile.close();
         cout << madLibsStory;
         stop=true;
      }
   } while (!stop);
    
   return 0;
}