#include <stdio.h>

/*
 volatile 修飾的變數代表它可能會被不預期的更新
 1. 因此告知編譯器不對它涉及的地方做最佳化.
 2. 並在每次操作它的時候都讀取該變數實體位址上最新的值，而不是讀取暫存器的值。
*/

int main()
{
	int val;
	int n;
	int *p;

	val = 2008;
	p = &val;
	n = *p;
	printf("%d\n", val);
	/*
	這裡沒有用到n變數, 所以compile可以能會n = *p刪除掉.
	但這或許MMIO, 要叫device來讀取內容.
	*/

	return 0;
}
