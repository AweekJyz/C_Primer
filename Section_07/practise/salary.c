// salary.c -- ����
#include "practise.h"

void salary(void)
{
	int hours = TIME;
	double tax, total;

	printf("������һ�ܵĹ���Сʱ��.\n");
	while ((scanf("%d", &hours)) == 1)
	{
		if (hours < 0 || hours > 168)//�ж������Ƿ����
		{
			printf("����, ���ֳ�����Χ. ����������(0~168). \n");
			continue;
		}
		else if(hours > TIME && hours <= 168)
			printf("�������Ѿ�����%dСʱ����, ��ע����Ϣ :)\n", TIME);

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
		printf("�ܹ���Ϊ$%.2lf, ˰��Ϊ$%.2lf, ������Ϊ$%.2lf. \n",
			total, tax, total - tax);
		while (getchar() != '\n')
			continue;
		printf("���ٴ�����һ�ܵĹ���Сʱ��.\n");
	}
	printf("Bye!\n");

	return;
}

// salaryChoice.c -- �������ʿ�ѡ

void salary_choice(void)
{
	int hours = TIME;
	double tax, total;
	char choice = '5';	//ѡ��
	double basic;	//��������

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
			printf("�������, ����������(1~5).\n");
			while (getchar() != '\n')
				continue;
			continue;
		}
		while (getchar() != '\n')
			continue;
		printf("������һ�ܵĹ���Сʱ��(����'q'����ѡ���������).\n");
		while ((scanf("%d", &hours)) == 1)
		{
			if (hours < 0 || hours > 168)//�ж������Ƿ����
			{
				printf("����, ���ֳ�����Χ. ����������(0~168). \n");
				continue;
			}
			else if (hours > TIME && hours <= 168)
				printf("�������Ѿ�����40Сʱ����, ��ע����Ϣ :)\n");

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
			printf("��������Ϊ$%.2lf/hr, �ܹ���Ϊ$%.2lf, ˰��Ϊ$%.2lf, ������Ϊ$%.2lf. \n\n",
					basic, total, tax, total - tax);
			/*while (getchar() != '\n')
				continue;*/	//��scanf���벻̫ע�⻺��
			printf("���ٴ�����һ�ܵĹ���Сʱ��(����'q'����ѡ���������).\n");
		}
		while (getchar() != '\n')
			continue;//�������q�����뻺��
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