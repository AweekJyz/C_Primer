// funds.c -- 结构参数
#include <stdio.h>
#define FUNDLEN 50
#define N 2

struct funds {
	char	bank[FUNDLEN];
	double	bankfund;
	char	save[FUNDLEN];
	double	savefund;
};
// sum1() -- 传递结构成员
double sum1(double, double);
/* sum2 -- 传递指向结构的指针 */
double sum2(const struct funds*);
// sum3 -- 传递结构本身
double sum3(struct funds moolah);//参数是一个结构
//传递结构数组
double sum4(const struct funds money[], int n);//money[]和*money等价

int main(void)
{
	struct funds jones[N] = {{
		"Garlic-Melon Bank",
		4032.27,
		"Lucky's Savings and Loan",
		8543.94
	}, 
	{
		"Honest Jack's Bank",
		3620.88,
		"Party Time Savings",
		3802.91
	}
};
	printf("Stan has a total of $%.2f.\n", sum1(jones[0].bankfund, jones[0].savefund));
	printf("Stan has a total of $%.2f.\n", sum2(&jones));
	printf("Stan has a total of $%.2f.\n", sum3(jones[0]));
	printf("The Joneses have a total of $%.2f.\n", sum4(jones, N));
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
double sum4(const struct funds* money, int n)
{
	double total;
	int i;

	for (i = 0, total = 0; i < n; i++)
		total += money[i].bankfund + money[i].savefund;

	return (total);
}