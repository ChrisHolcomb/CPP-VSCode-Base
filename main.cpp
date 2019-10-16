#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
   vector<char> valid {'p','k','h','l','m','n','a','e','i','o','u',' ','\''};
   vector<vector<string>> vowels {
      vector<string>{"a","ah"},
      vector<string>{"e","eh"},
      vector<string>{"i","ee"},
      vector<string>{"o","oh"},
      vector<string>{"u","oo"}
   }; 
   vector<vector<string>> vowelGroups {
      vector<string>{"ai","eye"},
      vector<string>{"ae","eye"},
      vector<string>{"ao","ow"},
      vector<string>{"au","ow"},
      vector<string>{"ei","ay"},
      vector<string>{"eu","eh-oo"},
      vector<string>{"iu","ew"},
      vector<string>{"oi","oy"},
      vector<string>{"ou","ow"},
      vector<string>{"ui","ooey"}
   };
   string userInput, pronounce, answer;
   bool isHawaiian=true, isGroup=false, isVowel=false, stop=false;

   while(!stop) {
      cout << "Enter a Hawaiian word to pronounce: ";
      getline(cin, userInput);
      // conver to lower case for matching
      transform(userInput.begin(), userInput.end(), userInput.begin(), ::tolower);
      // go through each character of the input
      for (int i=0; i<userInput.length(); i++) {
         if (find(valid.begin(), valid.end(), userInput[i]) == valid.end()){
            cout << userInput[i] << " is not a valid hawaiian character\n";
            isHawaiian = false;
            break;
         }
         else
         {
            // check the current character and the next to see
            // if this is in the vowel group
            string s;
            s = userInput[i];
            s += userInput[i+1];
            // go through the vowel group and test the this and the next
            // character
            for (int j=0; j<vowelGroups.size(); j++) {
               if (s == vowelGroups[j][0]) {
                  pronounce += vowelGroups[j][1];
                  // only add the - if the next character is not a space or ' and
                  // we have not reached the end of line
                  if (i < userInput.length() - 2 && 
                        userInput[i+2] != ' ' &&
                        userInput[i+2] != '\'') {
                     pronounce += "-";
                  }
                  // mark as a group and fat forward our i pointer so we dont
                  // test the next vowel since we know it is a group
                  isGroup = true;
                  i++;
               }
            }
            // if it wasn't a group check the vowel list to this character
            if (!isGroup){
               for (int j=0; j<vowels.size(); j++) {
                  if (userInput[i] == vowels[j][0].at(0)) {
                     pronounce += vowels[j][1];
                     isVowel = true;
                     // only add the - if the next character is not a space or ' and
                     // we have not reached the end of line
                     if (i < userInput.length() - 1 && 
                           userInput[i+1] != ' ' &&
                           userInput[i+1] != '\'') {
                        pronounce += "-";
                     }
                  }
               }
            }        
         }
         // If this was not a value or a vowel group then add the charter to the output
         if (!isVowel && !isGroup) {
            pronounce += userInput[i];
         }
         // clear our flags for group and vowel
         isGroup=false;
         isVowel=false;
      }
      
      // only output the results if this was a valid hawaiian word
      if (isHawaiian) {
         transform(userInput.begin(), userInput.end(), userInput.begin(), ::toupper);
         // make the first let upper case
         pronounce[0] = toupper(pronounce[0]);
         cout << userInput;
         cout << " is pronounced " << pronounce << "\n\n";
         
         cout << "Do you want to enter another word? Y/YES/N/NO ";
         getline(cin,answer);
         transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
         
         if (answer == "n" || answer == "no") {
            stop = true;
         }
      }
      
      isHawaiian = true;   // reset our hawaiian flag
      pronounce = "";      // rest out prnounce string
   }

   return 0;
}