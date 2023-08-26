// Fibonacci.c -- 用递归计算斐波那契额数列
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
unsigned long Fibonacci(unsigned);
unsigned long _Fibonacci(unsigned);


int main(void)
{
	unsigned integer;

	printf("请输入计算Fibonacci数列的位数. \n");
	while ((scanf("%d", &integer)) == 1)
	{
		printf("第%d位Fibonacci数列的值为%lu\n", integer, Fibonacci(integer));
		printf("第%d位Fibonacci数列的值为%lu\n", integer, _Fibonacci(integer));
		printf("\n请再次输入\n");
	}
	printf("Bye!\n");

	return 0;
}
unsigned long Fibonacci(unsigned n)//递归
{
	if (n > 2)
		return Fibonacci(n - 1) + Fibonacci(n - 2);
	else
		return 1;
}
unsigned long _Fibonacci(unsigned n)//循环, 效率高
{
	unsigned long a = 1, b = 1, sum = 1;
	int i;

	for (i = 3; i <= n; i++)
	{
		switch (i % 2)
		{
		case 1:			//不是字符就不需要加引号
			a = sum;
			break;
		case 0:
			b = sum;
			break;
		default:
			break;
		}
		sum = a + b;
	}

	return sum;
}
//数组也可以实现