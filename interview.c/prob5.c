#include <stdio.h>

/*
local, static, global
1. local 變數 : local 變數僅活在該函式內，存放位置在 stack 或 heap 記憶體中。

2. static 變數 : static 變數生命周期 (life time) 跟程式一樣長，而範圍 (scope) 則維持不變，即在宣告的函式之外仍無法存取 static 變數。

3. global 變數 : 所有區段皆可使用此變數

*/

int c = 7;

void hello1()
{
	int b = 6;
	static int a = 5;
	a += 1;
	b += 1;
	c += 1;
	printf("a: %d, b :%d, c :%d\n", a, b, c);
}

int main()
{
	
	hello1();
	hello1();
	return 0;
}
