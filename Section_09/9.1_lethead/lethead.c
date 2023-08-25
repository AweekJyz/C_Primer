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

	show_n_char('*', WIDTH); /* �÷��ų�����Ϊ���� */
	putchar('\n');
	
	show_n_char(SPACE, (WIDTH + 1 - strlen(NAME)) / 2); /* �÷��ų�����Ϊ���� */
	printf("%s\n", NAME);
	
	spaces = (WIDTH - strlen(ADDRESS)) / 2; /* ����Ҫ�������ٸ��ո�*/
	show_n_char(SPACE, spaces); /* ��һ��������Ϊ����*/
	printf("%s\n", ADDRESS);
	
	show_n_char(SPACE, (WIDTH - strlen(PLACE)) / 2);
	printf("%s\n", PLACE); /* ��һ������ʽ��Ϊ���� */
	
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