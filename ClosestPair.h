#ifndef ClosestPair_h
#define ClosestPair_h

#include <stdio.h>
#include <cmath>
#include <ostream>
#include <iostream>

using namespace std;

struct Point{
     double x;
     double y;

     Point(double a = 0, double b = 0){
        x = a;
        y = b;
     }
};

struct Pair{
     int indexPointOne;
     int indexPointTwo;
};

/*
 * description: set the radius to one and color to green
 * return: instance of sphere
 * postcondition: return instance of sphere with radius one
 *      and color green
*/
Pair Closest_Pair(Point P[], int n);

/*
 * description: set the radius to one and color to green
 * return: instance of sphere
 * postcondition: return instance of sphere with radius one
 *      and color green
*/
double distance (Point p1, Point p2);

#endif /* ClosestPair_h */