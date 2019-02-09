#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n = 0x12345678;
	char buf[4] = {0};
	memcpy(buf, &n, sizeof(n));
	printf("%02x, %02x, %02x, %02x\n", buf[0], buf[1], buf[2], buf[3]);
	return 0;
}
