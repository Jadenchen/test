#include <stdio.h>
#include "single_linked_list.h"

static Node* new_node(int value)
{
	Node *new = (Node *)malloc(sizeof(Node));
	if (!new) 
		printf("[%s] malloc fdailed \n", __func__);

	new->next = NULL;
	new->value = value;
	return new;
}

int add_node(Node* ptNode, int value)
{
	// if (!ptNode) {
	//  	printf("[%s] invalid node \n", __func__);
	//  	return -1;
	// }

	Node* curr = ptNode;
	Node* new = new_node(value);
	//find the last 
	while (NULL != curr->next)
		curr = curr->next;

	//add to last 
	curr->next = new;
	return 0;	
}

Node* delete_node(Node* ptNode, int value)
{
	if (!ptNode) {
	 	printf("[%s] invalid node \n", __func__);
	 	return -1;
	}
	
	Node* head = ptNode;
	Node* curr = head;
	if (!head) {
		printf("[%s] no list n", __func__);
		return NULL;
	}

	//check head
	if (value == head->value) {
		head = head->next;
		curr->next = NULL;
	} else {
		while(NULL != curr->next)
		{
			if (value == curr->value) {

			}

			curr = curr->next;
		}
	}

	return head;
}

int print_node(Node *ptNode);

int reverse_list(Node *ptNode);