#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* gcd  recursion */

// int gcd (int a, int b)
// {
// 	if (b == 0)
// 		return 0;

// 	if (a%b == 0)
// 		return b;
// 	else 
// 		return gcd(b, a%b);

// }


// int main(void)
// {

// 	int a = 10, b = 5;

// 	int val = gcd (a, b);

// 	printf("val %d\n", val);
// 	return 0;

// }

// void swap(int *a, int *b)
// {
// 	int tmp;
// 	tmp = *a;
// 	*a = *b;
// 	*b = tmp;
// }



// int main (void)
// {

// 	int a = 5;
// 	int b = 6;

// 	swap (&a, &b);
// 	printf("a %d b %d \n",a,b );

// 	return 0;
// }

// void sort(int *a, int len)
// {
// 	int i, j;
// 	int tmp;

// 	for (i = 0; i < len;i++)
// 		for(j = i+1; j < len; j++){
// 			if(a[i] > a[j]){
// 				tmp = a[i];
// 				a[i] = a[j];
// 				a[j] = tmp;
// 			}
// 		}
// }

// int main(void)
// {
// 	int a[5] = {3,2,5,1,7};
// 	int i;

// 	int len = sizeof(a)/sizeof(int);
// 	//printf("len %d\n", len);

// 	for ( i = 0; i < 5;i++){
// 		printf("%d ", a[i]);
// 	}

// 	printf("\n");

// 	sort(a, len);

// 	for ( i = 0; i < 5;i++){
// 		printf("%d ", a[i]);
// 	}
// 	printf("\n");

// 	return 0;
// }

// int main (void)
// {

// 	FILE *pfile;

// 	char tmp[] = {'h', 'e', 'l'};

// 	pfile = fopen("test.txt", "w+");

// 	if(pfile == NULL)
// 		printf("open failed\n");
// 	else{
// 		fwrite(tmp, 1 , sizeof(tmp), pfile);
// 	}

// 	fclose(pfile);

// 	return 0;
// }


typedef struct Node node;

struct Node {
	char *val;
	struct Node *next;
};

node *new(char *val)
{
	node *tmp = (node *)malloc(sizeof(node));
	tmp->val = val;
	tmp->next = NULL;
	return tmp;
}

void show (node *head)
{
	if (head == NULL)
		return;
	while (head){
		printf("%s ", head->val);
		head = head->next;
	}
	printf("\n");
}

node *revert(node *head)
{
	if (head == NULL)
		return;
	node *p, *q, *r;

	p = head;
	q = NULL;
	while (p){
		r = q;
		q = p;
		p = p->next;
		q->next = r;
	}
	return q;
}

int main (void)
{
	node *head = new("how");
	node *tmp1 = new("are");
	node *tmp2 = new("you");

	head->next = tmp1;
	tmp1->next = tmp2;

	show(head);

	head  = revert(head);

	show(head);
	return 0;
}