//----- LinkedList.H -----
#include <iostream>
using namespace std;

#ifndef PROGRAM1_EGGENSPERGER_MARIYA_LINKEDLIST_H
#define PROGRAM1_EGGENSPERGER_MARIYA_LINKEDLIST_H
/**
 * Programming Assignment 1 : Linked List
 * Course: CST 370 Design & Analysis of Algorithms
 * School: CSU, Monterey Bay
 * Professor: Dr. Feiling Jia
 * Source: CLion 2016.3.2 on 1/8/2017
 *
 * Header file defines the data for a program which
 * asks a user to enter a text string and display
 * the number of substrings that start with A
 * and end with B.
 *
 * @author Mariya Eggensperger
*/
// Define data type LinkedList for processing LinkedList.
const int STRING_SIZE = 26; // Maximum string letters for user input
/**
 * Header definitions for a LinkedList class.
 *
 * @param args Function members & data members.
 * @return
*/

class LinkedList {

public:
    /*--Function Members--*/
    LinkedList(); // Constructor
    bool isEmpty() const;
    void insert(char C[STRING_SIZE], int position);
    void erase(int position);
    void print(char* C);
    static int countSubStr(char txt_str[]);

    void display(ostream & out) const;
    /*--------------------------------------------------------------------
    Display the contents of this LinkedList.
    Precondition: Ostream out is open
    Postcondition: Elements of this LinkedList have been output to out.
    --------------------------------------------------------------------*/

private:
    /*--Data Members--*/
    int mySize; // Current size of list in myStrArray
    char myStrArray[STRING_SIZE];
}; // --- End of LinkedList class

// Output operator prototype
ostream & operator << (ostream & out, const LinkedList & aList);

#endif //PROGRAM1_EGGENSPERGER_MARIYA_LINKEDLIST_H
