#include <stdio.h>
#include <string.h>
void reverseString(char *str)
{
	int i;
	char tmp;
	int len = strlen(str);
	for (i = 0; i < len/2;i++){
		tmp = str[i];
		str[i] = str[len -1 -i];
		str[len -1-i] = tmp;
	}
}

int main (void)
{
	char str[] = "hello";

	reverseString(str);
	printf("%s\n", str);
}
