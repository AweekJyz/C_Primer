// book -- 一本书的图书目录
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	int index, filecount;
	FILE* pbooks;

	if ((pbooks = fopen("book.dat", "ab+")) == NULL)
	{
		fputs("Can't open book.dat file\n", stderr);
		exit(1);
	}

	rewind(pbooks);		//定位到文件开头
	while (count < MAXBKS && fread(&library[count], 
		sizeof(struct book), 1, pbooks) == 1)
	{
		if (count == 0)
			puts("Current contents of book.dat:");
		printf("%s by %s: $%.2f\n", library[count].title, 
			library[count].author, library[count].value);
		count++;
	}
	filecount = count;
	if (count == MAXBKS)
	{
		fputs("The book.dat file is full.", stderr);
		exit(2);
	}

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
			printf("%s by %s: $%.2f\n", library[index].title, 
				library[index].author, library[index].value);
		fwrite(&library[filecount], sizeof(struct book), 
			count - filecount, pbooks);//新增全部写入文件
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