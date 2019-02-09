#include <stdio.h>

/*
call by value:
呼叫者和被呼叫者的變數各自佔有記憶體，將參數複製再傳給函式。
*/
void hello1(int a, int b)
{
	a += 1;
	b += 1;
	printf("hello1 :%d, %d\n", a, b);
}

/*
call by reference:
呼叫者和被呼叫者的變數使用相同的記憶體位址
*/
void hello2(int* a, int* b)
{
	*a += 1;
	*b += 1;
	printf("hello2 :%d, %d\n", *a, *b);
}

int main()
{
	int a = 5;
	int b = 6;
	printf("%d, %d\n", a, b);
	hello1(a, b);
	printf("%d, %d\n", a, b);
	hello2(&a, &b);
	printf("%d, %d\n", a, b);
	return 0;
}

