#include <iostream>
#include <vector>

using namespace std;

int GetFrequencyOfWord(vector<string> wordList, string currWord) {
   int count=0;

   for (int i=0; i < (int)wordList.size(); i++) {
      if (wordList[i] == currWord) {
         count++;
      }
   }

   return count;
}

int main() {
   int numWord=0, wordCount=0;
   string word;
   vector<string> wordArray;

   cin >> numWord;
   for (int i=0; i < numWord; i++) {
      cin >> word;
      wordArray.push_back(word);
   }

   for (int i=0; i < (int)wordArray.size(); i++) {
      cout << wordArray[i] << " " << GetFrequencyOfWord(wordArray, wordArray[i]) << endl;
   }

   cout << endl;

   return 0;
}