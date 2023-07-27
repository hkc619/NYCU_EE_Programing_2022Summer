#include <iostream>
#define LEN 1000000
short Data[LEN];
int main()
{
    int i, j, k;
    //1.產生大量亂數
    for (i = 0; i < LEN; i++)
    {
        Data[i] = rand();
    }
    //2.蒐集最長相同碼 
    k = 2;//一次抓3個 連續3個數字一模一樣***
    for (i = 0; i < LEN-2; i++)
    {
        for (j = i + 1; j < LEN-1 ; j++)
        {
            /*if ((Data[i] == Data[j]) &&
                (Data[i + 1] == Data[j + 1]) && 
                (Data[i + 2] == Data[j + 2]))
                printf("i = %d j = %d %d %d %d", i, j, Data[i], Data[i + 1], Data[i + 2]);
             */
            if(!memcmp(&Data[i],&Data[j],k*sizeof(short)))//***
                printf("i = %d j = %d %d %d %d\n", i, j, Data[i], Data[i + 1], Data[i + 2]);
        }
        if (i % 100 == 0)
        {
            printf("i=%d\r", i);
        }
    }
    return 0;
}

