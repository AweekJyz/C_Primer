/* shoes2.c -- ��������ͬЬ���Ӧ�Ľų� */
#include <stdio.h>
#define ADJUST 7.31
int main(void)
{
	const double SCALE = 0.333;
	double shoe, foot;

	printf("Shoe size (men's foot length\n");
	shoe = 3.0;
	while (shoe < 18.5)
	{
		foot = SCALE * shoe + ADJUST;
		printf("%10.1f %10.2f inches\n", shoe, foot);
		shoe++;
	}

	return 0;//��������߶Դ������о���Ӧ��֪���ó��򲻷���ʵ������������мٶ���һ��ͳһ��Ь��ϵͳ����hhhhhhha
}