// cypher.c -- ��������, �ո񲻱�
#include <stdio.h>
#define SPACE ' ' //SPACE��ʾ������-�ո�-������
#include <ctype.h>
int main(void)
{
	char ch;

	//ch = getchar();			//��ȡһ���ַ�
	while ((ch = getchar()) != '\n')		//��һ��δ����ʱ
	{
		if (/*ch == SPACE*/isalpha(ch))//���¿ո�		//���³������������ַ�
			putchar(ch + 1);	
		else
			putchar(ch);	//���ַ�ԭ�����
		///ch = getchar();
	}
	putchar(ch);			//��ӡ���з�

	return 0;
}