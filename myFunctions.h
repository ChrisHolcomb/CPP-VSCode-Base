#ifndef myFunctions_h
#define myFunctions_h


/*
* description: Function returns the value of the larger of
*   two integers
* return: integer
* precondition: two integer values exist
* postcondition: The value of the largest integer is returned.
*   The original integers are unchanged. If the integers have
*   the same value then the value of either integer is returned.
*/
int max(int a, int b);
/*
* description: Function returns the value of the smaller of
*   two integers
* return: integer
* precondition: two integer values exist
* postcondition: The value of the smallest integer is returned.
*   The original integers are unchanged. If the integers have
*   the same value then the value of either integer is returned.
*/
int min(int a, int b);
/*
* description: Function returns the value of the larger of
*   two integers
* return: integer
* precondition: two double values exist
* postcondition: The value of the largest double is returned.
*   The original doubles are unchanged. If the doubles have
*   the same value then the value of either double is returned.
*/
double max(double a, double b);
/*
* description: Function returns the value of the smaller of
*   two doubles
* return: double
* precondition: two double values exist
* postcondition: The value of the smallest double is returned.
*   The original doubles are unchanged. If the doubles have
*   the same value then the value of either double is returned.
*/
double min(double a, double b);
/*
* description: Function returns the value of the largest integer in an array.
*   integer in an array.
* return: integer
* precondition: an array of integer values exist
* postcondition: The largest value in the array is returned.
*   The original array is unchanged.
*/
int max(int array[], int arraySize);
/*
* description: Function returns the value of the smallest integer in an array.
*   double in an array.
* return: integer
* precondition: an array of integer values exist
* postcondition: The smallest value in the array is returned.
*   The original array is unchanged.
*/
int min(int array[], int arraySize);
/*
* description: Function returns the value of the largest double in an array.
*   double in an array.
* return: double
* precondition: an array of double values exist
* postcondition: The largest value in the array is returned.
*   The original array is unchanged.
*/
double max(double array[], double arraySize);
/*
* description: Function returns the value of the smallest double in an array.
*   double in an array.
* return: double
* precondition: an array of double values exist
* postcondition: The smallest value in the array is returned.
*   The original array is unchanged.
*/
double min(double array[], double arraySize);
/*
* description: This function returns the absolute value of an integer
* return: Integer
* precondition: Some integer value exists
* postcondition: Integer value is unchanged
*/
int absoluteValue(int num);
/*
* description: This function returns the absolute value of a double
* return: double
* precondition: Some double value exists
* postcondition: double value is unchanged
*/
double absoluteValue(double num);
/*
* description: The function calculates factorial.
* return: double
* precondition: Some integer value num exists
* postcondition: The value of the num unchanged
*/
double factorial(int num);
/*
* description: The function calculates the number of combinations
*   of a items taken b at a time.
* return: The number of combinations of a items taken b at a time.
* precondition: Two integer value a and b exists
* postcondition: The value of the a and b unchanged
*/
double combination(int a, int b);
/*
* description: The function calculates the number of permutations
    of a items taken b at a time.
* return: The number of permutations of a items taken b at a time.
* precondition: Two integer value a and b exists
* postcondition: The value of the a and b unchanged
*/
double permutation(int a, int b);

#endif /* myfunctions_hpp */