// salary.c -- 工资
#include "practise.h"

void salary(void)
{
	int hours = TIME;
	double tax, total;

	printf("请输入一周的工作小时数.\n");
	while ((scanf("%d", &hours)) == 1)
	{
		if (hours < 0 || hours > 168)//判断数字是否合理
		{
			printf("错误, 数字超出范围. 请重新输入(0~168). \n");
			continue;
		}
		else if(hours > TIME && hours <= 168)
			printf("您本周已经工作%d小时以上, 请注意休息 :)\n", TIME);

		if (hours <= TIME)
			total = BASIC * hours;
		else
			total = SALARY_40 + 
				(hours - TIME) * OVERTIME_RATE * BASIC;

		if (total <= 300)
			tax = total * TAX_0_300;
		else if (total <= 450)
			tax = TAX_300 + (total - 300) * TAX_300_450;
		else
			tax = TAX_450 + (total - 450) * TAX_450_;
		printf("总工资为$%.2lf, 税金为$%.2lf, 净收入为$%.2lf. \n",
			total, tax, total - tax);
		while (getchar() != '\n')
			continue;
		printf("请再次输入一周的工作小时数.\n");
	}
	printf("Bye!\n");

	return;
}

// salaryChoice.c -- 基础工资可选

void salary_choice(void)
{
	int hours = TIME;
	double tax, total;
	char choice = '5';	//选项
	double basic;	//基本工资

	printf("%s%s\n", STARTS, STARTS);
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("1) $8.75/hr            2) $9.33/hr\n");
	printf("3) $10.00/hr           4) $11.20/hr\n");
	printf("5) quit\n");
	printf("%s%s\n", STARTS, STARTS);

	while ((choice = getchar()) != '5')
	{
		switch (choice)
		{
		case '1':
			basic = 8.75;
			break;
		case '2':
			basic = 9.33;
			break;
		case '3':
			basic = 10.00;
			break;
		case '4':
			basic = 11.20;
			break;
		/*case '\n':
			continue;
		case 'q':
			continue;*/
		default:
			printf("输入错误, 请重新输入(1~5).\n");
			while (getchar() != '\n')
				continue;
			continue;
		}
		while (getchar() != '\n')
			continue;
		printf("请输入一周的工作小时数(输入'q'重新选择基本工资).\n");
		while ((scanf("%d", &hours)) == 1)
		{
			if (hours < 0 || hours > 168)//判断数字是否合理
			{
				printf("错误, 数字超出范围. 请重新输入(0~168). \n");
				continue;
			}
			else if (hours > TIME && hours <= 168)
				printf("您本周已经工作40小时以上, 请注意休息 :)\n");

			if (hours <= TIME)
				total = basic * hours;
			else
				total = TIME * basic +
				(hours - TIME) * OVERTIME_RATE * basic;

			if (total <= 300)
				tax = total * TAX_0_300;
			else if (total <= 450)
				tax = TAX_300 + (total - 300) * TAX_300_450;
			else
				tax = TAX_450 + (total - 450) * TAX_450_;
			printf("基本工资为$%.2lf/hr, 总工资为$%.2lf, 税金为$%.2lf, 净收入为$%.2lf. \n\n",
					basic, total, tax, total - tax);
			/*while (getchar() != '\n')
				continue;*/	//用scanf输入不太注意缓存
			printf("请再次输入一周的工作小时数(输入'q'重新选择基本工资).\n");
		}
		while (getchar() != '\n')
			continue;//清空输入q的输入缓存
		printf("%s%s\n", STARTS, STARTS);
		printf("Enter the number corresponding to the desired pay rate or action:\n");
		printf("1) $8.75/hr            2) $9.33/hr\n");
		printf("3) $10.00/hr           4) $11.20/hr\n");
		printf("5) quit\n");
		printf("%s%s\n", STARTS, STARTS);
	}
	printf("Bye!\n");

	return;
}