// scan_str.c --ʹ��scanf()
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void puts2(const char string[]);
void puts1(const char* string);

int main(void)
{
	char name1[11], name2[11];
	int count;

	while (1)
	{
		printf("Please enter 2 names. \n");
		count = scanf("%5s %10s", name1, name2);
		if ('>' == name1[0])
			//���ܵ�����һ���ַ����������ַ�������������==�Ա�, �ַ���������ֻ��һ����ַ
			break;
		printf("I read the %d names %s and %s. \n", count, name1, name2);
	}
	int ch = puts3("I read the %d names %s and %s.");
	puts1("I read the %d names %s and %s.");
	puts2("I read the %d names  and %s.");
	puts("");
	printf("%d", ch/*puts3("I read the %d names %s and %s.")*/);
	//�����������һ�ξͻ����һ��,��������while���滹��printf,scanf����.������ʱ��ֻ��Ҫ���ķ���ֵ.����ý��?

	return 0;
}