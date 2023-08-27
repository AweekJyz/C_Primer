// tax1988.c -- 1988��������˰�շ���
#include "practise.h"

void tax1988(void)
{
	char ch;
	int edge;//˰�ʱ������
	double total_tax, salary;

	printf("%s\n", STARTS);
	printf("��ѡ�������ɵ�˰�������. \n");
	printf("a) ����		b) ����\n");
	printf("c) �ѻ�, ����	d) �ѻ�, ����\n");5''
	printf("q) �˳�\n");
	printf("%s\n", STARTS);

	while ((ch = getchar()) != 'q')
	{
		if (ch < 'a' || ch > 'd')
		{
			printf("ѡ�����! ����������. \n");
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
		printf("����������Ӧ��˰����: ");
		scanf("%lf", &salary);
		if (salary <= edge)
			total_tax = salary * ONE_TAX_RATE;
		else
			total_tax = edge * ONE_TAX_RATE +
			(salary - edge) * TWO_TAX_RATE;
		printf("�ɷѱ߽�Ϊ$%d, ��Ҫ���ɵ�˰��Ϊ$%.2lf. \n\n",
			edge, total_tax);

		while (getchar() != '\n')
			continue;

		printf("%s\n", STARTS);
		printf("��ѡ�������ɵ�˰�������. \n");
		printf("a) ����		b) ����\n");
		printf("c) �ѻ�, ����	d) �ѻ�, ����\n");
		printf("q) �˳�\n");
	}
	printf("���˳�. Bye!\n");

	return;
}