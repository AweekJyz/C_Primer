// getsputs.c -- ʹ�� gets()��puts()
#include<stdio.h>
#define STLEN 10
int main(void)
{
	char words[STLEN];

	puts("Enter a string, please. ");
	gets(words);
	printf("Your string twice:\n");
	printf("%s\n", words);
	puts(words);
	puts("Done.\n");
	/* fgets1.c -- ʹ�� fgets() �� fputs() */
	puts("Enter a string, please.");
	fgets(words, STLEN, stdin);
	printf("Your string twice (puts(), then fputs()):\n");
	puts(words);
	fputs(words, stdout);
	puts("Enter another string, please.");
	fgets(words, STLEN, stdin);
	printf("Your string twice (puts(), then fputs()):\n");
	puts(words);
	fputs(words, stdout);
	puts("Done.");

	/* fgets2.c -- ʹ�� fgets() �� fputs() */
	int i;
	char ch;
	puts("Enter strings (empty line to quit):");
	while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
		//ÿ�ζ�9���ַ�, ��10����\0, �����һ������\n(���ǿհ���)ִ��ѭ��
		fputs(words, stdout);
	words[0] = 1;//ʹ��ͨ���հ��г���һ��ѭ����, ������Ϊ�հ��н���ȥ��һ��ѭ��
	while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n'/*����հ����˳�*/)
	{
		//���ǿ�ָ��ͽ�ѭ��, �����س��ͳ�ѭ��, ������������ַ���
		for (i = 0; words[i] != '\n' && words[i] != '\0'; i++)
			continue;//��ѭ�����涨��ı�������ѭ����û��
		//��������\n\0������
		if (words[i] == '\n')//\n�滻��\0
			words[i] = '\0';
		else//һ������\0��պ�������뻺��
			while ((ch = getchar()) != '\n')
				continue;
		puts(words);
	}
	puts("Done.");
	puts("");//\n
	return 0;
}