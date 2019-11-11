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

double minArea(vector<double> areaArray) {
    double min;
    min = areaArray[0];
    for (int i=0; i < (int)areaArray.size(); i++) {
        if (areaArray[i] < min) {
            min = areaArray[i];
        }
    }
    return min;
}

double maxArea(vector<double> areaArray) {
    double max;
    max = areaArray[0];
    for (int i=0; i < (int)areaArray.size(); i++) {
        if (areaArray[i] > max) {
            max = areaArray[i];
        }
    }
    return max;
}