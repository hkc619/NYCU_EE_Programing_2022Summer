// 20220706HW.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#define pi 3.14159265
int main()
{
	int x;
	float x1, sinx, cosx;
	printf("x = ");
	scanf_s("%d", &x);
	x1 = x * 2 * pi / 360;
	sinx = x1 - pow(x1, 3) / 6 + pow(x1, 5) / 120 - pow(x1,7)/5040;
	cosx = 1 - pow(x1, 2) / 2 + pow(x1, 4) / 24- pow(x1, 6) / 720;
	printf("sin%d=%f cos%d=%f", x,sinx,x,cosx);
}


