// book -- һ�����ͼ��Ŀ¼
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
char* s_gets(char* st, int n);
#define MAXTITL 41	//��������󳤶�+1
#define MAXAUTL 31	//������������󳤶�+1

struct book {
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};	//�ṹģ�����, vs���Զ����;

int main(void)
{
	struct book library;	//�����ṹ����
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