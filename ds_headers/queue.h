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
	printf("enqueue %d\n", (*_tail)->value);

	return 1;
}


int dequeue(Node **_head, int *dest)
{
	Node **temp = *_head;
	*dest = (*_head)->value;
	*_head = (*_head)->next;
	free(*temp);
	printf("dequeue %d\n", *dest);

	return 1;
}


#endif

