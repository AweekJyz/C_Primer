// pnt_add.c -- 指针地址
#include<stdio.h>
#define SIZE 4
int main(void)
{
	short dates[SIZE];
	short* pti, ptj;//必须得每个变量都有星号才是指针. ptj是short类型的变量
	short index;
	double bills[SIZE];
	double* ptf, * ptl;//ptl是short类型的指针变量
	pti = dates;
	ptf = bills;
	printf("%23s %15s\n", "short", "double");
	for (index = 0; index < SIZE; index++)
		printf("pointer + %d: %10p %10p\n", index, pti + index, ptf + index);

	return 0;
}