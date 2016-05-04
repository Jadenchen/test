#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ConstStrCat (const char *s1, const char *s2)
{
	char *tmp = (char *)malloc(strlen(s1)+ strlen(s2)+1);
	int i=0;
	int slen = strlen(s1);
	for (i = 0; i < slen;i++){
		tmp[i] = s1[i];
	}
	
	for (i = 0;i < strlen(s2);i++){
		tmp[slen+i] = s2[i];
	}

	tmp[slen+i] = '\0';

	return tmp;
}

int main (void)
{
	char s[] = "hello";
	char t[] = "world";

	char *tmp = ConstStrCat(s, t);
	printf("%s\n", tmp);
	free (tmp);

	return 0;

}