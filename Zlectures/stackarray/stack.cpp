/*
 *          File: stack.cpp
 *        Authors: Jisook Youn, Vangelis Metsis
 *         Topic: Stack - Array Implementation
 * -----------------------------------------------------
 *
 * This is an array implementation of a character stack.
 *
 */

#include <iostream>
#include <cstdlib>
#include "stack.h"
using namespace std;

/************************ Function Definitions **********************/

/*
 * Constructor
 * Usage: Stack(maxSz);
 * -------------------------
 * A new stack variable is initialized.  The initialized
 * stack is made empty.  MaxSz is used to determine the
 * maximum number of character that can be held in the
 * stack.
 */

Stack::Stack(int maxSz)
{
  /* Allocate a new array to hold the contents. */

  contents = new StackElementT[maxSz];

  if (contents == NULL) {
    cout << "Insufficient memory to initialize stack.\n";
    exit(1);   // Exit, returning error code.
  }

  maxSize = maxSz;
  top = -1;  /* I.e., empty */
}


/* Destructor
 * Usage: delete ptr
 * -----------------------
 * This frees all memory associated with the stack.
 */

Stack::~Stack()
{
  /* Get rid of array. */
  delete [] contents;

  contents = NULL;
  maxSize = 0;
  top = -1;  /* I.e., empty */
}

/*
 * Functions: push, pop
 * Usage: s1.push(element); element = s1.pop();
 * --------------------------------------------
 * These are the fundamental stack operations that add an element to
 * the top of the stack and remove an element from the top of the stack.
 * A call to pop on an empty stack or to push on a full stack
 * is an error.  Make use of isEmpty()/isFull() (see below)
 * to avoid these errors.
 */

void Stack::push(StackElementT element)
{
  if (isFull()) {
    cout << "Can't push element on stack: stack is full.\n";
    exit(1);  /* Exit, returning error code. */
  }

  /* Put information in array; update top. */

  contents[++top] = element;
}

StackElementT Stack::pop()
{
  if (isEmpty()) {
    cout << "Can't pop element from stack: stack is empty.\n";
    exit(1);  /* Exit, returning error code. */
  }

  return contents[top--];
}

/*
 * Functions: isEmpty, isFull
 * Usage: if (s1.isEmpty()) ...
 * -----------------------------------
 * These return a true value if the stack is empty
 * or full (respectively).
 */

bool Stack::isEmpty() const
{
  return top < 0;
}

bool Stack::isFull() const
{
  return top >= (maxSize - 1);
}
