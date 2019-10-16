#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
   vector<char> valid {'p','k','h','l','m','n','a','e','i','o','u'};
   vector<char> contant {'p','k','h','l','m','n'};
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

      for (int i=0; i<userInput.length(); i++) {
         if (find(valid.begin(), valid.end(), userInput[i]) == valid.end()){
            cout << userInput[i] << " is not a valid hawaiian character\n";
            isHawaiian = false;
            break;
         }
         else
         {
            string s;
            s = userInput[i];
            s += userInput[i+1];
            for (int j=0; j<vowelGroups.size(); j++) {
               if (s == vowelGroups[j][0]) {
                  pronounce += vowelGroups[j][1];
                  if (i < userInput.length() - 1) {
                     pronounce += "-";
                  }
                  isGroup = true;
                  i++;
               }
            }
            if (!isGroup){
               for (int j=0; j<vowels.size(); j++) {
                  if (userInput[i] == vowels[j][0].at(0)) {
                     pronounce += vowels[j][1];
                     isVowel = true;
                     if (i < userInput.length() - 1) {
                        pronounce += "-";
                     }
                  }
               }
            }        
         }
         if (!isVowel && !isGroup) {
            pronounce += userInput[i];
         }
         isGroup=false;
         isVowel=false;
      }
      
      if (isHawaiian) {
         transform(userInput.begin(), userInput.end(), userInput.begin(), ::toupper);
         cout << userInput;
         cout << " is pronounced " << pronounce << "\n\n";

         cout << "Do you want to enter another word? Y/YES/N/NO ";
         getline(cin,answer);
         
         if (answer == "n" || answer == "no") {
            stop = true;
         }
      }
      isHawaiian = true;
      pronounce = "";
      userInput = "";
   }

   return 0;
}