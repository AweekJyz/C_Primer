// funds.c -- �ṹ����
#include <stdio.h>
#define FUNDLEN 50

struct funds {
	char	bank[FUNDLEN];
	double	bankfund;
	char	save[FUNDLEN];
	double	savefund;
};
// sum1() -- ���ݽṹ��Ա
double sum1(double, double);
/* sum2 -- ����ָ��ṹ��ָ�� */
double sum2(const struct funds*);
// sum3 -- ���ݽṹ����
double sum3(struct funds moolah);//������һ���ṹ

int main(void)
{
	struct funds stan = {
		"Garlic-Melon Bank",
		4032.27,
		"Lucky's Savings and Loan",
		8543.94
	};
	printf("Stan has a total of $%.2f.\n", sum1(stan.bankfund, stan.savefund));
	printf("Stan has a total of $%.2f.\n", sum2(&stan));
	printf("Stan has a total of $%.2f.\n", sum3(stan));

	return 0;
}
double sum1(double x, double y)
{
	return (x + y);
}
double sum2(const struct funds* money)
{
	return(money->bankfund + money->savefund);
}
double sum3(struct funds moolah)
{
	return (moolah.bankfund + moolah.savefund);
}