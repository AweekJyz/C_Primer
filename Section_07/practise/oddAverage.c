// oddAverage.c -- 奇数偶数平均值
#include "practise.h"

void odd_average(void)
{
	int integer = 0;
	int num_odd = 0, num_even = 0;//奇数偶数个数
	int sum_odd = 0, sum_even = 0;//奇数偶数和
	double ave_odd, ave_even;//平均值

	printf("请输入一串数字, 两两用空格隔开(输入0结束).\n");
	scanf("%d", &integer);
	while (integer != 0)
	{
		switch (integer % 2)
		{
		case 0:
			sum_even += integer;
			num_even++;
			break;
		case 1:
			sum_odd += integer;
			num_odd++;
			break;
		default:
			break;
		}
		scanf("%d", &integer);
	}
	if (num_even == 0)
		printf("偶数个数为0, 平均值不存在.\n");
	else
	{
		ave_even = (double)sum_even / num_even;
		printf("偶数个数为%d, 平均值为%lf.\n", num_even,
			ave_even);
	}
	if (num_odd == 0)
		printf("奇数个数为0, 平均值不存在.\n");
	else
	{
		ave_odd = (double)sum_odd / num_odd;
		printf("奇数个数为%d, 平均值为%lf.\n", num_odd,
			ave_odd);
	}
	while (getchar() != '\n')
		continue;//防止0后面再输入数字影响后面. 
	printf("Bye!\n");

	return;
}