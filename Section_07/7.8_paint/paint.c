// paint.c --使用条件运算符
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define COVERAGE 350	//每罐油漆可以刷的面积
int main(void)
{
	int sq_feet, cans;

	printf("Enter number of square feet to be painted: \n");
	while (scanf("%d", &sq_feet) == 1)
	{
		cans = sq_feet / COVERAGE;
		cans += (sq_feet % COVERAGE == 0) ? 0 : 1;
		printf("You need %d %s of paint. \n", cans, cans == 1 ? "can" : "cans");
		printf("Enter next value  (q to quit): \n");
	}

	return 0;
}