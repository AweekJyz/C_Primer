// hotel.c -- 酒店管理函数
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "hotel.h"

int menu(void)
{
	int code, status;

	printf("\n%s%s\n", STARS, STARS);
	printf("Enter the number of desired hotel:\n");
	printf("1) Fairfield Arms         2) Hotel Olympic\n");
	printf("3) Cherworthy Plaza       4) The Stockton\n");
	printf("5) quit\n");
	printf("%s%s\n", STARS, STARS);
	while ((status = scanf("%d", &code)) != 1 || 
			(code < 1 || code > 5))//不要随便加;号
//只有在scanf()成功读入一个整数值后，才会检查code的值
	{
		if (status != 1)
			scanf("%*s"); //处理非整数输入, 跳过字符串输入
		printf("Enter an integer, such as 2.\n");
	}

	return code;
}
int getnights(void)
{
	int nights;

	printf("How many nights are needed? ");
	while (scanf("%d", &nights) != 1)
	{
		scanf("%*s"); //处理非整数输入, 跳过字符串输入
		printf("Enter an integer, such as 3.\n");
	}

	return nights;
}
void showprice(double rate, int nights)
{
	int n;
	double total = 0.0;
	double factor = 1.0;

	for (n = 1; n <= nights; n++, factor *= DISCOUNT)
		total += rate * factor;
	printf("The total cost will be $%0.2f.\n", total);
}