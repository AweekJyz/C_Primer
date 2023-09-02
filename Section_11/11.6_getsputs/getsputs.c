// getsputs.c -- 使用 gets()和puts()
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
	/* fgets1.c -- 使用 fgets() 和 fputs() */
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

	/* fgets2.c -- 使用 fgets() 和 fputs() */
	int i;
	char ch;
	puts("Enter strings (empty line to quit):");
	while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
		//每次读9个字符, 第10个是\0, 如果第一个不是\n(不是空白行)执行循环
		fputs(words, stdout);
	words[0] = 1;//使得通过空白行出上一个循环的, 不会因为空白行进不去下一个循环
	while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n'/*输入空白行退出*/)
	{
		//不是空指针就进循环, 读到回车就出循环, 大巴往返接送字符串
		for (i = 0; words[i] != '\n' && words[i] != '\0'; i++)
			continue;//在循环里面定义的变量出了循环就没了
		//遇到不是\n\0的跳过
		if (words[i] == '\n')//\n替换成\0
			words[i] = '\0';
		else//一旦读到\0清空后面的输入缓存
			while ((ch = getchar()) != '\n')
				continue;
		puts(words);
	}
	puts("Done.");
	puts("");//\n
	return 0;
}