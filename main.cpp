#include <iostream>
#include <string>
#include <vector>

using namespace std;

void createTeam(vector<int>&, vector<int>&);
void showMenu();
void addPlayer(vector<int>&, vector<int>&);
void removePlayer(vector<int>&, vector<int>&);
void updatePlayerRating(vector<int>&, vector<int>&);
void showPlayersAboveRating(vector<int>, vector<int>);
void showRoster(vector<int>, vector<int>);

const int NUM_PLAYERS = 5;

int main() {
   vector<int> playerJerseys;
   vector<int> playerRatings;
   char answer;

   createTeam(playerJerseys, playerRatings);
   showRoster(playerJerseys, playerRatings);

   while(1) {
      showMenu();

      cin >> answer;
      switch(answer) {
         case 'a':
            addPlayer(playerJerseys, playerRatings);
            break;
         case 'd':
            removePlayer(playerJerseys, playerRatings);
            break;
         case 'u':
            updatePlayerRating(playerJerseys, playerRatings);
            break;
         case 'r':
            showPlayersAboveRating(playerJerseys, playerRatings);
            break;
         case 'o':
            showRoster(playerJerseys, playerRatings);
            break;
         case 'q':
            return 1;
      }
   }

   return 0;
}

void createTeam(vector<int> &jerseys, vector<int> &ratings) {
   int numJersey=0, numRating=0;
   jerseys.clear();
   ratings.clear();

   for (int i = 1; i <= NUM_PLAYERS; i ++) {
      cout << "\nEnter player " << i << "'s jersey number: \n";
      cin >> numJersey;
      cout << "Enter player " << i << "'s rating: \n";
      cin >> numRating;

      jerseys.push_back(numJersey);
      ratings.push_back(numRating);
   }
}

void showRoster(vector<int> jerseys, vector<int> ratings) {
   cout << "\nROSTER\n";

   for (int i = 0; i < (int)jerseys.size(); i ++) {
      cout << "Player " << (i + 1) << " -- Jersey number: " << jerseys[i];
      cout << ", Rating: " << ratings[i] << "\n";
   }
}

void showMenu() {
   cout << "\nMENU\n";
   cout << "a - Add player\n";
   cout << "d - Remove player\n";
   cout << "u - Updated player rating\n";
   cout << "r - Output players above a rating\n";
   cout << "o - Output roster\n";
   cout << "q - Quit\n\n";

   cout << "Choose an option:\n";
}

void addPlayer(vector<int> &jerseys, vector<int> &ratings) {
   int numJersey=0, numRating=0;

   cout << "\nEnter a new player's jersey number: \n";
   cin >> numJersey;
   cout << "Enter a new player's rating: \n";
   cin >> numRating;

   jerseys.push_back(numJersey);
   ratings.push_back(numRating);
}

void removePlayer(vector<int> &jerseys, vector<int> &ratings) {
   int jerseyNum = 0;

   cout << "\nEnter a jersey number:\n";
   cin >> jerseyNum;

   for (int i = 0; i < (int)jerseys.size(); i++) {
      if (jerseys[i] == jerseyNum) {
         jerseys.erase(jerseys.begin() + i);
         ratings.erase(ratings.begin() + i);
      }
   }
}

void updatePlayerRating(vector<int> &jerseys, vector<int> &ratings) {
   int numJersey=0, numRating=0;

   cout << "Enter a jersey number: \n";
   cin >> numJersey;
   cout << "Enter a new rating for player: \n";
   cin >> numRating;

   for (int i = 0; i < (int)jerseys.size(); i++) {
      if (jerseys[i] == numJersey) {
         ratings[i] = numRating;
      }
   }
}

void showPlayersAboveRating(vector<int> jerseys, vector<int> ratings) {
   int numRating=0;

   cout << "\nEnter a rating:\n\n";
   cin >> numRating;


   cout << "ABOVE " << numRating << "\n";

   for (int i = 1; i <= (int)jerseys.size(); i ++) {
      if (ratings[i] >= numRating) {
         cout << "Player " << i << " -- Jersey number: " << jerseys[i];
         cout << ", Rating: " << ratings[i] << "\n";
      }
   }
}