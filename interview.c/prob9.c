#include <stdio.h>

/*
typedef 保留字可以為資料型態建立別名，使程式更易閱讀理解
*/

struct Person {
	char name[16];
	int age;
};

typedef struct Person Person;

void hello(char *name)
{
	printf("Hello, %s\n", name);
}

void (*func)(char*);	

typedef void (*func1)(char*);
int main()
{
	struct Person p1 = {"Jerry", 16};
	printf("name = %s, age = %d\n", p1.name, p1.age);

	Person p2 = {"James", 4};
	printf("name = %s, age = %d\n", p2.name, p2.age);

	func = hello;
	func(p1.name);
	func(p2.name);
	
	func1 f;
	f = hello;
	f(p1.name);
	f(p2.name);
	return 0;
}
