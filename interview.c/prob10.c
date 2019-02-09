#include <stdio.h>

void hello(const char *name)
{
	printf("Hello, %s\n", name);
}

void callback1(void(*func)(const char*))
{
	func("callback1 Jerry");
}

typedef void (*HelloPtr)(const char*);

void callback2(HelloPtr f)
{
	f("callback2 Jerry");
}
int main()
{
	hello("Jerry");	
	callback1(hello);
	callback2(hello);
	return 0;
}
