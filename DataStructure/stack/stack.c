#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
/* stack: last in, first out*/
static Node* new_node(int value)
{
	Node* tmp = (Node *)malloc(sizeof(Node));
	if (!tmp) {
		printf("[%s] malloc error \n", __func__);
		return NULL;
	}

	tmp->next = NULL;
	tmp->value = value;
	return tmp;
}

//show last
int pop(Node **head)
{
	Node* curr = *head;
	int value;
	value = curr->value;
	
	*head = (*head)->next;
	free(curr);
	return value;
}

//add to last 
Node* push(Node *head, int value)
{
	if (!head) {
		head = new_node(value);
	} else {
		Node* tmp = new_node(value);
		tmp->next = head;
		head = tmp;
	}

	return head;
}

void show(Node* head)
{
	while(head) {
		printf("list value %d \n", head->value);
		head = head->next;
	}
}	