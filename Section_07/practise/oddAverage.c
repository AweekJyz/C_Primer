// oddAverage.c -- ����ż��ƽ��ֵ
#include "practise.h"

void odd_average(void)
{
	int integer = 0;
	int num_odd = 0, num_even = 0;//����ż������
	int sum_odd = 0, sum_even = 0;//����ż����
	double ave_odd, ave_even;//ƽ��ֵ

	printf("������һ������, �����ÿո����(����0����).\n");
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
		printf("ż������Ϊ0, ƽ��ֵ������.\n");
	else
	{
		ave_even = (double)sum_even / num_even;
		printf("ż������Ϊ%d, ƽ��ֵΪ%lf.\n", num_even,
			ave_even);
	}
	if (num_odd == 0)
		printf("��������Ϊ0, ƽ��ֵ������.\n");
	else
	{
		ave_odd = (double)sum_odd / num_odd;
		printf("��������Ϊ%d, ƽ��ֵΪ%lf.\n", num_odd,
			ave_odd);
	}
	while (getchar() != '\n')
		continue;//��ֹ0��������������Ӱ�����. 
	printf("Bye!\n");

	return;
}