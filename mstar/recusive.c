#include <stdio.h>

int func(int a)
{
	if (a == 1)
		return 1;
	else
		return a*func(a-1);
}

int main (void)
{
	printf("%d\n",func(5) );
	return 0;
}