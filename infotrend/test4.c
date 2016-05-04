#include <stdio.h>

int main (void)
{
	int map = 0x123456f8;
	int newmap = 0x12345670;

	int tmp = (map & 0xf0);
	newmap |= (tmp >> 4);
	printf("%x\n", newmap);

	return 0;
}