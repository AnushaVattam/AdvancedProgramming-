/*
 *          File: stack.h
 *        Authors: Jisook Youn, Vangelis Metsis
 *         Topic: Stack - Array Implementation
 * -----------------------------------------------------
 *
 * This is the interface for a stack of characters.
 *
 */

#ifndef _stack_H
#define _stack_H

/*
 * Type: StackElementT
 * -------------------
 * This is the type of the objects entered in the stack.
 * Edit it to change the type of things to be placed in
 * the stack.
 */

//typedef char StackElementT;

/*
 * Type: Stack
 * --------------
 * This is the type for a stack, i.e., it is a type that
 * holds the information necessary to keep track of a stack.
 * It has a pointer `contents' to a dynamically-allocated
 * array (used to hold the contents of the stack), an integer
 * `maxSize' that holds the size of this array (i.e., the
 * maximum number of things that can be held in the stack),
 * and another integer `top,' which stores the array index of
 * the element at the top of the stack.
 * Also, it has the operations-push, pop, isEmpty, isFull.
 */

template <typename StackElementT>
class Stack {
public:
  Stack(int maxSz);
  ~Stack();
  void push(StackElementT element);
  StackElementT pop();
  bool isEmpty() const;
  bool isFull() const;

private:
  StackElementT *contents;
  int top;
  int maxSize;
};

// This statement cause the contents of the stack.cpp file to be included at this
// location. That is necessary for a template class to compile.


#endif /* not defined _STACK_H */
