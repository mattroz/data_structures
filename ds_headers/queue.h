#ifndef STACK_H
#define STACK_H

#include <stdio.h>

/*	Queue element definition	*/
typedef struct Node
{
	int value;
	Node *next;
}Node;

int initialize_queue(Node*, Node*);
int enqueue(Node**, int);
int dequeue(Node**, int*);
int empty(Node **);


int enqueue(Node **_tail, int _value)
{
	
}


#endif

