/*
* Author: Sammy Pedraza
* Assignment Title: URI: Etaoin Shrdlu
* Assignment Description: The input contains several test cases.
*     Each line will consist of no more than 80 characters. For
*     each test, the digrams will be calculated with the top
*     5 absolute and relative frequencies printed.
* Due Date: 12/4/2019
* Date Created: 12/3/2019
* Date Last Modified: 12/4/2019
*/
/*
* Data Abstraction:
*        numLines - number of lines in each test case
* Input:
*         The input will consist of the of an integer indicating
*         the number of lines per test case. When 0 is entered the
*         program will stop.
* Process:
*         The input contains several test cases. Each starts with
*         a number n on a separate line, denoting the number of
*         lines of the test case. The input is terminated by n = 0.
*         Otherwise, 1 ≤ n ≤ 64, and there follow n lines, each with a
*         maximal length of 80 characters. The concatenation of these n
*         lines, where the end-of-line characters are omitted, gives
*         the text sample you have to examine. For each test case
*         generate 5 lines containing the top 5 digrams together with
*         their absolute and relative frequencies. Output the latter
*         rounded to a precision of 6 decimal places. If two digrams
*         should have the same frequency, sort them in lexicographical
*         order. Output a blank line after each test case.
* Output:
*         Output the latter rounded to a precision of 6 decimal places.
*         If two digrams should have the same frequency, sort them in
*         lexicographical . Output a blank line after each test case.
* Assumptions:
*         The text sample will contain printable ASCII characters only.
*         The input will be terminated by n = 0. Otherwise, 1 ≤ n ≤ 64,
*         and there follow n lines, each with a maximal length of 80
*         characters.
*/

#ifndef prog38Functions_h
#define prog38Functions_h

#include <stdio.h>
#include <string>
using namespace std;

class Students {
    private:
        string FirstName;
        string LastName;
        string Classification;
        int Zip;
        int Age;
        string HomeTown;
        double Gpa;
    bool isDuplicate;
    
    public: 
        /*
         * description: find digrams in the lines of the test case
         * return: void
         * precondition: d[], count[], pair, arraySize exist
         * postcondition: the digram pairs will be added to the d
         *      array, and the count array will be modified
        */
        Students();
        /*
         * description: find digrams in the lines of the test case
         * return: void
         * precondition: d[], count[], pair, arraySize exist
         * postcondition: the digram pairs will be added to the d
         *      array, and the count array will be modified
        */
        Students(string first, string last, string classif,
                 int zip, int age, string town, double gpa);
        /*
         * description: find digrams in the lines of the test case
         * return: void
         * precondition: d[], count[], pair, arraySize exist
         * postcondition: the digram pairs will be added to the d
         *      array, and the count array will be modified
        */
        void setDuplicate(bool duplicate);
        /*
         * description: find digrams in the lines of the test case
         * return: void
         * precondition: d[], count[], pair, arraySize exist
         * postcondition: the digram pairs will be added to the d
         *      array, and the count array will be modified
        */
        void setFirst(string first);
        /*
         * description: find digrams in the lines of the test case
         * return: void
         * precondition: d[], count[], pair, arraySize exist
         * postcondition: the digram pairs will be added to the d
         *      array, and the count array will be modified
        */
        void setLast(string last);
        /*
         * description: find digrams in the lines of the test case
         * return: void
         * precondition: d[], count[], pair, arraySize exist
         * postcondition: the digram pairs will be added to the d
         *      array, and the count array will be modified
        */
        void setClass(string classif);
        /*
         * description: find digrams in the lines of the test case
         * return: void
         * precondition: d[], count[], pair, arraySize exist
         * postcondition: the digram pairs will be added to the d
         *      array, and the count array will be modified
        */
        void setZip(int zip);
        /*
         * description: find digrams in the lines of the test case
         * return: void
         * precondition: d[], count[], pair, arraySize exist
         * postcondition: the digram pairs will be added to the d
         *      array, and the count array will be modified
        */
        void setAge(int age);
        /*
         * description: find digrams in the lines of the test case
         * return: void
         * precondition: d[], count[], pair, arraySize exist
         * postcondition: the digram pairs will be added to the d
         *      array, and the count array will be modified
        */
        void setTown(string town);
        /*
         * description: find digrams in the lines of the test case
         * return: void
         * precondition: d[], count[], pair, arraySize exist
         * postcondition: the digram pairs will be added to the d
         *      array, and the count array will be modified
        */
        void setGpa(double gpa);
        /*
         * description: find digrams in the lines of the test case
         * return: void
         * precondition: d[], count[], pair, arraySize exist
         * postcondition: the digram pairs will be added to the d
         *      array, and the count array will be modified
        */
        bool Duplicate();
    /*
     * description: find digrams in the lines of the test case
     * return: void
     * precondition: d[], count[], pair, arraySize exist
     * postcondition: the digram pairs will be added to the d
     *      array, and the count array will be modified
    */
        string getFirst();
        /*
         * description: find digrams in the lines of the test case
         * return: void
         * precondition: d[], count[], pair, arraySize exist
         * postcondition: the digram pairs will be added to the d
         *      array, and the count array will be modified
        */
        string getLast();
        /*
         * description: find digrams in the lines of the test case
         * return: void
         * precondition: d[], count[], pair, arraySize exist
         * postcondition: the digram pairs will be added to the d
         *      array, and the count array will be modified
        */
        string getClass();
        /*
         * description: find digrams in the lines of the test case
         * return: void
         * precondition: d[], count[], pair, arraySize exist
         * postcondition: the digram pairs will be added to the d
         *      array, and the count array will be modified
        */
        int getZip();
        /*
         * description: find digrams in the lines of the test case
         * return: void
         * precondition: d[], count[], pair, arraySize exist
         * postcondition: the digram pairs will be added to the d
         *      array, and the count array will be modified
        */
        int getAge();
        /*
         * description: find digrams in the lines of the test case
         * return: void
         * precondition: d[], count[], pair, arraySize exist
         * postcondition: the digram pairs will be added to the d
         *      array, and the count array will be modified
        */
        string getTown();
        /*
         * description: find digrams in the lines of the test case
         * return: void
         * precondition: d[], count[], pair, arraySize exist
         * postcondition: the digram pairs will be added to the d
         *      array, and the count array will be modified
        */
        double getGpa();
};


/*
 * description: find digrams in the lines of the test case
 * return: void
 * precondition: d[], count[], pair, arraySize exist
 * postcondition: the digram pairs will be added to the d
 *      array, and the count array will be modified
*/
int readStudentData(ifstream& fileStream, Students data[]);
/*
 * description: find digrams in the lines of the test case
 * return: void
 * precondition: d[], count[], pair, arraySize exist
 * postcondition: the digram pairs will be added to the d
 *      array, and the count array will be modified
*/
void SortByGpa(Students data[], int n);
/*
 * description: find digrams in the lines of the test case
 * return: void
 * precondition: d[], count[], pair, arraySize exist
 * postcondition: the digram pairs will be added to the d
 *      array, and the count array will be modified
*/
int ClassificationOrder(string classOrder[], string classification);
/*
 * description: find digrams in the lines of the test case
 * return: void
 * precondition: d[], count[], pair, arraySize exist
 * postcondition: the digram pairs will be added to the d
 *      array, and the count array will be modified
*/
void TotalSort(Students data[], int n, string classOrder[]);
/*
 * description: find digrams in the lines of the test case
 * return: void
 * precondition: d[], count[], pair, arraySize exist
 * postcondition: the digram pairs will be added to the d
 *      array, and the count array will be modified
*/
void PrintStudentData(Students data[], int n);
/*
 * description: find digrams in the lines of the test case
 * return: void
 * precondition: d[], count[], pair, arraySize exist
 * postcondition: the digram pairs will be added to the d
 *      array, and the count array will be modified
*/
void AverageGpa(Students data[], int n);
#endif /* prog38Functions_h */