#define _CRT_SECURE_NO_WARNINGS//在newc++file.cpp中修改默认
/* charcode.c-显示字符的代码编号 */
#include<stdio.h>
int main(void)
{
	char ch;
	
	printf("Please enter a character. \n");
	scanf("%c", &ch);
	printf("The code for %c is %d. \n", ch, ch);

	return 0;
}