#include <stdio.h>


int main (void)
{

	short str[6] = {1,3,5,7,8,9};
	char a = 0xAB;

	//printf ("short sizeof %d \n", sizeof(short));
	printf ("short sizeof  = %d \n", sizeof(str));
	printf ("*(str+2) = %d \n", *(str+2));
	printf ("(str+2)[0] = %d \n", (str+2)[0]);
	printf ("(str+2)[2] = %d \n", (str+2)[2]);
	printf ("*(short *)(((int *)str)+2) = %d \n", *(short *)(((int *)str)+2) );
	printf ("*(((char *)str)+2) = %d\n", *(((char *)str)+2));
	printf ("((int *)str)[1] = %x\n", ((int *)str)[1]);
	printf ("((int *)str)[0] = %x\n", ((int *)str)[0]);
	printf ("a = %x\n", a);

	//printf ("(int *)str= %x\n", (int *)str);
	return 0;
}