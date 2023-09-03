// mod_str.c -- 修改字符串
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define LIMIT 81
void ToUpper(char*);
int PunctCount(const char*);

int main(void)
{
	char line[LIMIT];
	char* find;

	puts("Please enter a line:");
	fgets(line, LIMIT, stdin);
	find = strchr(line, '\n');//查找首个换行符
	if (find)//如果地址不是NULL
		*find = '\0';
	ToUpper(line);
	puts(line);
	printf("That line has %d punctuation characters.", PunctCount(line));

	return 0;
}
void ToUpper(char* str)
{
	while (*str)
	{
		*str = toupper(*str);
		str++;
		//*str = toupper(*str++);//错误
	}
}
int PunctCount(const char* str)
{
	int ct = 0;
	while (*str)
	{
		if (ispunct(*str))
			ct++;
		str++;
	}
	return ct;
}