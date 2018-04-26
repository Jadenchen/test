#include <stdlib.h>
#include <stdio.h>
#include "queue.h"

/* queue: first in, first out */

static Node *new_node(int value)
{
	Node *tmp = (Node *)malloc(sizeof(Node));
	if (NULL == tmp) {
		printf("malloc error \n");
	}
	tmp->value = value;
	tmp->next = NULL;
	return tmp;
}

static int is_empty(Node *head)
{
	if (NULL == head)
		return 1;
	else 
		return 0;
}

int enqueue (Node **head, int value)
{
	if (is_empty(*head)) {
		*head = new_node(value);
	}
	else {
		Node *tmp = new_node(value);
		//Node* curr = *head;
		tmp->next = *head;
		*head = tmp;
	}

	return 0;

}

int dequeue (Node **head)
{
	if (is_empty(*head)){
		printf("queue is empty\n");
		return -1;
	} 
	else {
		
	}
	return 0;
}

int show (Node *head)
{
	if(is_empty(head))
		return -1;

	while(head) {
		printf("queue value %d \n", head->value);
		head = head->next;
	}
	return 0;
}
