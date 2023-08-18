// do_while.c -- 出口条件循环
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	const int secret_code = 13;
	int code_entered;

	do
	{
		printf("To enter the triskaidekaphobia therapy club,\n");//为什么针对13
		printf("please enter the secret code number: ");
		scanf("%d", &code_entered);
	} while (code_entered != secret_code);
	printf("Congratulations! You are cured!\n\n");

	//while也可以写出等价的程序, 但是会更繁琐一点
	printf("To enter the triskaidekaphobia therapy club,\n");
	printf("please enter the secret code number: ");
	scanf("%d", &code_entered);
	while (code_entered != secret_code)
	{
		printf("To enter the triskaidekaphobia therapy club,\n");
		printf("please enter the secret code number: ");
		scanf("%d", &code_entered);
	}
	printf("Congratulations! You are cured!\n\n");
	//do while等价于把循环体单独拿出来放在开头单独执行一遍, 使得程序至少执行一次循环体中的代码. 
	//相当于把循环体的内容复制一份到for的第一个表达式中?//可行 
	for (printf("To enter the triskaidekaphobia therapy club,\n"),
			printf("please enter the secret code number: "),
			scanf("%d", &code_entered); code_entered != secret_code;)
	{
		printf("To enter the triskaidekaphobia therapy club,\n");
		printf("please enter the secret code number: ");
		scanf("%d", &code_entered);
	}
	printf("Congratulations! You are cured!\n\n");

	return 0;
}