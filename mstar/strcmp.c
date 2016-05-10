#include <stdio.h>
#include <stdlib.h>


int Constrcmp(char *source, char *dest)
{
	while (*source && *dest && (*source - *dest) == 0){
		if (*source == '\0')
			return 0;
		source ++;
		dest++;
	}
	return -1;
}


int main (void)
{
	char source[] = "hello";
	char dest[] = "hellO";

	int val = Constrcmp (source, dest);

	printf("val %d\n", val);
 
	return 0;
}