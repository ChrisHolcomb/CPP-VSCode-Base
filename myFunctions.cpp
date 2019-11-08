#include "myFunctions.h"


/*
* description: Function returns the value of the larger of
*   two integers
* return: integer
* precondition: two integer values exist
* postcondition: The value of the largest integer is returned.
*   The original integers are unchanged. If the integers have
*   the same value then the value of either integer is returned.
*/
int max(int a, int b) {
    int n = 0;
    if (a < b) {
        //makes a the larger value
        n = b;
    }
    else {
        n = a;
    }
    return n;
}

/*
* description: Function returns the value of the larger of
*   two integers
* return: integer
* precondition: two double values exist
* postcondition: The value of the largest double is returned.
*   The original doubles are unchanged. If the doubles have
*   the same value then the value of either double is returned.
*/
double max(double a, double b) {
    double n = 0.0;
    if (a < b) {
        //makes a the larger value
        n = b;
    }
    else {
        n = a;
    }
    return n;
}

/*
* description: Function returns the value of the largest integer in an array.
*   integer in an array.
* return: integer
* precondition: an array of integer values exist
* postcondition: The largest value in the array is returned.
*   The original array is unchanged.
*/
int max(int array[], int arraySize) {
    int a;
    for (int i = 0; i < arraySize; i++) {
        if (i == 0) {
            a = array[0];
        }
        else {
            if (a < array[i]) {
                a = array[i];
            }
        }
    }
    return a;
}

/*
* description: Function returns the value of the largest double in an array.
*   double in an array.
* return: double
* precondition: an array of double values exist
* postcondition: The largest value in the array is returned.
*   The original array is unchanged.
*/
double max(double array[], double arraySize) {
    double a;
    for (int i = 0; i < arraySize; i++) {
        if (i == 0) {
            a = array[0];
        }
        else {
            if (a < array[i]) {
                a = array[i];
            }
        }
    }
    return a;
}

/*
* description: Function returns the value of the smaller of
*   two integers
* return: integer
* precondition: two integer values exist
* postcondition: The value of the smallest integer is returned.
*   The original integers are unchanged. If the integers have
*   the same value then the value of either integer is returned.
*/
int min(int a, int b) {
    int n = 0;
    if (a > b) {
        n = b;
    }
    else {
        n = a;
    }

    return n;
}

/*
* description: Function returns the value of the smaller of
*   two doubles
* return: double
* precondition: two double values exist
* postcondition: The value of the smallest double is returned.
*   The original doubles are unchanged. If the doubles have
*   the same value then the value of either double is returned.
*/
double min(double a, double b) {
    double n = 0.0;
       if (a > b) {
           n = b;
       }
       else {
           n = a;
       }

    return n;
}

/*
* description: Function returns the value of the smallest integer in an array.
*   double in an array.
* return: integer
* precondition: an array of integer values exist
* postcondition: The smallest value in the array is returned.
*   The original array is unchanged.
*/
int min(int array[], int arraySize) {
    int a;
    for (int i = 0; i < arraySize; i++) {
        if (i == 0) {
            a = array[0];
        }
        else {
            if (a > array[i]) {
                a = array[i];
            }
        }
    }
    return a;
}

/*
* description: Function returns the value of the smallest double in an array.
*   double in an array.
* return: double
* precondition: an array of double values exist
* postcondition: The smallest value in the array is returned.
*   The original array is unchanged.
*/
double min(double array[], double arraySize) {
    double a;
    for (int i = 0; i < arraySize; i++) {
        if (i == 0) {
            a = array[0];
        }
        else {
            if (a > array[i]) {
                a = array[i];
            }
        }
    }
    return a;
}

/*
* description: This function returns the absolute value of an integer
* return: Integer
* precondition: Some integer value exists
* postcondition: Integer value is unchanged
*/
int absoluteValue(int num) {
    int absNum;
    absNum = num;
    
    if (absNum < 0) {
        absNum *= -1;
    }
    return absNum;
}

/*
* description: This function returns the absolute value of a double
* return: double
* precondition: Some double value exists
* postcondition: double value is unchanged
*/
double absoluteValue(double num) {
    double absNum;
    absNum = num;
    if (absNum < 0) {
        absNum *= -1;
    }
    
    return absNum;
}

/*
* description: The function calculates factorial.
* return: double
* precondition: Some integer value num exists
* postcondition: The value of the num unchanged
*/
double factorial(int num) {
    double value = 1;
    double pValue;
    pValue = num;
    while (pValue > 0) {
        value *= pValue;
        pValue--;
    }
    return value;
}

/*
* description: The function calculates the number of combinations
*   of a items taken b at a time.
* return: The number of combinations of a items taken b at a time.
* precondition: Two integer value a and b exists
* postcondition: The value of the a and b unchanged
*/
double combination(int a, int b) {
    return factorial(a)/(factorial(a-b)*factorial(b));
}

/*
* description: The function calculates the number of permutations
    of a items taken b at a time.
* return: The number of permutations of a items taken b at a time.
* precondition: Two integer value a and b exists
* postcondition: The value of the a and b unchanged
*/
double permutation(int a, int b) {
    return factorial(a)/factorial(a-b);
}
