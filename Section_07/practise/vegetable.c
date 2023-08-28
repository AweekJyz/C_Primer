// vegetable.c -- �ʼ��߲�
#include "practise.h"

#define SUGARBEET_PRICE 1.15	//��˼۸�
#define CARROT_PRICE 1.09		//���ܲ��۸�
#define ARTICHOKE_PRICE 2.05	//�󼻼۸�
#define POUND_0_5 6.5			//0~5pound���˷ѺͰ�װ��
#define POUND_5_20 14			//5~20pound���˷ѺͰ�װ��
#define DISCOUNT 0.05			//��100��95��

void vegetable(void)
{
	double sugarbeet_pound = 0, 
		carrot_pound = 0, 
		artichoke_pound = 0;
	double add;
	double total_price = 0, 
		total_pound = 0, 
		vegetable_price = 0,
		vegetable_price_after;
	char ch;


	printf("%s\n", STARTS);
	printf("	�����ۼ�\n");
	printf("%s\n", STARTS);
	printf("��		2.05��Ԫ/��\n");
	printf("���		1.15��Ԫ/��\n");
	printf("����		1.09��Ԫ/��\n");
	printf("%s\n\n", STARTS);
	printf("%s\n", STARTS);
	printf("��ѡ����Ҫ�������߲�. \n");
	printf("a) ��		b) ���\n");
	printf("c) ���ܲ�	q) �˳�����\n");
	printf("%s\n", STARTS);

	while((ch = getchar()) != 'q')
	{
		switch (ch)
		{
		case 'a':
			printf("����������Ҫ���󼻵İ���:");
			scanf("%lf", &add);
			artichoke_pound += add;
			break;
		case 'b':
			printf("����������Ҫ����˵İ���:");
			scanf("%lf", &add);
			sugarbeet_pound += add;
			break;
		case 'c':
			printf("����������Ҫ�ĺ��ܲ��İ���:");
			scanf("%lf", &add);
			carrot_pound += add;
			break;
		default:
			break;
		}
		while (getchar() != '\n')
			continue;

		vegetable_price = sugarbeet_pound * SUGARBEET_PRICE +
			carrot_pound * CARROT_PRICE +
			artichoke_pound * ARTICHOKE_PRICE;
		total_pound = sugarbeet_pound + carrot_pound +
			artichoke_pound;

		if (vegetable_price >= 100)//�ж��Ƿ����
			vegetable_price_after = vegetable_price *
			(1 - DISCOUNT);
		else
			vegetable_price_after = vegetable_price;

		if (total_pound <= 5)//�ж��˷�����
			total_price = vegetable_price_after + POUND_0_5;
		else if (total_pound <= 20)
			total_price = vegetable_price_after + POUND_5_20;
		else
			total_price = vegetable_price_after + POUND_5_20 +
			(total_pound - 20) * 0.5;

		printf("������		%.2lf�� \n�߲�		$%.2lf \n",
			total_pound, vegetable_price);
		printf("����(���ۺ�)	$%.2lf \n�ۿ�		%.0lf�� \n",
			vegetable_price_after,
			(vegetable_price >= 100 ? (1 - DISCOUNT) * 100 : 100));
		printf("�˷ѺͰ�װ��	$%.2lf \n�ܼ�		$%.2lf \n",
			total_price - vegetable_price_after,
			total_price);
		printf("%s\n", STARTS);
		printf("�����ѡ����Ҫ�������߲�. \n");
		printf("a) ��		b) ���\n");
		printf("c) ���ܲ�	q) �˳�����\n");
		printf("%s\n", STARTS);
	}
	printf("���˳�. Bye!");

	return;
}