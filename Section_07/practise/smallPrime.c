// smallPrime.c -- ��������С������
#include "practise.h"

void small_prime(void)
{
	int nature, prime;//��Ȼ��������
	int i, j = 0;
	
	printf("������һ����Ȼ��. \n");
	while (1 == scanf("%d", &nature))
	{
		for (i = 1; i <= nature; i++)//ֻΪ��2��Ϊi++
		{
			if (prime = is_prime(i))
			{
				printf("%d	", prime);
				j++;//���㻻��
			}
			else
				continue;
			if (0 == j % 10)//ÿ�д�ӡ10��
				printf("\n");
		}
		while ('\n' != getchar())
			continue;
		printf("\n��������һ����Ȼ��. \n");
	}

	return;
}
int is_prime(int n)
{
	int i, flag = 1;//0����������, 1��ʾ������
	if (n <= 1)//0��1��������
		flag = 0;
	for (i = 2; i * i <= n; i++)
		if (0 == n % i)//�д���2������
		{
			flag = 0;//��������
			break;
		}
	if (1 == flag)
		return n;
	else
		return 0;
}