// Fibonacci.c -- �õݹ����쳲�����������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
unsigned long Fibonacci(unsigned);
unsigned long _Fibonacci(unsigned);


int main(void)
{
	unsigned integer;

	printf("���������Fibonacci���е�λ��. \n");
	while ((scanf("%d", &integer)) == 1)
	{
		printf("��%dλFibonacci���е�ֵΪ%lu\n", integer, Fibonacci(integer));
		printf("��%dλFibonacci���е�ֵΪ%lu\n", integer, _Fibonacci(integer));
		printf("\n���ٴ�����\n");
	}
	printf("Bye!\n");

	return 0;
}
unsigned long Fibonacci(unsigned n)//�ݹ�
{
	if (n > 2)
		return Fibonacci(n - 1) + Fibonacci(n - 2);
	else
		return 1;
}
unsigned long _Fibonacci(unsigned n)//ѭ��, Ч�ʸ�
{
	unsigned long a = 1, b = 1, sum = 1;
	int i;

	for (i = 3; i <= n; i++)
	{
		switch (i % 2)
		{
		case 1:			//�����ַ��Ͳ���Ҫ������
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
//����Ҳ����ʵ��