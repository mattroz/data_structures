#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "sources/headers/stack.h"


int main(int argc, char *argv[])
{
	Node_t *head = malloc(sizeof(Node_t)); 
	if (init(head) != 1)
	{
		printf("init() failure\n");
		exit(EXIT_FAILURE);
	}

	for(int i = 0; i < 10; i++)
	{
		if (push(&head, i) != 1)
		{
			printf("push() failure at %d element\n", i);
			exit(EXIT_FAILURE);
		}
	}
	
	if(print(&head) != 1)
	{
		printf("print() failure\n");
		exit(EXIT_FAILURE);
	}	

	return 0;
}
