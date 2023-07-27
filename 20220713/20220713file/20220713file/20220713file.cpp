#include <iostream>
#include<stdio.h>
#define MAX 100

int main()
{
	//1.變數宣告
	char File[100] = { "Book1.txt" };
	FILE *In;
	errno_t err;//visual c新加的
	//2.開啟檔案
	err = fopen_s(&In, File, "rb");//rb 讀 wb 寫
	if (err != 0)//沒讀到是2
	{
		printf("File Error\n");
		return -1;
	}
	char N[MAX][100];
	int S[MAX][4], No = 0;
	int I[MAX];//序號
	int T[MAX];//總分
	//3.讀檔案
	while (!feof(In)) //當不是檔案尾巴時，繼續
	{
		fscanf_s(In, "%s %d %d %d %d", &N[No][0], 100, //100是size
									   &S[No][0], 
			                           &S[No][1], 
			                           &S[No][2], 
			                           &S[No][3]); 
		I[No] = No;//printf(" %d\n", No);
		No++;//printf(" %d\n", No);
	}
	
	//4.關檔案
	fclose(In);
	printf("No=%d\n", No-1);
	
	//列印
	
	for (int i = 0; i < No-1; i++)
	{
		T[i] = S[i][0] + S[i][1] + S[i][2] + S[i][3];
		double A = double(T[i]) / double(4);
		//printf(" %d %s %d %d %d %d total=%d average=%.2f\n", I[i] ,&N[i][0], S[i][0], S[i][1],S[i][2], S[i][3],T[i], A);
	}
	//5.計算各科mean std_dev 20220714
	float mean[4], std_dev[4];
	for (int i = 0; i < 4; i++)
	{

		mean[i] = 0.0;
		std_dev[i] = 0.0;//記得歸0
		for (int j = 0; j < No - 1; j++) //加美人各科
		{
			mean[i] += (float)S[j][i];
			std_dev[i] += pow((float)S[j][i],2);
		}
		mean[i] = mean[i] / (float)(No - 1);
		std_dev[i] = (std_dev[i] / (float)(No - 1)) - pow(mean[i],2);
		std_dev[i] = sqrt(std_dev[i]);
		printf("mean[%d]=%f ", i, mean[i]);
		printf("std_dev[%d]=%f\n",i, std_dev[i]);
	}
	//6.sorting 20220714 ***
	int temp, n;
	char N1[100];
	for (int i = 0; i < No - 2; i++)
	{
		for (int j = i + 1; j < No-1 ; j++)
		{
			if (T[i]<T[j])
			{
				temp = T[i];
				T[i] = T[j];
				T[j] = temp;//總分交換
				temp = I[i];
				I[i] = I[j];
				I[j] = temp;//ID交換
				for (n = 0; n < 4; n++)//四科成績交換
				{
					temp = S[i][n];
					S[i][n] = S[j][n];
					S[j][n] = temp;
				}//換名子 ***
				strcpy_s(N1,      100,&N[i][0]);//N[i][0]換到N1
				strcpy_s(&N[i][0],100,&N[j][0]);//N的資料大小要一致第19行 前面設10 這邊就要寫10 設100 就要寫100
				strcpy_s(&N[j][0],100,N1);
			}
		}
	}
	
	//7.filtering 20220714
	for (int i = 0; i < No - 1; i++)
	{
		//if (!strncmp(&N[i][0], "陳", 2))//字串比對 strcmp全 strncmp部分 2Bytes
		if(((N[i][0]==-74) && (N[i][1]==-64)) || ((N[i][2] == -90) && (N[i][3] == 119))|| ((N[i][4] == -90) && (N[i][5] == 119)))
			printf_s("序號=%2d  %s %2d %2d %2d %2d %3d\n", I[i] + 1, & N[i][0], S[i][0], S[i][1], S[i][2], S[i][3], T[i]);
	}
	
	//8.存檔 20220714
	FILE *Out;
	errno_t err1;
	char File1[100] = { "Book2.txt" };
	//開啟檔案
	err1 = fopen_s(&Out, File1, "wb");
	if (err1 != 0)
	{
		printf("File Error2\n");
		return 0;
	}
	//寫檔案(依名次) 20220714 ***
	for (int i = 0; i < No - 1; i++) //名次
	{
		for (int j = 0; j < No - 1; j++)//序號
		{
			if(I[i]==j)
				fprintf_s(Out, "排名=%2d 序號 %2d %s %2d %2d %2d %2d %3d\n", i + 1,j, &N[i][0], S[i][0], S[i][1], S[i][2], S[i][3], T[i]);
		}
		
	}
	fclose(Out);
	//(依名次列出) 20220714 ***
	printf("\n依照名次\n\n");
	for (int i = 0; i < No - 1; i++) //名次
	{
		for (int j = 0; j < No - 1; j++)//序號
		{
			if (I[i] == j) //依名次找序號
				printf("名次=%2d 序號 %2d %s %2d %2d %2d %2d %3d\n", i + 1, j, &N[i][0], S[i][0], S[i][1], S[i][2], S[i][3], T[i]);
		}

	}
	//(依序號列出) 20220714 ***
	printf("\n依照序號\n\n");
	for (int i = 0; i < No - 1; i++) //名次
	{
		for (int j = 0; j < No - 1; j++)//序號
		{
			if (I[j] == i)//依序號找名次
				printf("序號 %2d 名次=%2d %s %2d %2d %2d %2d %3d\n", i , j, &N[j][0], S[j][0], S[j][1], S[j][2], S[j][3], T[j]);
		}

	}
	return 0;
}	

