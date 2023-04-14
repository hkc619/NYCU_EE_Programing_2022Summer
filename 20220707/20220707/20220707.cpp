#include <iostream>
#define AY 3
#define AX 2
#define BY 2
#define BX 4
#define CY AY
#define CX BX
int main()
{
	//整數 : char ,short ,int(4) ,long(4) ,long long(8)
	//浮點數 : float(4), double(8), long double(12)
	//陣列 : array
	//字串 : char *
	//結構 : struct
	/*
	//char -128 ~ 127       0-127 -128 -   1 => 8bits = 1byte
	//unsigned char 0 ~ 255 0-127  128 - 255 => 8bits = 1byte
	unsigned char c1, c2;
	c1 = 100;
	c2 = 200;
	scanf_s("%d", &c2);
	printf("c1 =%d c2 =%d \n", c1, c2);
	*/
	/*
	//short : 2 bytes -32768 ~ 32767
	//unsigned short 0 ~ 65535
	short s1 =30000 ;
	unsigned short s2 = 40000;
	printf("%d %d", s1, s2);
	*/

	//long :4 bytes -21億~21億
	//unsigned long 0-42億
	/*
	//整數轉換
	char c1;
	int i1;
	long l1;
	c1 = 100;
	i1 = 27;
	l1 = 300000;
	c1 += (char)i1; //配合左邊 改右邊
	printf("c1=%d\n",c1);
	*/
	//float : 4 bytes  小數點後7位
	//double: 8 bytes 小數點後15位
	/*
	double f1 = 3.14159265;
	printf("f1 = %.10f", f1);
	*/
	/*
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 }, i;
	int b[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int c[2][2][3] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	for(i=0;i<10;i++)
		printf("a[%d] = %d, ", i,a[i]);
	printf("\nb[2][1] = %d", b[2][1]);
	printf("\nc[1][1][2] = %d", c[1][1][2]);// c[i][j][k] = c[n] n = i*2*3+j*3+k
	*/
	/*
	
	int a[5] ={}, i, s ;
	float average;
	s = 0;
		for (i = 0; i < 5; i++)
	{
		printf("score[%d] = ", i + 1);
		scanf_s("%d", &a[i]);
		s += a[i]; 
	}
	average = (float)s / 5;
	for (i = 0; i < 5; i++)
	{
		printf("score[%d] = %d\n", i+1, a[i]);
	}
	printf("total= %d\n", s);
	printf("Average= %.2f\n", average);
	}
	*/
	/*
	int *score;
	int  i, s, n,a;
	float average, std_dev;
	s = 0;
	a = 0;
	printf("No = ");
	scanf_s("%d", &n);//輸入人數
	score = (int *)malloc(n * sizeof(int));//動配記憶體***
	for (i = 0; i < n; i++)
	{
		printf("score[%d] = ", i + 1);
		scanf_s("%d", &score[i]);
		a += score[i] * score[i];
		s += score[i];
	}
	average = (float)s / n;
	std_dev = pow((float)a / n - (average*average),0.5);
	for (i = 0; i < n; i++)
	{
		printf("------------------\n");
		printf(" |score[%d] = %3d|\n", i + 1, score[i]);
	}
	printf("------------------\n");
	printf("Total= %d\n", s);
	printf("Average = %.2f\n", average);
	printf("Standard Deviation = %f\n", std_dev);
	*/
	/*
	//矩陣***
	int a[AY][AX] = {{5,2}
				    ,{8.4}
				    ,{9,7}};
	int	b[BY][BX] = {{3,5,9,2}
				    ,{9,7,6,7}};
	int	c[CY][CX];//c = axb
	memset(c, 0, 48);//初始化
	int x, y, z, s;
	for (y = 0; y < AY; y++)
	{
		for (x = 0; x < BX; x++)
		{
			s = 0;
			for (z = 0; z < BY; z++)
			{
				c[y][x] += a[y][z] * b[z][x];
			}
			//c[y][x] = s;
		}
	}
	for (y = 0; y < 3; y++)
	{
		for (x = 0; x < 4; x++)
		{
			printf("%4d ", c[y][x]);
		}
		printf("\n");
	}
	*/
}

