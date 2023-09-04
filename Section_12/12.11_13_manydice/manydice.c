// manydice.c -- ��������ӵ�ģ�����
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>	//Ϊsrand()�ṩ����ԭ��
#include<time.h>	//Ϊtime()�ṩ����ԭ��
#include"diceroll.h"//Ϊroll_n_dice()�ṩ����ԭ��, Ϊroll_count�����ṩ����ʽ����

int main(void)
{
	int dice, roll;		//Ͷ���Ĵ���
	int sides;			//��������
	int status;

	srand((unsigned int)time(0));	//�������
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
