// diceroll.c -- 掷骰子模拟程序
#include "diceroll.h"
#include <stdio.h>
#include <stdlib.h>	//提供rand()函数原型

int roll_count = 0;//外部链接

static int rollem(int sides)//文件私有, 只有本文件的函数可以调用
{
	int roll;

	roll = rand() % sides + 1;
	++roll_count;	//计算函数调用次数
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
		total += rollem(sides);//调用文件私有函数

	return total;
}