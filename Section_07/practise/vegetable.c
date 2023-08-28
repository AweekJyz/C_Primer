// vegetable.c -- 邮寄蔬菜
#include "practise.h"

#define SUGARBEET_PRICE 1.15	//甜菜价格
#define CARROT_PRICE 1.09		//胡萝卜价格
#define ARTICHOKE_PRICE 2.05	//洋蓟价格
#define POUND_0_5 6.5			//0~5pound的运费和包装费
#define POUND_5_20 14			//5~20pound的运费和包装费
#define DISCOUNT 0.05			//满100打95折

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
	printf("	今日售价\n");
	printf("%s\n", STARTS);
	printf("洋蓟		2.05美元/磅\n");
	printf("甜菜		1.15美元/磅\n");
	printf("胡萝		1.09美元/磅\n");
	printf("%s\n\n", STARTS);
	printf("%s\n", STARTS);
	printf("请选择您要订购的蔬菜. \n");
	printf("a) 洋蓟		b) 甜菜\n");
	printf("c) 胡萝卜	q) 退出订购\n");
	printf("%s\n", STARTS);

	while((ch = getchar()) != 'q')
	{
		switch (ch)
		{
		case 'a':
			printf("请输入您需要的洋蓟的磅数:");
			scanf("%lf", &add);
			artichoke_pound += add;
			break;
		case 'b':
			printf("请输入您需要的甜菜的磅数:");
			scanf("%lf", &add);
			sugarbeet_pound += add;
			break;
		case 'c':
			printf("请输入您需要的胡萝卜的磅数:");
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

		if (vegetable_price >= 100)//判断是否打折
			vegetable_price_after = vegetable_price *
			(1 - DISCOUNT);
		else
			vegetable_price_after = vegetable_price;

		if (total_pound <= 5)//判断运费区间
			total_price = vegetable_price_after + POUND_0_5;
		else if (total_pound <= 20)
			total_price = vegetable_price_after + POUND_5_20;
		else
			total_price = vegetable_price_after + POUND_5_20 +
			(total_pound - 20) * 0.5;

		printf("总重量		%.2lf磅 \n蔬菜		$%.2lf \n",
			total_pound, vegetable_price);
		printf("订单(打折后)	$%.2lf \n折扣		%.0lf折 \n",
			vegetable_price_after,
			(vegetable_price >= 100 ? (1 - DISCOUNT) * 100 : 100));
		printf("运费和包装费	$%.2lf \n总价		$%.2lf \n",
			total_price - vegetable_price_after,
			total_price);
		printf("%s\n", STARTS);
		printf("请继续选择您要订购的蔬菜. \n");
		printf("a) 洋蓟		b) 甜菜\n");
		printf("c) 胡萝卜	q) 退出订购\n");
		printf("%s\n", STARTS);
	}
	printf("已退出. Bye!");

	return;
}