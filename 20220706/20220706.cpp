// 20220706.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>

int main()
{
    /*
    printf("nycu\n\nEE-111\n");//格式化列印 /r將游標拉回開頭 /n跳行
    int i = 10, j = 20, k;
    k = i + j;
    printf("i = %d\nj = %d\nk = %d\n", i, j, k);
    */
    
    int a, i;
    printf("請輸入: ");
    scanf_s("%d", &a);//_s visual studio 特別 safe的意思
    for (i = 1; i <= a; i++)
    {
        printf("i= %02d 平方: %.0f 平方根: %5.2f 立方根: %f\n", i, pow(i, 2), sqrt(i), pow(i, 0.33333333));//pow(a,b) a 要開的數 b 0.5 二次 0.3333 三次
    }
    
    /*
    int  a;
    printf("輸入值:");
    scanf_s("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            printf("%2d*%2d=%3d,", i, j, i * j);
        }
        printf("\n");
    }
    */

}
