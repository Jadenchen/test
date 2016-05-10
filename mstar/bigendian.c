#include <stdio.h>

int main (void)
{
	int num = 0x12345600;
	int a = (num & 0x000000ff) << 24;
	int b = (num & 0xff00) << 8;
	int c = (num & 0xff0000) >> 8 ;
	int d = (num & 0xff000000)>>24;
	num = a|b|c|d;
	printf("%p\n", num);

	return 0;
}