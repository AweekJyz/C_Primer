// copy1.c  -- 演示strcpy()
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define WORDS "beast"
#define SIZE 40
#define TARGSIZE 7
#define LIM 5
void copy2(void);
void copy3(void);
char* s_gets(char* st, int n);

int main(void)
{
	char qwords[LIM][SIZE];
	char temp[SIZE];
	int i = 0;

	printf("Enter %d word beginning with q:\n", LIM);
	while (i < LIM && s_gets(temp, SIZE))
	{
		if ('q' != temp[0])
			printf("%s doesn't begin with q!\n", temp);
		else
		{
			char* str = strcpy(qwords[i], temp);
			i++;
		}
	}
	puts("Here are the words accepted:");
	for (i = 0; i < LIM; i++)
		puts(qwords[i]);
	// copy2.c -- strcpy()属性
	puts("");
	copy2();
	/* copy3.c -- 使用strncpy() */
	puts("");
	copy3();

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
// copy2.c -- strcpy()属性
void copy2(void)
{
	const char* orig = WORDS;
	char copy[SIZE] = "Be the beat that you can be.";
	char* ps;
	puts(orig);
	puts(copy);
	ps = strcpy(copy + 7, orig);
	puts(copy);
	puts(ps);
}
void copy3(void)
{
	char qwords[LIM][TARGSIZE];
	char temp[SIZE];
	int i = 0;
	printf("Enter %d words beginning with q:\n", LIM);
	while (i < LIM && s_gets(temp, SIZE))
	{
		if (temp[0] != 'q')
			printf("%s doesn't begin with q!\n", temp);
		else
		{
			strncpy(qwords[i], temp, TARGSIZE - 1);
			qwords[i][TARGSIZE - 1] = '\0';//被截断的没有\0需要补充
			i++;
		}
	}
	puts("Here are the words accepted:");
	for (i = 0; i < LIM; i++)
		puts(qwords[i]);

}