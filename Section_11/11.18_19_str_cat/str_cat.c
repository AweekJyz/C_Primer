/* str_cat.c -- ƴ�������ַ��� */
#define _CRT_SECURE_NO_WARNINGS//strcat
#include <stdio.h>
#include <string.h> /* strcat()������ԭ���ڸ�ͷ�ļ��� */
#define SIZE 30
#define BUGSIZE 13
char* s_gets(char* st, int n);
int main(void)
{
	char flower[SIZE];
	char addon[] = "s smell like old shoes.";
	char bug[BUGSIZE];
	int available;

	puts("What is your favorite flower?");
	s_gets(flower, SIZE);
	if ((strlen(addon) + strlen(flower) + 1) <= SIZE)
		strcat(flower, addon);
	puts(flower);
	//if (s_gets(flower, SIZE))//���ز��ǿ�ָ��
	//{
	//	strcat(flower, addon);
	//	puts(flower);
	//	puts(addon);
	//}
	//else
	//	puts("End of file encountered!");
	//puts("bye");
	puts("What is your favorite bug?");
	s_gets(bug, BUGSIZE);
	available = BUGSIZE - strlen(bug) - 1;
	strncat(bug, addon, available);
	puts(bug);

	return 0;
}
char* s_gets(char* st, int n)
{
	char* ret_val;
	int i = 0;
	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		while (st[i] != '\n' && st[i] != '\0')
			i++;
		if (st[i] == '\n')
			st[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}