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

#include "prog38Functions.h"
#include <iomanip>
#include <cmath>
#include <fstream>
#include <algorithm>
#include <sstream>
#include <string>
#include <iostream>

/*
 * description: find digrams in the lines of the test case
 * return: void
 * precondition: d[], count[], pair, arraySize exist
 * postcondition: the digram pairs will be added to the d
 *      array, and the count array will be modified
*/
Students::Students() {
    FirstName = "";
    LastName = "";
    Classification = "";
    Zip = 0;
    Age = 0;
    HomeTown = "";
    Gpa = 0.0;
    isDuplicate = false;
}
/*
 * description: find digrams in the lines of the test case
 * return: void
 * precondition: d[], count[], pair, arraySize exist
 * postcondition: the digram pairs will be added to the d
 *      array, and the count array will be modified
*/
Students::Students(string first, string last, string classif,
                   int zip, int age, string town, double gpa) {
    FirstName = first;
    LastName = last;
    Classification = classif;
    Zip = zip;
    Age = age;
    HomeTown = town;
    Gpa = gpa;
    isDuplicate = false;
}

void Students::setDuplicate(bool duplicate) {
    isDuplicate = duplicate;
}
/*
 * description: find digrams in the lines of the test case
 * return: void
 * precondition: d[], count[], pair, arraySize exist
 * postcondition: the digram pairs will be added to the d
 *      array, and the count array will be modified
*/
void Students::setFirst(string first) {
    FirstName = first;
}
/*
 * description: find digrams in the lines of the test case
 * return: void
 * precondition: d[], count[], pair, arraySize exist
 * postcondition: the digram pairs will be added to the d
 *      array, and the count array will be modified
*/
void Students::setLast(string last) {
    LastName = last;
}
/*
 * description: find digrams in the lines of the test case
 * return: void
 * precondition: d[], count[], pair, arraySize exist
 * postcondition: the digram pairs will be added to the d
 *      array, and the count array will be modified
*/
void Students::setClass(string classif) {
    Classification = classif;
}
/*
 * description: find digrams in the lines of the test case
 * return: void
 * precondition: d[], count[], pair, arraySize exist
 * postcondition: the digram pairs will be added to the d
 *      array, and the count array will be modified
*/
void Students::setZip(int zip) {
    Zip = zip;
}
/*
 * description: find digrams in the lines of the test case
 * return: void
 * precondition: d[], count[], pair, arraySize exist
 * postcondition: the digram pairs will be added to the d
 *      array, and the count array will be modified
*/
void Students::setAge(int age) {
    Age = age;
}
/*
 * description: find digrams in the lines of the test case
 * return: void
 * precondition: d[], count[], pair, arraySize exist
 * postcondition: the digram pairs will be added to the d
 *      array, and the count array will be modified
*/
void Students::setTown(string town) {
    HomeTown = town;
}
/*
 * description: find digrams in the lines of the test case
 * return: void
 * precondition: d[], count[], pair, arraySize exist
 * postcondition: the digram pairs will be added to the d
 *      array, and the count array will be modified
*/
void Students::setGpa(double gpa) {
    Gpa = gpa;
}
/*
 * description: find digrams in the lines of the test case
 * return: void
 * precondition: d[], count[], pair, arraySize exist
 * postcondition: the digram pairs will be added to the d
 *      array, and the count array will be modified
*/
bool Students::Duplicate() {
    return isDuplicate;
}
/*
 * description: find digrams in the lines of the test case
 * return: void
 * precondition: d[], count[], pair, arraySize exist
 * postcondition: the digram pairs will be added to the d
 *      array, and the count array will be modified
*/
string Students::getFirst() {
    return FirstName;
}
/*
 * description: find digrams in the lines of the test case
 * return: void
 * precondition: d[], count[], pair, arraySize exist
 * postcondition: the digram pairs will be added to the d
 *      array, and the count array will be modified
*/
string Students::getLast() {
    return LastName;
}
/*
 * description: find digrams in the lines of the test case
 * return: void
 * precondition: d[], count[], pair, arraySize exist
 * postcondition: the digram pairs will be added to the d
 *      array, and the count array will be modified
*/
string Students::getClass() {
    return Classification;
}
/*
 * description: find digrams in the lines of the test case
 * return: void
 * precondition: d[], count[], pair, arraySize exist
 * postcondition: the digram pairs will be added to the d
 *      array, and the count array will be modified
*/
int Students::getZip() {
    return Zip;
}
/*
 * description: find digrams in the lines of the test case
 * return: void
 * precondition: d[], count[], pair, arraySize exist
 * postcondition: the digram pairs will be added to the d
 *      array, and the count array will be modified
*/
int Students::getAge() {
    return Age;
}
/*
 * description: find digrams in the lines of the test case
 * return: void
 * precondition: d[], count[], pair, arraySize exist
 * postcondition: the digram pairs will be added to the d
 *      array, and the count array will be modified
*/
string Students::getTown() {
    return HomeTown;
}
/*
 * description: find digrams in the lines of the test case
 * return: void
 * precondition: d[], count[], pair, arraySize exist
 * postcondition: the digram pairs will be added to the d
 *      array, and the count array will be modified
*/
double Students::getGpa() {
    return Gpa;
}

/*
 * description: find digrams in the lines of the test case
 * return: void
 * precondition: d[], count[], pair, arraySize exist
 * postcondition: the digram pairs will be added to the d
 *      array, and the count array will be modified
*/
int readStudentData(ifstream& fileStream, Students data[]) {
    int zip, age;
    int i = 0;
    double gpa;
    string classif, town, first, last, fileContent;
    istringstream issData;
    
    while (getline(fileStream, fileContent)) {
        issData.clear();
        issData.str(fileContent);
        issData >> first >> last >> classif >> zip >> age
                >> town >> gpa;
        Students currStudent(first, last, classif, zip,
                             age, town, gpa);
        data[i] = currStudent;
        i++;
    }
    return i;
}
/*
 * description: find digrams in the lines of the test case
 * return: void
 * precondition: d[], count[], pair, arraySize exist
 * postcondition: the digram pairs will be added to the d
 *      array, and the count array will be modified
*/
void SortByGpa(Students data[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (data[j].getGpa() > data[j + 1].getGpa()) {
                swap(data[j], data[j + 1]);
            }
        }
    }
}

/*
 * description: find digrams in the lines of the test case
 * return: void
 * precondition: d[], count[], pair, arraySize exist
 * postcondition: the digram pairs will be added to the d
 *      array, and the count array will be modified
*/

int ClassificationOrder(string classOrder[], string classification) {
    int classVal = 0;
    for (int i = 0; i < 4; i++) {
        if (classification == classOrder[i]) {
            classVal = i;
            break;
        }
    }
    return classVal;
}
/*
 * description: find digrams in the lines of the test case
 * return: void
 * precondition: d[], count[], pair, arraySize exist
 * postcondition: the digram pairs will be added to the d
 *      array, and the count array will be modified
*/
void TotalSort(Students data[], int n, string classOrder[]) {
   
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            
            if (data[j].getGpa() == data[j + 1].getGpa()) {
                int class1, class2;
                class1 = ClassificationOrder(classOrder, data[j].getClass());
                class2 = ClassificationOrder(classOrder,
                                             data[j + 1].getClass());
                
                if (class1 > class2) {
                    swap(data[j], data[j + 1]);
                }
                else if (data[j].getClass() ==
                         data[j + 1].getClass()) {
                    if (data[j].getLast() >
                        data[j + 1].getLast()) {
                        swap(data[j], data[j + 1]);
                    }
                    else if (data[j].getLast() ==
                        data[j + 1].getLast()) {
                        if(data[j].getFirst() >
                           data[j + 1].getFirst()) {
                            swap(data[j], data[j + 1]);
                        }
                        else if (data[j].getFirst() ==
                           data[j + 1].getFirst()) {
                            data[j + 1].setDuplicate(true);
                        }
                    }
                }
            }
        }
    }
}
/*
 * description: find digrams in the lines of the test case
 * return: void
 * precondition: d[], count[], pair, arraySize exist
 * postcondition: the digram pairs will be added to the d
 *      array, and the count array will be modified
*/
void PrintStudentData(Students data[], int n) {
    cout << setw(16) << left << "First Name";
    cout << setw(16) << left << "Last Name";
    cout << setw(8) << left << "Class";
    cout << setw(8) << left << "Zip";
    cout << setw(8) << left << "Age";
    cout << setw(24) << left << "Hometown";
    cout << "GPA" << endl;
    
    for (int i = 0; i < n; i++) {
        if (!data[i].Duplicate()) {
            cout << setw(16) << left << data[i].getFirst();
            cout << setw(16) << left << data[i].getLast();
            cout << setw(8) << left << data[i].getClass();
            cout << setw(8) << left << data[i].getZip();
            cout << setw(8) << left << data[i].getAge();
            cout << setw(24) << left << data[i].getTown();
            cout << fixed << setprecision(2);
            cout << data[i].getGpa() << endl;
        }
        else {
            cout << "I THINK THIS IS A DUPLICATE RECORD" << endl;
        }
    }
}
/*
 * description: find digrams in the lines of the test case
 * return: void
 * precondition: d[], count[], pair, arraySize exist
 * postcondition: the digram pairs will be added to the d
 *      array, and the count array will be modified
*/
void AverageGpa(Students data[], int n) {
    double frSum = 0, soSum = 0, jrSum = 0, srSum = 0, fr = 0,
            so = 0, jr = 0, sr = 0;
    double frAvg, soAvg, jrAvg, srAvg;
    for (int i = 0; i < n - 1; i++) {
        if (data[i].getClass() == "FR" && (!data[i].Duplicate())) {
            frSum += data[i].getGpa();
            fr++;
        }
        else if (data[i].getClass() == "SO" && (!data[i].Duplicate())) {
            soSum += data[i].getGpa();
            so++;
        }
        else if (data[i].getClass() == "JR" && data[i].Duplicate()) {
            jrSum += data[i].getGpa();
            jr++;
        }
        else if (data[i].getClass() == "SR" && data[i].Duplicate()) {
            srSum += data[i].getGpa();
            sr++;
        }
    }
    frAvg = frSum / fr;

    soAvg = soSum / so;

    jrAvg = jrSum / jr;

    srAvg = srSum / sr;
  
    
    cout << endl;
    cout << "*** Start Extra Credit ***" << endl;
    cout << endl;
    cout << "Freshman averae GPA = " << frAvg << endl;
    cout << "Sophomore averae GPA = " << soAvg << endl;
    cout << "Junior averae GPA = " << jrAvg << endl;
    cout << "Senior averae GPA = " << srAvg << endl;
    cout << endl;
    cout << "*** Start Extra Credit ***" << endl;
    cout << endl;
}
