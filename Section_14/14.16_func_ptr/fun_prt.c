// func_prt.c -- 使用函数指针
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define LEN 81
char* s_gets(char* st, int n);
char showmenu(void);
void eatline(void);
void show(void(*fp)(char*), char* str);
void ToUpper(char*);
void ToLower(char*);
void Transpose(char*);
void Dummy(char*);

int main(void)
{
	char line[LEN];
	char copy[LEN];
	char choice;//int?
	void(*pfun)(char*) = NULL;//声明一个函数指针
	enum Abc{toupper = (int)'u', 
		tolower = (int)'l', 
		transpose = (int)'t', 
		dummy = (int)'o'}choices = dummy;

	puts("Enter a string (empty line to quit):");
	while (s_gets(line, LEN) != NULL && line[0] != '\0')
	{
		while ((choice = showmenu()) != 'n')
		{
			switch (choice)
			{
			case 'u': pfun = ToUpper;	break;
			case 'l': pfun = ToLower;	break;
			case 't': pfun = Transpose;	break;
			case 'o': pfun = Dummy;		break;
			}
			strcpy(copy, line);	//为show()函数拷贝一份
			show(pfun, copy);	//根据用户选择, 使用选定函数
		}
		puts("Enter a string (empty line to quit):");
	}
	puts("Bye!");

	return 0;
}
char* s_gets(char* st, int n)
{
	char* ret_val;
	char* find;

	if ((ret_val = fgets(st, n, stdin)))
	{
		if (find = strchr(st, '\n'))
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}
char showmenu(void)//enum枚举类型?
{
	char ans;
	puts("Enter menu choice:");
	puts("u) uppercase		l) lowercase");
	puts("t) transposed case	o) origianl case");
	puts("n) next string");
	ans = getchar();
	ans = tolower(ans);
	eatline();
	while (strchr("ulton", ans) == NULL)
	{
		puts("Please enter a u, l, t, o, or n:");
		ans = tolower(getchar());
		eatline();
	}

	return ans;
}
void eatline(void)
{
	while (getchar() != '\n')
		continue;
}
void show(const void(*fp)(char*), char* str)//const?
{
	(*fp)(str);
	puts(str);
}
void ToUpper(char* str)
{
	while (*str)
	{
		*str = toupper(*str);
		str++;
	}
}
void ToLower(char* str)
{
	while (*str)
	{
		*str = tolower(*str);
		str++;
	}
}
void Transpose(char* str)
{
	while (*str)
	{
		if (islower(*str))
			*str = toupper(*str);
		else if (isupper(*str))
			*str = tolower(*str);
		str++;
	}
}
void Dummy(char* str)
{
	//不改变字符串
}