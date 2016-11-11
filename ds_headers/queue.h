#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include <stdlib.h>

/*	Queue element definition	*/
typedef struct Node
{
	int value;
	struct Node *next;
}Node_t;

/*	PROTOTYPES	*/
int initialize_queue(Node_t**, Node_t**);
int enqueue(Node_t**, int);
int dequeue(Node_t**, int*);
int is_empty(Node_t *);

/*		IMPLEMENTATION	*/

/*	link head and tail to each other	*/
int initialize_queue(Node_t **_head, Node_t **_tail)
{
	*_tail = malloc(sizeof(Node_t));
	*_head = malloc(sizeof(Node_t));
	(*_tail)->next = NULL;
	(*_head)->next = *_tail;
	printf("initialization\n");

	return 1;
}


int enqueue(Node_t **_tail, int _value)
{
	Node_t *new_node = malloc(sizeof(Node_t));
	new_node->value = _value;
	new_node->next = NULL;
	(*_tail)->next = new_node;
	*_tail = new_node;
	printf("enqueue %d\n", (*_tail)->value);

	return 1;
}


int dequeue(Node_t **_head, int *dest)
{
	/*	check if head == tail	*/
	if(is_empty((*_head)) != 0)
	{
		printf("queue is empty, nothing to dequeue\n");
		return 1;
	}
	
	Node_t *temp = &_head;
	*dest = (*_head)->value;
	*_head = (*_head)->next;
	//free(*temp);	//free memory from the previous head
	free(temp);		//free memory from the current temp pointer
	printf("dequeue %d\n", *dest);

	return 1;
}

int is_empty(Node_t *_head)
{
	/*  in other words: check if head == tail   */
	return ((_head->next == NULL) ? 1 : 0);
}


#endif

