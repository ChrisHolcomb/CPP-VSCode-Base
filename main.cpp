#include <iostream>
#include "sphere.h"
using namespace std;

int main() {
   Sphere sphere1;
   Sphere sphere2(2,"blue");

   cout << "Sphere1 radius: " << sphere1.getRadius();
   cout << ", Sphere1 Color: " << sphere1.getColor();
   cout << endl;
   cout << "Sphere2 radius: " << sphere2.getRadius();
   cout << ", Sphere2 Color: " << sphere2.getColor();
   cout << endl;
   cout << "Spheres are equal: " << (sphere1.isEqual(sphere2) ? "Yes" : "No");

   cout << endl;

   return 0;
}