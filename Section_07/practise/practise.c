// pratise -- ������֧������ϰ
#include "practise.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;//���
	int i_scanf = 0;

	printf("%s\n", STARTS);
	printf("1) ͳ���ַ�	2) ���ASCII��\n");
	printf("3) ��ƽ��ֵ	4) �滻�ַ�1\n");
	printf("5) �滻�ַ�2	6) ͳ��'ei'\n");
	printf("7) ���㹤��1	8) ���㹤��2\n");
	printf("9) ����		10) ˰�շ���\n");
	printf("11) �ʹ��߲�	0) �˳�\n");
	printf("%s\n", STARTS);
	printf("���������(1~%d)(����0�˳�): \n", TOTAL);
	i_scanf = scanf("%d", &i);//��һ������
	while( i != 0)
	{
		while ((i_scanf != 1) || (i < 0 || i > TOTAL))
		{
			if (i_scanf != 1)
				printf("����Ĳ�������, ������1��%d������. \n",
					TOTAL);
			else
				printf("�����������Χ����. ������1��%d������. \n ", 
					TOTAL);
			while (getchar() != '\n')
				continue;
			printf("���������(1~%d)(����0�˳�): ", TOTAL);
			i_scanf = scanf("%d", &i);
			//Ҫ���ÿ��ѭ��ÿ���Ƿ񶼸���������
		}
		while (getchar() != '\n')
			continue;//��յ�һ������Ļ���
		switch (i)
		{
		case 1:
			printf("��һ��, ͳ�ƿո�, �س�������. \n");
			repo_char();
			break;
		case 2:
			printf("�ڶ���, �õ������ַ���ASCII��. \n");
			char_ascii();
			//char_ascii_2();
			break;
		case 3:
			printf("������, ����������ż��ƽ��ֵ. \n");
			odd_average();
			break;
		case 4:
			printf("������, �滻'.''!'Ϊ'!''!!'. \n");
			replace();
			break;
		case 5:
			printf("������, ͬ������, ��switchʵ��. \n");
			replace_switch();
			break;
		case 6:
			printf("������, ͳ��'ei'���ִ���. \n");
			ei_count();
			break;
		case 7:
			printf("������, ����˰������. \n");
			salary();
			break;
		case 8:
			printf("�ڰ���, �̵�����, �Զ���ʱн. \n");
			salary_choice();
			break;
		case 9:
			printf("�ھ���, ����������������������. \n");
			small_prime();
			break;
		case 10:
			printf("��ʮ��, ������ݼ���Ӧ��˰��. \n");
			tax1988();
			break;
		case 11:
			printf("��ʮһ��, �ʹ��߲�. \n");
			vegetable();
			break;
		default:
			printf("Oops!");
			break;
		}
		//while (getchar() != '\n')
		//��������, ���û�лس��ͻ�һֱ�������������
		//	continue;//��ջ���
		printf("Good!\n\n");
		printf("���������(1~%d)(����0�˳�): ", TOTAL);
		i_scanf = scanf("%d", &i);
		
	}
	printf("Bye! See you next time!\n");

	return 0;
}