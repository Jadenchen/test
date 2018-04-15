#include <stdio.h>
#include <stdlib.h>
#include "single_linked_list.h"

static Node* new_node(int value)
{
	Node *new = (Node *)malloc(sizeof(Node));
	if (!new) {
		printf("[%s] malloc fdailed \n", __func__);
		return NULL;
	} 

	new->next = NULL;
	new->value = value;
	return new;
}

Node* add_node(Node* head, int value)
{
	
	if (!head) {
		head = new_node(value);
	}else {
		Node *curr = head;
		//Node *tmp = curr;
		Node *new = new_node(value);
		if (!new) {
			printf("[%s] something wrong\n", __func__);
			return curr;
		}

		while (!curr->next) {
			curr = curr->next;
		}
		curr->next = new;
	}

	return head;	
}

int delete_node(Node* head, int value)
{
	if (!head) {
	 	printf("[%s] invalid node \n", __func__);
	 	return -1;
	}
	
	Node *curr = head;
	Node *prev;
	if (value == curr->value) {
		head = head ->next;
		free(curr);
	} else {
		
		while (!curr &&  value != curr->value)	{	
			prev = curr;
			curr = curr->next;
		}

		prev->next = curr->next;
	}
	return 0;
}

int print_node(Node *head)
{
	if (!head) {
		printf("[%s] there is no list \n", __func__);
		return -1;
	}

	Node *curr = head;
	while (curr) {
		printf("value %d \n", curr->value);
		curr = curr->next;
	}
	return 0;
}

int reverse_list(Node *head)
{
	if (!head) {
		printf("[%s] there is no list\n", __func__);
		return -1; 
	}
#if 0
//method 1
	Node *curr, *prev;
	curr = head;
	preceding = curr->next;
	prev = NULL;
	while (NULL != preceding) {
		curr->next = prev;
		prev = curr;
		curr = preceding;
		preceding = preceding->next
	}

	curr->next = prev;
	head = curr;

#endif 
	#if 1
//method 2 
	Node *prev = NULL;
	//Node *next = NULL;
	Node *curr = head;
	Node *next;
	while (!curr) {
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}

	head = prev;
	#endif 
	return 0;
}	