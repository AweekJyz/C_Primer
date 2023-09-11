// book -- 一本书的图书目录
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
char* s_gets(char* st, int n);
#define MAXTITL 41	//书名的最大长度+1
#define MAXAUTL 31	//作者姓名的最大长度+1

struct book {
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};	//结构模板结束, vs会自动添加;

int main(void)
{
	struct book library;	//声明结构变量
	printf("Please enter the book title.\n");
	s_gets(library.title, MAXTITL);
	printf("Now enter the author.\n");
	s_gets(library.author, MAXAUTL);
	printf("Now enter the value.\n");
	scanf("%f", &library.value);
	printf("%s: \"%s\" ($%.2f) \n", library.author, library.title, library.value);
	printf("%s by %s: $%.2f\n", library.title, library.author, library.value);
	printf("Done!\n");

	return 0;
}

char* s_gets(char* st, int n)
{
	char* ret_val, * find;

	if (ret_val = fgets(st, n, stdin))
		if (find = strchr(st, '\n'))
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;

	return ret_val;
}