#include <stdio.h>


int main (void)
{

	struct bitfield
	{
		/* data */
		unsigned a:5;
		unsigned b:5;
		unsigned c:6;
	};

	struct bitfield Bit = {7,2,3};
	char *p;
	p = &Bit;
	//p++;
	printf("sizeof %d\n", sizeof(Bit));
	printf("sizeof p %d\n", sizeof(p));
	printf("%x\n", *p);

	return 0;
}