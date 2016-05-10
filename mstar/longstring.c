#include <stdio.h>


void *compare (char *s1, char *s2)
{
	int s1len = 0;
	int s2len = 0;
	while (*s1){
		s1++;
		s1len++;
	}
	while(*s2){
		s2++;
		s2len++;
	}

	printf("s1len %d\n", s1len);
	printf("s2len %d\n", s2len);

}

int main (void)
{
	char s1[] = "hello0";
	char s2[] = "world";

	compare (s1, s2);
	//printf("%s\n", tmp);
	return 0;

}