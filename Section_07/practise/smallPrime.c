// smallPrime.c -- 比输入数小的素数
#include "practise.h"

void small_prime(void)
{
	int nature, prime;//自然数和素数
	int i, j = 0;
	
	printf("请输入一个自然数. \n");
	while (1 == scanf("%d", &nature))
	{
		for (i = 1; i <= nature; i++)//只为了2改为i++
		{
			if (prime = is_prime(i))
			{
				printf("%d	", prime);
				j++;//计算换行
			}
			else
				continue;
			if (0 == j % 10)//每行打印10个
				printf("\n");
		}
		while ('\n' != getchar())
			continue;
		printf("\n请再输入一个自然数. \n");
	}

	return;
}
int is_prime(int n)
{
	int i, flag = 1;//0代表不是素数, 1表示是素数
	if (n <= 1)//0和1不是素数
		flag = 0;
	for (i = 2; i * i <= n; i++)
		if (0 == n % i)//有大于2的因子
		{
			flag = 0;//不是素数
			break;
		}
	if (1 == flag)
		return n;
	else
		return 0;
}