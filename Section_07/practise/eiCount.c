// eiCount.c -- ����ei�ĸ���
#include "practise.h"

void ei_count(void)
{
	char input[1000] = { '\0' };
	int count = 0, i;
	char ch;

	printf("�������ַ�������#������\n");
	//���ַ��жϽ�������scanf��������
	for (i = 0; (ch = getchar()) != '#'; i++)
		input[i] = ch;
	//û���õ�'#"�Ͳ����ѭ��
	input[i] = '\0';
	//'#'֮ǰȫ�����뵽�ַ�������
	for (i = 0; i < strlen(input); i++) 
		if (input[i] == 'e' && input[i + 1] == 'i') 
			count++;
	printf("�ַ����� \"ei\" ���ֵĴ���Ϊ��%d\n", count);


	//char ch;
	//int i = 0;//������ͺͼ����ı���Ҫ��ʼ��. 

	//printf("������һ���ַ�, ��'#'��β. \n");
	//ch = getchar();
	//while (ch != '#')
	//{
	//	if (ch == 'e' && ((ch = getchar()) == 'i'))
	//		//�ô������Ҷ�ȡ
	//		i++;
	//	else
	//	{//e����������־ͻ����, ����if��else���ε�getchar
	//		//������һ���ַ����ж�
	//		ch = getchar();
	//		continue;
	//	}
	//}
	//printf("ei������%d��. \n", i);

	return;
}