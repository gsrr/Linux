#include <stdio.h>

int main()
{
	const int a = 5;
	int b =  6;
	int c = 7;
	printf("a :%d\n", a);
	const int *pa = NULL;
	pa = &a;
	printf("pa :%d\n", *pa);
	//*pa += 1; // fail
	
	int * const pb = &b;
	printf("pb :%d\n", *pb);
	//pb = &c; // assignment of read-only variable ‘pb’
	return 0;
}
