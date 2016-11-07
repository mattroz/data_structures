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
int push(struct stack *, int);
int pop(struct stack *);
int print(struct stack *);


int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("usage: ./s <value>\n");
        exit(EXIT_FAILURE);
    }

    struct stack head; 
    if (init(&head) != 1)
    {
        printf("init() failure\n");
        exit(EXIT_FAILURE);
    }

	int val = atoi(argv[1]);        
    if (push(&head, val) != 1)
    {
        printf("push() failure\n");
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


int push(struct stack *_head, int _value)
{
    struct stack *new_node;
    new_node->value = _value;
    new_node->next = _head;
    _head = new_node;
	printf("%d pushed\n", _value);

    return 1;
}
