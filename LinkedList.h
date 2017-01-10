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
 * The header file defines the data for a program
 * asks a user to enter a text string and display
 * the number of substrings that start with A
 * and end with B.
 *
 * @author Mariya Eggensperger
*/
// Global variable for size of character text_string
const int STRING_SIZE = 52;
typedef const char ElementType;
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
    void insert(ElementType text_string, int position);
    void erase(int position);

    void display(ostream & out) const;
    /*--------------------------------------------------------------------
	 Display the contents of this LinkedList.
	 Precondition: Ostream out is open
	 Postcondition: Elements of this LinkedList have been output to out.
	 --------------------------------------------------------------------*/



};


#endif //PROGRAM1_EGGENSPERGER_MARIYA_LINKEDLIST_H
