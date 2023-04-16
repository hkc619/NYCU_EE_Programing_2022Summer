#include <iostream>

int main()
{
	int n = 1000000;
	double sum  ;
	sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += pow((double)i, 0.5) / pow((double)n, 1.5);
	}
	printf("%f", sum);
}


