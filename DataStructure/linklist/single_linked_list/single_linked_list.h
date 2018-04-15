#ifndef SINGLE_LINKED_LIST_H
#define SINGLE_LINKED_LIST_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct node{
	struct node *next;
	int value;
}Node;

Node* add_node(Node* head, int value);

int delete_node(Node* head, int value);

int print_node(Node *head);

int reverse_list(Node *head);

#ifdef __cplusplus
}
#endif

#endif 

