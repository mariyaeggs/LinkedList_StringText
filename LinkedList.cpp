//----- LinkedList.cpp -----
#include <iostream>
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
void LinkedList::insert(char *C, int position) {
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
   myStrArray[position] = ( char )*C;
   mySize++;
}
/**
 * Function defines deletion methods for List class.
 *
 * @param args If erase() does not surpass CAPACITY or is illegally deleted at location, allow deletion.
 * @return Return if deletion surpasses CAPACITY or is attempted at an illegal location.
*/
void LinkedList::erase(int position) {
   if(mySize == 0) {
      cerr << "The linked list is empty.";
      return;
   }
   if(position < 0 || position > mySize) {
      cerr << "Illegal deletion location. List did not change.";
      return;
   }
   // Shift array elements to the left
   for(int i = position; i < mySize; i++) {
      myStrArray[i] = myStrArray[i+1];
   }
   mySize--;
}
/**
 * Count substrings that start with A and end with B letter(s).
 *
 * @param args int substring = 0. Incremented with count of valid substrings.
 * @return Substring count, substing++
*/
int LinkedList::countSubStr(char txt_str[])
{
   int substring = 0;  // Initialize result

   // Substrings that start with A
   for (int i=0; txt_str[i] !='\0'; i++) // If the nodes are not at NULL
   {
      if (txt_str[i] == 'A')
      {
         // Substrings that end with B
         for (int j=i+1; txt_str[j] !='\0'; j++)
            if (txt_str[j] == 'B')
               substring++;
      }
   }
   return substring;
}
/**
 * Display a printed version of the list to console.
 *
 * @param args List object is inserted into out, the ostream should be open.
 * @return A display of the list to out.
*/
void LinkedList::display(ostream &out) const {
   for(int i = 0; i < mySize; i++) {
      out << myStrArray[i] << " ";
   }
}
/**
 * Prototype output operator.
 *
 * @param args Ostream & out, const List & aList.
 * @return Out.
*/
ostream & operator << (ostream & out, const LinkedList & aList) {
   aList.display(out);
   return out;
}
char* C[STRING_SIZE];
void LinkedList::print(char* C) {
   int i=0;
   while(C[i]!='\0'){
      printf("%c", C[i]);
      i++;
   }
   printf("\n");
}
