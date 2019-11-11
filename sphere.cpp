#include "sphere.h"

Sphere::Sphere() 
{
    radius = 1;
    color = "green";
}

Sphere::Sphere(double r)
{
    radius = r;
    color = "green";
}

Sphere::Sphere(double r, string c)
{
    radius = r;
    color = c;
}

void Sphere::setRadius(double r)
{
    radius = r;
}

double Sphere::getRadius() const
{
    return radius;
}

void Sphere::setColor(string c)
{
    color = c;
}

string Sphere::getColor() const
{
    return color;
}

double Sphere::area() const 
{
    double area = 0.0;

    return area;
}

double Sphere::volume() const
{
    double volume = 0.0;

    return volume;
}

bool Sphere::isEqual(Sphere other) const
{
    bool isEqual = false;
    if (radius == other.radius && color == other.color) {
        isEqual = true;
    }
    return isEqual;
}

