// diceroll.c -- ������ģ�����
#include "diceroll.h"
#include <stdio.h>
#include <stdlib.h>	//�ṩrand()����ԭ��

int roll_count = 0;//�ⲿ����

static int rollem(int sides)//�ļ�˽��, ֻ�б��ļ��ĺ������Ե���
{
	int roll;

	roll = rand() % sides + 1;
	++roll_count;	//���㺯�����ô���
	return roll;
}
int roll_n_dice(int dice, int sides)
{
	int d;
	int total = 0;
	if (sides < 2)
	{
		printf("Need at least 2 sides.\n");
		return -2;
	}
	if (dice < 1)
	{
		printf("Need at least 1 die. \n");
		return -1;
	}
	for (d = 0; d < dice; d++)
		total += rollem(sides);//�����ļ�˽�к���

	return total;
}