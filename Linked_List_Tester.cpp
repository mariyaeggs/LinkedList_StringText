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
      cout << "\nEmpty Linked List. Add letters.\n" << strList << endl;
   }

   // Test insert function
   int position = 0;
   char text_string[STRING_SIZE];
   cout << "\nEnter a string: ";
   cin.getline(text_string, STRING_SIZE);
   int pos = 1;
   if (isalpha(( char) *text_string)) {
      puts("(Letters)");
      for (int i=0; i<LinkedList::countSubStr(text_string); i++)
         cout << "\nSubstring "<< pos++ << ": " << text_string;
      cout << "\n\nTOTAL " << LinkedList::countSubStr(text_string) << " substrings" << endl;
   } else if (isdigit((char) *text_string)) {
      puts("(Digits)");
      exit(1);
   } else {
      puts("(Symbols)");
      exit(1);
   }
   return 0;
}




