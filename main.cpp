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

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "prog38Functions.h"
using namespace std;

int main() {
    Students data[100];
    ifstream dataFile;
    string fileContent;
    int n;
    string classOrder[4] = {"FR", "SO", "JR", "SR"};
    
    dataFile.open("stDATA.txt");
    while (getline(dataFile, fileContent)) {
        n = readStudentData(dataFile, data);
        SortByGpa(data, n);
        TotalSort(data, n, classOrder);
        PrintStudentData(data, n);
        AverageGpa(data, n);
    }
    dataFile.close();
    
    return 0;
}