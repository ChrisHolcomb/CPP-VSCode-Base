#include <iostream>
#include "ClosestPair.h"
using namespace std;

int main() {

   Point pointArray[5];

   for (int i=0; i < 5; i++) {
      Point currPoint(rand() % 100, rand() % 100);
      pointArray[i] = currPoint;
   }

   Pair myPair = Closest_Pair(pointArray, 5);

   cout << "Point One: " << myPair.indexPointOne << endl;
   cout << "Point Two: " << myPair.indexPointTwo << endl;

   cout << endl;

   return 0;
}