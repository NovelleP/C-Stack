/*
 ============================================================================
 Name        : Example.c
 Author      : Alberto Novelle
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"


int main() {
	Stack* s = initStack(); //initialize empty stack
	push(s, 5); //add element to stack
	push(s, 4); //add element to stack
	NodeS* aux = pop(s); //remove element from stack and save it in aux variable
	s = reversingStack(s); //return an inverted stack

	return 0;
}




