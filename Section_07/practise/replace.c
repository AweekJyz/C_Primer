// replace.c -- �滻����
#include "practise.h"

void replace(void)
{
	char ch;
	int i = 0;//�滻�Ĵ���

	printf("������һ���ַ�, ����'#'��β. \n");
	while ((ch = getchar()) != '#')
	{
		if (ch == '.')
		{
			ch = '!';
			putchar(ch);
			i++;
		}
		else if (ch == '!')
		{
			printf("!!");
			i++;
		}
		else if (ch == '\n')
		{
			printf("\n���������, ����'#'��β.\n");
			continue;
		}
		else
			putchar(ch);
	}
	while (getchar() != '\n')
		continue;
	printf("\nһ���滻��%d��. \n", i);

	return;
}
void replace_switch(void)
{
	char ch;
	int i = 0;//�滻�Ĵ���

	printf("������һ���ַ�, ����'#'��β. \n");
	while ((ch = getchar()) != '#')
	{
		switch(ch)
		//��if�����������������˳��, switch��Ҫע��
		{
		case '\n':
			printf("\n���������, ����'#'��β.\n");
			continue;
		case '!':
			printf("!!");
			i++;
			break;
		case '.':
			ch = '!';
			i++;
		//����ʡ��break, ������default����putchar. 
		default:
			putchar(ch);
			break;
		}
	}
	while (getchar() != '\n')
		continue;
	printf("\nһ���滻��%d��. \n", i);

	return;
}