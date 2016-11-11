#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "ds_headers/stack.h"


int main(int argc, char *argv[])
{
/*
	if (argc != 2)
	{
		printf("usage: ./s <value>\n");
		exit(EXIT_FAILURE);
	}
*/	
	struct stack *head = malloc(sizeof *head); 
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
