// lethead.c 
#include<stdio.h>
#include<string.h>
#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
#define SPACE ' '

void show_n_char(char ch, int num);

int main(void)
{
	int spaces;

	show_n_char('*', WIDTH); /* 用符号常量作为参数 */
	putchar('\n');
	
	show_n_char(SPACE, (WIDTH + 1 - strlen(NAME)) / 2); /* 用符号常量作为参数 */
	printf("%s\n", NAME);
	
	spaces = (WIDTH - strlen(ADDRESS)) / 2; /* 计算要跳过多少个空格*/
	show_n_char(SPACE, spaces); /* 用一个变量作为参数*/
	printf("%s\n", ADDRESS);
	
	show_n_char(SPACE, (WIDTH - strlen(PLACE)) / 2);
	printf("%s\n", PLACE); /* 用一个表达式作为参数 */
	
	show_n_char('*', WIDTH);
	putchar('\n');

	return 0;
}
void show_n_char(char ch, int num)
{
	int count;

	for (count = 1; count <= num; count++)
		putchar(ch);
}