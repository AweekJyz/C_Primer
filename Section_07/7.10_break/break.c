// break.c -- 使用break退出循环
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	float length, width;

	printf("Enter the length of the rectangle: \n");
	while (scanf("%f", &length) == 1)
	{
		printf("Length = %0.2f:\n", length);
		printf("Enter its width:\n");
		if (scanf("%f", &width) != 1)//不对称感觉怪怪的
			break;//用break可以方便显示用户输入的值。什么意思
		printf("Width = %0.2f:\n", width);
		printf("Area = %0.2f:\n", length * width);
		printf("Enter the length of the rectangle:\n");
	}
	printf("Done.\n");

	printf("Enter the length and the width of the rectangle: \n");
	while (scanf("%f%f", &length, width) == 2)
	{
		printf("Length = %0.2f:\n", length);
		printf("Width = %0.2f:\n", width);
		printf("Area = %0.2f:\n", length * width);
		printf("Enter the length of the rectangle:\n");
	}
	printf("Done.\n");

	return 0;
}