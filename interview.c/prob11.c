#include <stdio.h>

#define max(x, y) x > y ? x : y
#define sum(x, y) (x + y)

int main()
{
	printf("max(5,3) = %d\n", max(5, 3));	
	printf("max(3,5) = %d\n", max(3, 5));	
	printf("sum(3,5) = %d\n", sum(3, 5));	
	printf("sum(3,5) * 2 = %d\n", sum(3, 5) * 2);	
	return 0;
}
