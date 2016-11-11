#include <stdio.h>

/*  define stack struct and functions to work with stack    */

struct stack
{
	int value;
	struct stack *next;
};


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
	printf("push %d\n",(*_head)->value);	

	return 1;
}


int pop(struct stack **_head)
{
	printf("pop %d\n", (*_head)->value);
	*_head = (*_head)->next;
	return 1;
}


int print(struct stack **_head)
{
	while((*_head)->next != NULL)
		pop(_head);
	
	return 1;
}
