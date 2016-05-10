#include <stdio.h>

int calculate (int n)
{
	int i, val = 0;
	for (i = 0; i < n;i++ )
		val += i*(i+1);
	return val;
}

//recusive
int calculateRecusive (int n)
{
	if (n > 1)
		return n*calculateRecusive(n-1);
	else
		return 1;
}

int main (void)
{
	int n = 5;
	int val = calculate(5);
	printf("val %d\n", val);
	//val = calculateRecusive(5);
	printf("val %d\n", val);

	return 0;
}