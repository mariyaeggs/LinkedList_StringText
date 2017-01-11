//----- LinkedList.cpp -----
#include <iostream>
#include <cassert>
using namespace std;

#include "LinkedList.h"
/**
 * Programming Assignment 1 : Linked List
 * Course: CST 370 Design & Analysis of Algorithms
 * School: CSU, Monterey Bay
 * Professor: Dr. Feiling Jia
 * Source: CLion 2016.3.2 on 1/8/2017
 *
 * The implementation for a program that asks
 * a user to enter a text string and display
 * the number of substrings that start with A
 * and end with B.
 *
 * @author Mariya Eggensperger
*/
// Default constructor
LinkedList::LinkedList()
        : mySize(0) {

}
/**
 * Boolean check if a list is empty.
 *
 * @param args True if the list is empty, false if not.
 * @return Boolean value.
*/
bool LinkedList::isEmpty() const {
   return mySize == 0;
}
/**
 * Function defines insertion for LinkedList class.
 *
 * @param args If insert() does not surpass CAPACITY or is illegally inserted, allow insertion.
 * @return Return if insertion surpasses CAPACITY or is illegal.
*/
void LinkedList::insert(ElementType text_string, int position) {
   if (mySize == STRING_SIZE) {
      cerr << "No space available.";
      exit(1);
      }
   if (position < 0 || position > mySize) { // Where mySize is current size of list in myStrArray
      cerr << "Illegal insertion location. List did not change.";
      return;
   }
   // Shift array elements right for new char
   for (int i = mySize; i > position; i--) {
      myStrArray[i] = myStrArray[i-1];
   }
   // Insert new array element at position and increase linked list size
   myStrArray[position] = text_string;
   mySize++;
}
