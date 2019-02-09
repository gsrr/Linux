#include <stdio.h>

union tunion{
	char a[4];
	int b;
};

int main()
{
	union tunion u;
	u.b = 0x12345678;
	printf("sizeof=%d u.b=%x, u.a[0]=%x, u.a[1]=%x, u.a[2]=%x, u.a[3]=%x\n", sizeof(u), u.b, u.a[0], u.a[1], u.a[2], u.a[3]);
	return 0;
}
