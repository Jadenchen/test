#ifndef SINGLE_LINKED_LIST_H
#define SINGLE_LINKED_LIST_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
	struct node *next;
	int value;
}NODE;

int add_node(Node* ptNode, int value);

int delete_node(Node* ptNode, int value);

int print_node(Node *ptNode);

int reverse_list(Node *ptNode);

#ifdef __cplusplus
}
#endif

#endif 

