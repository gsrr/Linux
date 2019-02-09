#include <stdio.h>

/*
編譯器處理方式 : define 在預處理階段展開；const 在編譯階段使用。
類型和安全檢查 : const 會在編譯階段會執行類型檢查，define 則不會。
存儲方式 : define 直接展開不會分配記憶體，const 則會在記憶體中分配。

1. #define 是巨集，在前置處理器(preprocessor)執行時處理，將要替換的程式碼展開做文字替換。
*/

#define VAL 1234
const int val1 = 5678;

int main()
{
	printf("define = %d, const = %d\n", VAL, val1);	
	return 0;
}
