#define _CRT_SECURE_NO_WARNINGS//在newc++file.cpp中修改默认
/* pkatinum.c -- your weight in platinum*/
#include <stdio.h>
extern int print();//没有的话 警告c4013
int main(void)
{
	float weight; //你的体重
	float value;  //相等重量的白金价值

	printf("Are you worth your weight in platinum?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds: ");

	//获取用户的输入
	scanf("%f", &weight);
	/*假设抱紧的价格是每盎司$1700*/
	value = 1700.0 * weight * 14.5833;
	printf("Your weight in platinum is worth $%.2f.\n", value);
	printf("You are easily worth that! If platinum prices drop, ");
	printf("eat more to maintain your value.\n");

	print();
	//getchar();

	return 0;
}