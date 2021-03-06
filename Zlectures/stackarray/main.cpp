/*
 *          File: stacktest.cpp
 *       Authors: Jisook Youn, Vangelis Metsis
 *         Topic: Stack - Array Implementation
 * -----------------------------------------------------
 *
 * OVERVIEW:
 * =========
 * This program tests the "stack of characters" class.
 *
 */

#include <iostream>
#include "stack.h"
using namespace std;

int main()
{
  int size;
  cout << "Enter the size of the stack (greater than 0): ";
  cin >> size;

  Stack stack(size);  /* A stack to hold characters. */

  cout << "\nEnter characters you wish to push onto the stack.\n";
  cout << "Enter Z when done.\n";

  char ch;

  cin >> ch;
  while (ch != 'Z') {
    stack.push(ch);
    cin >> ch;
  }

  /*
   * Pop each of the characters off of
   * the stack and print them out.
   */

  cout << "\nPopped characters are:" << endl;

  while (!stack.isEmpty()) {
    ch = stack.pop();
    cout << ch << endl;
  }

  return 0;
}
