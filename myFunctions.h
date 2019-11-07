/*
* Author: Sammy Pedraza
* Assignment Title: MyFunctions
* Assignment Description: Program will read an integer that
*     is greater or equal to 0 and less than or equal to 15.
*     The number will correspond to the order of a bidimentional
*     array of integers. The program will build the array
*     following the pattern of 2 the power of the temp value.
* Due Date: 11/6/2019
* Date Created: 11/4/2019
* Date Last Modified: 11/5/2019
*/
/*
* Data Abstraction:
*         num - user's integer indicated array dimensions
*         matrix - vector that will be built to indicate the
*                  different matrices and their dimensions.
* Input:
*         The input will consits over several integers (num), one per
*         line. The integers correspond to orders from arrays to
*         be built. The end of the input will be indicated by 0.
* Process:
*         Program will read integers until the user enters 0. Each
*         integer will be added to a vector. The integer will give
*         the dimensions of the matrix. The elements will be filled
*         following the necessary pattern. The elements will be
*         formatted in a field of size T right justified and separated
*         by a space, where T is equal to the number of digits of the
*         biggest number in the array.
* Output:
*         For each integer inputted by the user, the program will
*         print the corresponding array.
* Assumptions:
*         The user will enter an integer not a double. They will
*         eventually enter 0 to stop the program. The program will
*         print a 1 when the row and column are equal to 1.
*/

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
int max(int, int);
/*
* description: Function returns the value of the smaller of
*   two integers
* return: integer
* precondition: two integer values exist
* postcondition: The value of the smallest integer is returned.
*   The original integers are unchanged. If the integers have
*   the same value then the value of either integer is returned.
*/
int min(int, int);
/*
* description: Function returns the value of the larger of
*   two integers
* return: integer
* precondition: two double values exist
* postcondition: The value of the largest double is returned.
*   The original doubles are unchanged. If the doubles have
*   the same value then the value of either double is returned.
*/
double max(double , double);
/*
* description: Function returns the value of the smaller of
*   two doubles
* return: double
* precondition: two double values exist
* postcondition: The value of the smallest double is returned.
*   The original doubles are unchanged. If the doubles have
*   the same value then the value of either double is returned.
*/
double min(double, double);
/*
* description: Function returns the value of the largest integer in an array.
*   integer in an array.
* return: integer
* precondition: an array of integer values exist
* postcondition: The largest value in the array is returned.
*   The original array is unchanged.
*/
int max(int[] , int);
/*
* description: Function returns the value of the smallest integer in an array.
*   double in an array.
* return: integer
* precondition: an array of integer values exist
* postcondition: The smallest value in the array is returned.
*   The original array is unchanged.
*/
int min(int[], int);
/*
* description: Function returns the value of the largest double in an array.
*   double in an array.
* return: double
* precondition: an array of double values exist
* postcondition: The largest value in the array is returned.
*   The original array is unchanged.
*/
double max(double[], int);
/*
* description: Function returns the value of the smallest double in an array.
*   double in an array.
* return: double
* precondition: an array of double values exist
* postcondition: The smallest value in the array is returned.
*   The original array is unchanged.
*/
double min(double[], int);
/*
* description: This function returns the absolute value of an integer
* return: Integer
* precondition: Some integer value exists
* postcondition: Integer value is unchanged
*/
int absoluteVal(int num);
/*
* description: This function returns the absolute value of a double
* return: double
* precondition: Some double value exists
* postcondition: double value is unchanged
*/
double absoluteVal(double num);
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