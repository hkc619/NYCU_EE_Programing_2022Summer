#include <iostream>
#define N 10

int main()
{
    int A[N] = { 80,56,90,73,22,99,44,55,77,90 },temp;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++) 
        {
            if (A[i] > A[j])//(A[i] < A[j]由小排到大
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
            printf("%d ", A[j]);
        }
        printf("\n");
    }
    /*
    for (int i = 0; i < N; i++)
    {
        for (int j = i+1; j < N; j++) 由小排到大
        {
            if (A[i] > A[j])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    */
    

    for (int i = 0; i < N; i++)
    {
        printf("A[%d]=%d\n", i,A[i]);
    }
}


