#include "triangle.h"
#include <cmath>


double lengthOfSide(double x1, double y1, double x2, double y2) {
    double length;
    length = sqrt((pow((x2 - x1),2)) + pow((y2 - y1),2));
    return length;
}

double triangleArea(double a, double b, double c) {
    double s, area;
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}