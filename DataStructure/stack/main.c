#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main (void)
{	
	Node* head = NULL;
	int val;
	head = push(head, 1);
	head = push(head, 2);
	head = push(head, 3);
	show(head);
	val = pop(&head);
	printf("pop val %d  \n",val);
	show(head);

	return 0;
}