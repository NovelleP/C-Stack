/*
 ============================================================================
 Name        : Stack.h
 Author      : Alberto Novelle
 ============================================================================
 */

#ifndef STACK_H_
#define STACK_H_

typedef struct nodeStack_t {
	int data;
	struct nodeStack_t* prev;
}NodeS;


typedef struct stack_t{
	NodeS* top;
	unsigned size;
}Stack;

Stack* initStack();

NodeS* createNode(int data);

void push(Stack* s, int data);

NodeS* pop(Stack* s);

Stack* reversingStack(Stack* s);

#endif /* STACK_H_ */
