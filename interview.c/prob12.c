#include <stdio.h>

/*
Adding a number to a pointer will result in the value of the pointer (address in memory) incremented by the number * the_size_of_pointed_type.
*/

int main()
{
	int i;
	int a[5] = {1, 2, 3, 4, 5};
	for (i = 0; i < 5 ; i++)
	{
		printf("%x = %d,", &a[i], a[i]);
	}
	printf("\n");

	int *p;
	p = a;
	for (i = 0; i < 5 ; i++)
	{
		printf("%x = %d,", p + i, *(p + i));
	}
	printf("\n");

	char s[] = "0113256";
	char *p1 = s;
	// *p1 = 0, p1 = 0
	printf("%c", *p1++); // *p1 = 0, p1 = 0 --> p1 = 1
	printf("%c", *(p1++)); // *p1 = 1, p1 = 1 --> p1 = 2
	/*
		printf("%c", *p1);
		p1 += 1;
	*/
	printf("%c", (*p1)++); // *p1 = 1, p1 = 1 --> *p1 = 2, p1 = 1
	/*
		printf("%c", *p1);
		*p1 += 1;
	*/

	printf("%c", *++p); // p1 = 2, *p1 = 3
	printf("%c", *(++p)); // p1 = 3, *p1 = 2
	printf("%c", ++*p); // *p1 = 3, p1 = 3
	printf("%c", ++(*p)); // *p1 = 4, p1 = 3
	printf("\n");
	return 0;
}
