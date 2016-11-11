#ifndef QUEUE_H
#define QUEUE_H

/*	Queue element definition	*/
typedef struct Node
{
	int value;
	struct Node *next;
}Node_t;

/*	PROTOTYPES	*/
int initialize_queue(Node_t**, Node_t**);
int enqueue(Node_t**, Node_t **, int);
int dequeue(Node_t**, int*);
int is_empty(Node_t *);


#endif

