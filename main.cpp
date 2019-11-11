#include <iostream>
#include "sphere.h"
using namespace std;

void PrintSphere(Sphere sphere);

int main() {
   Sphere sphere1;
   Sphere sphere2(2,"blue");

   cout << "*** SPHERE 1 ***\n";
   PrintSphere(sphere1);
   
   cout << "*** SPHERE 2 ***\n";
   PrintSphere(sphere2);

   cout << "Spheres are equal: " << (sphere1.isEqual(sphere2) ? "Yes" : "No");
   cout << endl;

   cout << "\nModifing Sphere 1\n\n";
   sphere1.setRadius(2);
   sphere1.setColor("blue");

   cout << "*** SPHERE 1 ***\n";
   PrintSphere(sphere1);
   
   cout << "*** SPHERE 2 ***\n";
   PrintSphere(sphere2);

   cout << "Spheres are equal: " << (sphere1.isEqual(sphere2) ? "Yes" : "No");
   cout << endl;

   cout << endl;

   return 0;
}

void PrintSphere(Sphere sphere)
{
   cout << "Radius: " << sphere.getRadius();
   cout << "\nColor: " << sphere.getColor();
   cout << endl;

}