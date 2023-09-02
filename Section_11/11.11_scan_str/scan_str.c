// scan_str.c --使用scanf()
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void puts2(const char string[]);
void puts1(const char* string);

int main(void)
{
	char name1[11], name2[11];
	int count;

	while (1)
	{
		printf("Please enter 2 names. \n");
		count = scanf("%5s %10s", name1, name2);
		if ('>' == name1[0])
			//不能单纯拿一个字符串常量和字符串数组名进行==对比, 字符串数组名只是一个地址
			break;
		printf("I read the %d names %s and %s. \n", count, name1, name2);
	}
	int ch = puts3("I read the %d names %s and %s.");
	puts1("I read the %d names %s and %s.");
	puts2("I read the %d names  and %s.");
	puts("");
	printf("%d", ch/*puts3("I read the %d names %s and %s.")*/);
	//输出函数出现一次就会输出一次,不管是在while里面还是printf,scanf里面.尽管有时候只想要他的返回值.如何让解决?

	return 0;
}