#include <stdio.h>

/*
int a; // 一個整型數
int *a; // 一個指向整數的指標
int **a; // 一個指向指標的指標，它指向的指標是指向一個整型數
int a[10]; // 一個有10個整數型的陣列
int *a[10]; // 一個有10個指標的陣列，該指標是指向一個整數型的
- int (*a)[10]; // 一個指向有10個整數型陣列的指標
int (*a)(int); // 一個指向函數的指標，該函數有一個整數型參數並返回一個整數
- int (*a[10])(int); // 一個有10個指標的陣列，該指標指向一個函數，該函數有一個整數型參數並返回一個整數
*/

void hello(int a)
{
	printf("hello :%d\n", a);	
}

int main()
{
	int a = 10;
	printf("a : %d\n", a);

	int *b;
	b = &a;
	*b += 1;
	printf("b : %d\n", *b);
	
	int **c;
	c = &b;
	**c += 1;
	printf("c : %d\n", *(*c));

	int d[5] = {1, 1, 1, 1, 1};
	int i;
	printf("d: ");
	for(i = 0 ; i < 5 ; i++)
	{
		printf("%x, %d,", &(d[i]), d[i]);
	}
	printf("\n");

	int *e[5];
	for(i = 0 ; i < 5 ; i++)
	{
		e[i] = &(d[i]);
		*e[i] += 1; // *(e[i]) += 1
	}
	printf("e: ");
	for(i = 0 ; i < 5 ; i++)
	{
		printf("%d,", *e[i]);
	}
	printf("\n");

	int *f;
	f = d;
	printf("f: ");
	for(i = 0 ; i < 5 ; i++)
	{
		f[i] += 1;
		printf("%d,", f[i]);
	}
	printf("\n");
	
	void *g;
	int *h;
	g = d;
	h = (int*)g;
	printf("h: ");
	for(i = 0 ; i < 5 ; i++)
	{
		h[i] += 1;
		printf("%d,", *h);
	}
	printf("\n");

	void (*func)(int);
	func = hello;
	func(5);
	

	return 0;
}
