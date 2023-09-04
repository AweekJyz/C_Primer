// manydice.c -- 多次掷骰子的模拟程序
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>	//为srand()提供函数原型
#include<time.h>	//为time()提供函数原型
#include"diceroll.h"//为roll_n_dice()提供函数原型, 为roll_count变量提供引用式声明

int main(void)
{
	int dice, roll;		//投掷的次数
	int sides;			//骰子面数
	int status;

	srand((unsigned int)time(0));	//随机种子
	printf("Enter the number of sides per die, 0 to stop.\n");
	while (scanf("%d", &sides) == 1 && sides > 0)
	{
		printf("How many dice?\n");
		if ((status = scanf("%d", &dice)) != 1)
		{
			if (status == EOF)
				break;
			else
			{
				printf("Your should have enter an integer. \n");
				printf("Let's begin again.\n");
				while (getchar() != '\n')
					continue;
				printf("How many sides? Enter 0 to stop. \n");
				continue;
			}
		}
		roll = roll_n_dice(dice, sides);
		printf("You have rolled a %d using %d %d-sided dice.\n",
			roll, dice, sides);
		printf("How many sides? Enter 0 to stop.\n");
	}
	printf("The rollem() function was called %d times.\n", roll_count);
	printf("GOOD FORTUNE TO YOU!\n");

	return 0;
}
