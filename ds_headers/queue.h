#ifndef QUEUE_H
#define QUEUE_H

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
	
	Node *new_node = malloc(sizeof Node);
	new_node->value = _value;
	new_node->next = NULL;
	(*_tail)->next = new_node;
	*_tail = new_node;

	return 1;
}


#endif

