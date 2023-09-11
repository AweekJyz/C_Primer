// book -- 一本书的图书目录
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
char* s_gets(char* st, int n);
#define MAXTITL 41	//书名的最大长度+1
#define MAXAUTL 31	//作者姓名的最大长度+1
#define MAXBKS 100	//书籍的最大数量

struct book {
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};	//结构模板结束, vs会自动添加;

int main(void)
{
	struct book library[MAXBKS];	//声明结构变量
	int count = 0;
	int index;

	printf("Please enter the book title.\n");
	printf("Press [enter] at the start of a line to stop.\n");
	while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL
		&& library[count].title[0] != '\0')
	{
		printf("Now enter the author.\n");
		s_gets(library[count].author, MAXAUTL);
		printf("Now enter the value.\n");
		scanf("%f", &library[count++].value);
		while (getchar() != '\n')
			continue;
		if (count < MAXBKS)
			printf("Enter the next title.\n");
	}
	if (count > 0)
	{
		printf("Here is the list of your books:\n");
		for (index = 0; index < count; index++)
			printf("%s by %s: $%.2f\n", library[index].title, library[index].author, library[index].value);
	}
	else
		printf("No books? Too bad.\n");

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