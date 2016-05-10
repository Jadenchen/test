#include <stdio.h>
#include <stdio.h>
#include <string.h>

// char *strcpy1 (char *des, char *source )
// {
// 	// char  *tmp = (char *)malloc (strlen(s)+1);
// 	// int i;
// 	// for (i = 0; i < strlen(s);i++){
// 	// 	tmp[i] = s[i];
// 	// }
// 	// tmp[i] = '\0';
// 	// printf("strcpy1 &tmp %x\n", &tmp);
// 	// return tmp;
// 	int i;

// 	for (i = 0; i< strlen(source);i++)
// 		des[i] = source[i];
// 	des[i] = '\0';
// 	printf("%x\n", &des);
// 	return des;
// }


// int main (void)
// {
// 	// char s[] = "hello";
// 	// char tmp[5];
// 	// strcpy1(tmp ,s);
// 	// //printf("&tmp %x\n", &tmp);
// 	// printf("%s\n", tmp);\
// 	int k[5] = {6,7,8,9,10};
// 	// int *p;
// 	// p = a;
// 	// *(p++) += 123;
// 	// *(++p) += 123;
// 	int i;
// 	for (i = 0;i < 5;i++)
// 		printf("%d\n", k[i]);

// 	return 0;
// }
// int strcmp1 (char *s1, char *s2)
// {
// 	// while (*s1 && *s2 && (*s1 - *s2) == 0){
// 	// 	s1++;
// 	// 	s2++;
// 	// 	printf("1");

// 	// }
// 	// printf("\n");
// 	for (;*s1 == *s2;s1++, s2++){
// 		if (*s1 == '\0')
// 			return 0;
// 	}
// 	return *s1 - *s2;
// }

List * swap (List *head, List *a, List *b)
{
	assert(head);
	assert(a);
	assert(b);

	/* a or b is head */
	if (a == head || b == head){
		List *curr = head;
		List *nohead = (a = head) ? b:a;

		for (;curr->next != nohead; curr = curr->next);

		curr->next = head;
		curr = nohead->next;
		nohead->next = head->next;
		head->next = curr;
		head = nohead;
		return head;
	}

	/*a and b are not head*/
	List *prev_a = head;
	List *prev_b = head;
	for (;prev_a->next != a; prev_a = prev_a->next);
	for (;prev_b->next != b; prev_b = prev_b->next);
	
	prev_a->next = b;
	prev_b->next = a;

	prev_a = b->next;
	b->next = a->next;
	a->next = prev_a;
		
	return head;

}

List *insert (List *head, int val)
{
	assert(head);
	List *tmp = (List *)malloc(sizeof(List *));
	if (tmp == NULL)
		printf("create failed\n");

	//add to last
	if(head){
		List *curr = head;
		for(;curr->next != NULL; curr = curr->next);

		curr->next = tmp;
		tmp->val = val;
		tmp->next = NULL;

	}
	return head;
}


List *insert (List *head, List *a, int val)
{
	assert(head);
	List *tmp = (List *)malloc(sizeof(List *));
	if (tmp == NULL)
		printf("create failed\n");

	//add to last
	if(head){
		List *prev_a = head;
		for(;prev_a->next != a; prev_a = prev_a->next);
		prev_a->next = tmp;
		tmp->val = val;
		tmp->next = a;
	}

	return head;
}



int main (void)
{
	// int a[] = {6,7,8,9,10};
	// int i;
	// int *p = a;
	// *(p++) += 123;
	// *(++p) += 123;
	// for (i = 0;i< 5;i++)
	// 	printf("%d\n", a[i]);
	// return 0;
	// char s[] ="hello";
	// char s1[] = "hellO";

	// int val = strcmp1(s, s1);
	// printf("%d\n", val);
	int a = 0x3;
	a &= ~(1<<1);
	printf("%x\n", a);
	return 0;
}