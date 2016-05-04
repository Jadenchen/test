#include <stdio.h>


union S {
	struct{
		short a;
		char b,c;
	}type1;
	struct {
		int d:24;
		int e:8;
	}type2;
	unsigned short type3[4];
} *ps ;

int main (void)
{

	char cArray[] = {0x1, 0x2,0x3,0x4,0x5,0x6,0x7,0x8,0x9, 0xa, 0xb, 0xc, 0xd, 0x0e,0x0f,0x10, 0x11};
	ps = (union S *)cArray;

	printf("sizeof ps %d\n", sizeof(ps));
	printf("sizeof *ps %d\n", sizeof(*ps));
	printf("sizeof union S %d\n", sizeof(union S));
	printf("ps->type1.b %x\n", ps->type1.b);
	printf("ps[0]->type1.b %x\n", ps[0].type1.b);
	printf("ps[1]->type1.b %x\n", ps[1].type1.b);
	
	//printf("*(ps+1).type1.b %x\n", *(ps+1).type1.b);?
	//printf("*(ps+1).type2.e %x\n", *(ps+1).type2.e);?

	return 0;
}