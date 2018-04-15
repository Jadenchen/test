#include <stdio.h>
#include "single_linked_list.h"

int main (void)
{	
	Node* head = NULL;
	head = add_node(head, 1); 
	head = add_node(head, 2);
	head = add_node(head, 3); 
	head = add_node(head, 4); 
	
	print_node(head);
	printf("leave done\n");
    return 0;
}
