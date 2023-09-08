// randbin.c -- �ö�����I/O�����������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define ARSIZE 1000

int main(void)
{
	double numbers[ARSIZE];
	double value;
	const char* file = "numbers.dat";
	int i;
	long pos;
	FILE* iofile;

	//����һ��double���͵�����
	for (i = 0; i < ARSIZE; i++)
		numbers[i] = 100.0 * i + 1.0 / (i + 1);
	//���Դ��ļ�
	if ((iofile = fopen(file, "wb")) == NULL)
	{
		fprintf(stderr, "Could not open %s for output.\n");
		exit(EXIT_FAILURE);
	}
	//�Զ����Ƹ�ʽ������д���ļ�
	fwrite(numbers, sizeof(double), ARSIZE, iofile);
	fclose(iofile);
	if ((iofile = fopen(file, "rb")) == NULL)
	{
		fprintf(stderr, "Could not open %s for random access.\n", file);
		exit(EXIT_FAILURE);
	}
	//���ļ��ж�ȡָ������
	printf("Enter an index in the range 0-%d.\n", ARSIZE - 1);
	while (scanf("%d", &i) == 1 && i >= 0 && i < ARSIZE)
	{
		pos = (long)i * sizeof(double);
		fseek(iofile, pos, SEEK_SET);
		fread(&value, sizeof(double), 1, iofile);
		printf("The value there is %f.\n", value);
		printf("Next index (out of range to quit):\n");
	}
	fclose(iofile);
	puts("Bye!");

	return 0;
}













//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define SIZE 80
//char* s_gets(char* st, int n);
//
//int main(void)
//{
//	FILE* fp;
//	FILE* fo;
//	char re[SIZE];//ʣ���ַ���
//	char ch;
//	char file_src[SIZE];
//	puts("Enter name of file:");
//	s_gets(file_src, SIZE);
//	if ((fp = fopen(file_src, "a+")) == NULL)
//		fprintf(stderr, "Can't open file %s.\n", file_src);
//	
//
//	while ((ch = getchar()) != ':')
//		putchar(ch);
//
//	ungetc(ch, stdin);
//	ungetc('*', stdin);
//	
//	ungetc('+', stdin);//�������+*:
//	s_gets((char*)fp, SIZE);
//	if ((fo = fopen("textfflush.txt", "r")) == NULL)
//	{
//		fprintf(stderr, "Can't open file %s.\n", "textfflush.txt");
//		exit(EXIT_FAILURE);
//	}
//	if (setvbuf(fo, NULL, _IOFBF, 30))
//	{
//		fputs("����������ʧ��.\n", stderr);
//		exit(3);
//	}
//	printf("%s", fo);
//	//fgets(stdout, SIZE, fo);
//	//fflush(NULL);
//	size_t bytes;
//	static char temp[20];
//	while ((bytes = fread(temp, sizeof(char), 2, fo)) > 0)
//		fwrite(temp, sizeof(char), bytes, stdout);
//	//puts("Enter name of file:");
//	//s_gets(file_src, SIZE);
//	//if ((fp = fopen(file_src, "r")) == NULL)
//	//	fprintf(stderr, "Can't open file %s.\n", file_src);
//	fclose(fp);
//	fclose(fo);
//	return 0;
//}
//char* s_gets(char* st, int n)
//{
//	char* ret_val;
//	char* find;
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		if (find = strchr(st, '\n'))
//			*find = '\0';
//		else
//			while (getchar() != '\n')
//				continue;
//	}
//
//	return ret_val;
//}