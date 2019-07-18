/*
 ============================================================================
 Name        : Stack.c
 Author      : Alberto Novelle
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

Stack* initStack() {
	Stack* s = malloc(sizeof(Stack));
	s->top = NULL;
	s->size = 0;

	return s;
}

NodeS* createNode(int data) {
	NodeS* node = malloc(sizeof(NodeS));
	node->data = data;
	node->prev = NULL;

	return node;
}

void push(Stack* s, int data) {
	NodeS* n = createNode(data);
	n->prev = s->top;
	s->top = n;
	s->size++;
}

NodeS* pop(Stack* s) {
	if(s->top == NULL) //empty stack
		return NULL;

	else {
		NodeS* n = s->top;
		s->top = s->top->prev;
		s->size--;

		return n;
	}
}

Stack* reversingStack(Stack* s) {
	Stack* reverse = initStack();
	while(s->top != NULL) {
		push(reverse, pop(s)->data);
	}
	return reverse;
}

