#ifndef SPHERE_H
#define SPHERE_H

#include <string>
using namespace std;

class Sphere
{
    private:
        const double pi = 3.14159;
        double radius;
        string color;

    public:
        // Sets radius to 1 and color to green
        Sphere();
        // set the radius to r and color to green
        Sphere(double r);
        // sets the radius to r and the color to c
        Sphere(double r, string c);
        // mutator method used to change the radius
        void setRadius(double r);
        // constatn function thta returs the radius
        double getRadius();
        // mutator method to set the color of the Sphere
        void setColor(string c);
        // constat accessor method that retuns the color of the Sphere
        string getColor();
        // constant function that retus the surface area fo Sphere
        double area() const;
        // constant function that returns the colume of Sphere
        double volume() const;
        // constant bool function that returns TRUE if two Spheres
        // have the same radius and color, FALSE otherwise
        bool isEqual(const Sphere other) const;
};

#endif