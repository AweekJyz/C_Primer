// tax1988.c -- 1988美国联邦税收方案
#include "practise.h"

void tax1988(void)
{
	char ch;
	int edge;//税率变更界限
	double total_tax, salary;

	printf("%s\n", STARTS);
	printf("请选择您缴纳的税金的种类. \n");
	printf("a) 单身		b) 户主\n");
	printf("c) 已婚, 共有	d) 已婚, 离异\n");5''
	printf("q) 退出\n");
	printf("%s\n", STARTS);

	while ((ch = getchar()) != 'q')
	{
		if (ch < 'a' || ch > 'd')
		{
			printf("选项不存在! 请重新输入. \n");
			while (getchar() != '\n')
				continue;
			continue;
		}
		switch (ch)
		{
		case 'a':
			edge = 17850;
			break;
		case 'b':
			edge = 23900;
			break;
		case 'c':
			edge = 29750;
			break;
		case 'd':
			edge = 14875;
			break;
		default:
			break;
		}
		printf("请输入您的应纳税收入: ");
		scanf("%lf", &salary);
		if (salary <= edge)
			total_tax = salary * ONE_TAX_RATE;
		else
			total_tax = edge * ONE_TAX_RATE +
			(salary - edge) * TWO_TAX_RATE;
		printf("缴费边界为$%d, 需要缴纳的税金为$%.2lf. \n\n",
			edge, total_tax);

		while (getchar() != '\n')
			continue;

		printf("%s\n", STARTS);
		printf("请选择您缴纳的税金的种类. \n");
		printf("a) 单身		b) 户主\n");
		printf("c) 已婚, 共有	d) 已婚, 离异\n");
		printf("q) 退出\n");
	}
	printf("已退出. Bye!\n");

	return;
}