#ifndef STACK_H
#define STACK_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct node{
	struct node *next;
	int value;
}Node;

int pop(Node **head);

Node* push(Node *head, int value);

void show(Node* head);
#ifdef __cplusplus
}
#endif

#endif 

