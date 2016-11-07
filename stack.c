#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>


/*  define stack struct and functions to work with stack    */

struct stack
{
	int value;
	struct stack *next;
};


int init(struct stack *);
int push(struct stack **, int);
int pop(struct stack **);
int print(struct stack **);


int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("usage: ./s <value>\n");
		exit(EXIT_FAILURE);
	}

	struct stack *head = malloc(sizeof *head); 
	if (init(head) != 1)
	{
		printf("init() failure\n");
		exit(EXIT_FAILURE);
	}

	if (push(&head, atoi(argv[1])) != 1)
	{
		printf("push() failure\n");
		exit(EXIT_FAILURE);
	}

	printf("%d\n", head->value);

	if (pop(&head) != 1)
	{
		printf("pop() failure\n");
		exit(EXIT_FAILURE);
	}

	return 0;
}


/*  stack functions implementation  */

int init(struct stack *_head)
{
	_head->value = 0;
	_head->next = NULL;
	return 1;
}


int push(struct stack **_head, int _value)
{
	struct stack *new_node = malloc(sizeof *new_node);
	new_node->value = _value;
	new_node->next = *_head;
	*_head = new_node;

	printf("%d pushed\n", (*_head)->value);

	return 1;
}


int pop(struct stack **_head)
{
	printf("pop %d\n", (*_head)->value);
	*_head = (*_head)->next;
	return 1;
}
