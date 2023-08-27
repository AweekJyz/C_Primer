// replace.c -- 替换符号
#include "practise.h"

void replace(void)
{
	char ch;
	int i = 0;//替换的次数

	printf("请输入一段字符, 并用'#'结尾. \n");
	while ((ch = getchar()) != '#')
	{
		if (ch == '.')
		{
			ch = '!';
			putchar(ch);
			i++;
		}
		else if (ch == '!')
		{
			printf("!!");
			i++;
		}
		else if (ch == '\n')
		{
			printf("\n请继续输入, 并用'#'结尾.\n");
			continue;
		}
		else
			putchar(ch);
	}
	while (getchar() != '\n')
		continue;
	printf("\n一共替换了%d次. \n", i);

	return;
}
void replace_switch(void)
{
	char ch;
	int i = 0;//替换的次数

	printf("请输入一段字符, 并用'#'结尾. \n");
	while ((ch = getchar()) != '#')
	{
		switch(ch)
		//用if不用在意各个条件的顺序, switch需要注意
		{
		case '\n':
			printf("\n请继续输入, 并用'#'结尾.\n");
			continue;
		case '!':
			printf("!!");
			i++;
			break;
		case '.':
			ch = '!';
			i++;
		//故意省略break, 与下面default共用putchar. 
		default:
			putchar(ch);
			break;
		}
	}
	while (getchar() != '\n')
		continue;
	printf("\n一共替换了%d次. \n", i);

	return;
}