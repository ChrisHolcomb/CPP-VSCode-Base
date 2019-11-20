#include "ClosestPair.h"

// n is size of array
//make distance formula
//calculate distnace between each point and find which has the shortest distance

/*
 * description: set the radius to one and color to green
 * return: instance of sphere
 * postcondition: return instance of sphere with radius one
 *      and color green
*/
Pair Closest_Pair(Point P[], int n) {
    Pair myPair;
    double dist=0.0, minDist = 0.0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
             
            dist = distance(P[i], P[j]);
            
            if (dist > 0) {
                if ((i == 0 && j == 0) || minDist == 0) {
                    minDist = dist;
                    myPair.indexPointOne = i;
                    myPair.indexPointTwo = j;
                } 
                else if (dist < minDist) {
                    minDist = dist;
                    myPair.indexPointOne = i;
                    myPair.indexPointTwo = j;
                }
            }
        }
    }
    
    
    //find min dist and return the points
    return myPair;
}

/*
 * description: set the radius to one and color to green
 * return: instance of sphere
 * postcondition: return instance of sphere with radius one
 *      and color green
*/
double distance (Point p1, Point p2) {
    double distance;
    distance = sqrt((pow((p2.x-p1.x),2)) + pow((p2.y-p1.y),2));
    return distance;
}
