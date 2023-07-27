
#include <iostream>
#define N 10
//排序副程式
void sorting(int* A)//不return任何值
{
	int i, j, temp;
	for (i = 0; i < N; i++)
	{
		for (j = i + 1; j < N; j++)
			if (A[i] > A[j])
			{
				temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
	}
}
int main()
{
	int max, temp, i, j, k, n, A[N] = { 80, 56, 90, 73, 22, 99, 44, 55, 77, 90 };
	/*
	//排序
	for (i = 0; i < N; i++)
	{
		for (j = i + 1; j < N; j++)
			if (A[i] > A[j])
			{
				temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
		printf("%d ", A[i]);
	}
	
	//搜尋
	max = 0;
	for (i = 0; i < N; i++)
	{
		if (A[i] > max)
		{
			max = A[i];
			j = i;//紀錄最大值位置
		}
	}
	printf("Max = %d in %d",max,j);
	*/
	//長同碼


	
	//排列組合(找出三個數字相加=0)
	/*
	int B[N] = {-3,3,1,-2,5,2,-4,4,-1,6};
	for (i = 0; i < N-2; i++)//N=>N-2***
	{
		for (j = i + 1; j < N-1; j++)//N=>N-1***
		{
			for (k = j + 1; k < N; k++)
			{
				if (B[i] + B[j] + B[k] == 0)
				{
					printf("%2d %2d %2d \n", B[i], B[j], B[k]);
				}
			}
		}
	}
	*/
	/* // 暴力搜尋 會重複計算
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			for (k = 0; k < N; k++)
				if (B[i] + B[j] + B[k] == 0)
				{
					printf("%2d %2d %2d \n", B[i], B[j], B[k]);
				}
		}
	}
	*/
	//sorting + binary search
	for (i = 0; i < N; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
	sorting(A);  //一次性
	for (i = 0; i < N; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
	//j = binary_search(i);//大量運算 請找出n在第幾個位置
	n = 22;
	//binary search 百萬筆20次 lod2(N)
	int beg = 0, end = N - 1, mid;
	int m = 0;//計算次數
	do
	{
		++m;
		mid = (beg + end) / 2;
		if (A[mid] > n)
		{
			end = mid - 1;
			//printf("%d\n", end);
		}
		else if (A[mid] < n)
		{
			beg = mid + 1;
			//printf("%d\n", beg);
		}
		else if (A[mid] == n)
		{
			printf("%d %d\n", A[mid],m);//***
			break;
		}
	} 
	while (beg <= end);
	return 0;
}

