// append.c -- ���ļ����ӵ���һ���ļ�ĩβ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 4096
#define SLEN 81
void append(FILE* source, FILE* dest);
char* s_gets(char* st, int n);

int main(void)
{
	FILE* fa, * fs;		//faָ��Ŀ���ļ�, fsָ��Դ�ļ�
	int files = 0;		//���ӵ��ļ�����
	char file_app[SLEN];//Ŀ���ļ���
	char file_src[SLEN];//Դ�ļ���
	int ch;

	puts("Enter name of destination file:");
	s_gets(file_app, SLEN);
	if ((fa = fopen(file_app, "a+")) == NULL)		//��file_app
	{
		fprintf(stderr, "Can't open %s\n", file_app);
		exit(EXIT_FAILURE);
	}
	if (setvbuf(fa, NULL, _IOFBF, BUFSIZE)/* != 0*/)//����file_app�Ļ�����
	{
		fputs("Can't create output buffer\n", stderr);
		exit(EXIT_FAILURE);
	}
	puts("Enter name of first source file (empty line to quit):");
	while (s_gets(file_src, SLEN) && file_src[0] != '\0')
	{
		if (strcmp(file_app, file_src) == 0)
			fputs("Can't append file to itself\n", stderr);
		else if ((fs = fopen(file_src, "r")) == NULL)
			fprintf(stderr, "Can't open %s\n", file_src);
		else
		{
			if (setvbuf(fs, NULL, _IOFBF, BUFSIZE)/* != 0*/)
			{
				fputs("Can't create input buffer\n", stderr);
				continue;
			}
			append(fs, fa);
			if (ferror(fs))
				fprintf(stderr, "Error in reading file %s.\n", file_src);
			if (ferror(fa))
				fprintf(stderr, "Error in reading file %s.\n", file_app);
			fclose(fs);
			files++;
			printf("File %s appended.\n", file_src);
			puts("Next file (empty line to quit):");
		}
	}
	printf("Done appending. %d file appended.\n", files);
	rewind(fa);
	printf("%s content:\n", file_app);
	while ((ch = getc(fa)) != EOF)
		putc(ch, stdout);
	puts("Done displaying.");
	fclose(fa);

	return 0;
}
void append(FILE* source, FILE* dest)
{
	size_t bytes;
	static char temp[BUFSIZE];	//ֻ����һ��

	while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
		fwrite(temp, sizeof(char), bytes, dest);
}
char* s_gets(char* st, int n)
{
	char* ret_val;
	char* find;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st, '\n');	//���һ��з�
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}