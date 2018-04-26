#include <stdio.h>
#include "queue.h"

int main (void)
{	
	Node* head = NULL;
 	enqueue(&head, 1); 
	enqueue(&head, 2);
	enqueue(&head, 3); 
	enqueue(&head, 4); 
	show(head);
	printf("leave done\n");
    return 0;
}
