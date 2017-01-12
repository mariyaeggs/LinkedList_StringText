//----- Linked_List_Tester.cpp -----
#include <iostream>
#include <sstream>
using namespace std;

#include "LinkedList.h"
/**
 * Title: Programming Assignment 1 : Linked List
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
   char text_string[STRING_SIZE];
   string temp_string;
   cout << "Enter a string: ";
      cin.getline(text_string, STRING_SIZE);
      for (int i=0; i<STRING_SIZE; i++){ // Loop through text_string
         text_string[i] = toupper(text_string[i]); // Transform user input to uppercase letters
      }
      cout <<"TO UPPER "<< text_string;
      if (isalpha(( char ) *text_string)) {
         puts("(Letters)");
         LinkedList::countSubStr(text_string);
      } else if (isdigit(( char ) *text_string)) {
         puts("(Digits)");
         exit(1); // Terminate program
      } else {
         puts("(Symbols)");
         exit(1); // Terminate program
      }

   return 0;
}
/* ------------ BEGIN OUTPUT ------------

 * ---------------- Run 1 ---------------


Empty Linked List. Add letters.

Enter a string: CABAAXBYA
TO UPPER CABAAXBYA(Letters)

Substring 1: AB
Substring 2: ABAAXB
Substring 3: AAXB
Substring 4: AXB
TOTAL 4 substrings


* --------------- Run 2 ----------------


Empty Linked List. Add letters.

Enter a string: XYZBCCDACED
TO UPPER XYZBCCDACED(Letters)


TOTAL 0 substrings


* ------------ END OUTPUT ------------*/




