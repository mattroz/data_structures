#ifndef STACK_H
#define STACK_H

/*  define stack struct and functions to work with stack    */

typedef struct Node
{
	int value;
	struct Node *next;
} Node_t;

int init(Node_t*);
int push(Node_t**, int);
int pop(Node_t**, int*);
int print(Node_t **);

#endif
