#ifndef QUEUE_H
#define QUEUE_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct node{
	struct node *next;
	int value;
}Node;

Node* add_node(Node* head, int value);

#ifdef __cplusplus
}
#endif

#endif 

