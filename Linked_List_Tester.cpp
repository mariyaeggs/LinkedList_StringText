//----- Linked_List_Tester.cpp -----
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
 * The tester for a program that asks
 * a user to enter a text string and display
 * the number of substrings that start with A
 * and end with B.
 *
 * @author Mariya Eggensperger
*/
int main() {
   // Test class constructor
   LinkedList strList;

   // Check if list is empty
   if (strList.isEmpty()) {
      cout << "\nEmpty Linked List. Add something.\n" << strList << endl;
   }

   // Test insert function
   int position = 0;
   char C[STRING_SIZE];
   cout << "\nEnter a string: ";
   cin.getline(C, STRING_SIZE);
   int pos = 1;
   if (isalpha(( char) *C)) {
      puts("(Letters)");
      for (int i=0; i<LinkedList::countSubStr(C); i++)
         cout << "\nSubstring "<< pos++ << ": " << C;
      cout << "\n\nTOTAL " << LinkedList::countSubStr(C) << " substrings" << endl;
   } else if (isdigit((char) *C)) {
      puts("(Digits)");
      exit(1);
   } else {
      puts("(Symbols)");
      exit(1);
   }
   return 0;
}




