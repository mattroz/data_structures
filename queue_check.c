#include <stdio.h>
#include <unistd.h>
#include "ds_headers/queue.h"


int main(int argc, char *argv[])
{
	Node_t *head, *tail;
	initialize_queue(&head, &tail);
	int tmp;

//	enqueue(&head, &tail, 10);
//	dequeue(&head, &tmp);

	for(int i = 0; i < 10; i++)
	{
		enqueue(&head, &tail, i);
	}

	
	for(int i = 0; i < 10; i++)
	{
		int tmp;
		dequeue(&head, &tmp);
	}

	return 0;
}
