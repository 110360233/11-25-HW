#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int main(void)
{
	int a[SIZE] = {39,37,33,36,30,31,32,34,38,35};
	int i, j, re, b,r=0,s=0;
	for (i = 0; i < SIZE-1; i++)
	{
		for (j = 0; j < SIZE-i-1; j++)
		{
			if (a[j] > a[j + 1])
			{
				re = a[j];
				a[j] = a[j + 1];
				a[j + 1] = re;
				r += 1;
			}
		}
		printf("%2d\n", i);
		if (s == r)
		{
			s = r;
			break;
		}
		s = r;
	}
	printf("The bubble sort ->");
	for (b = 0; b <= 9; b++)
	{
		printf("%4d", a[b]);
	}
}